#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
struct node
{
    int c;
    int e;
    struct node *next;
};
struct node* create(struct node*);
struct node* insert_s(struct node*,int,int);
struct node* insert(struct node*,int,int);
void display(struct node*);
void add(struct node*,struct node*);
void main()
{
    struct node *s1=NULL,*s2=NULL;
    pf("\n Enter polynomial 1:");
    s1=create(s1);
    pf("\n Enter polynomial 2:");
    s2=create(s2);
    pf("\n Polynomial 1 is:");
    display(s1);
    pf("\n polynomial 2 is:");
    display(s2);
    add(s1,s2);
}
struct node* create(struct node *s)
{
    int i,n,co,ex;
    pf("\n Enter no of terms:");
    sf("%d",&n);
    for(i=1;i<=n;i++)
    {
        pf("\n Enter the coeficient for term %d:";);
        sf("%d",&co);
        pf("Enter the exponent for term: %d:";);
        sf("%d",&ex);
        s=insert_s(s,co,ex);
        }
        return s;
};
struct node* insert_s(struct node *s,int co,int ex)
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->c=co;
    temp->e=ex;
    if(s==NULL||ex>s->e)
    {
        temp->next=s;
        s=temp;
        return s;
    }
    ptr=s;
    while(ptr->next!=NULL &&(ptr->next)->e>=ex)
        ptr=ptr->next;
    temp->next=ptr->next;
    ptr->next=temp;
    return s;
};
struct node* insert(struct node *s,int co,int ex)
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->c=co;
    temp->e=ex;
    if(s==NULL)
    {
        temp->next=s;
        s=temp;
        return s;
    }
    ptr=s;
    while((ptr->next)!=NULL)
        ptr=ptr->next;
        temp->next=ptr->next;
        ptr->next=temp;
        return s;
};
void display(struct node *ptr)
{
    if(ptr==NULL)
    {
        pf("\n Zero polynomial");
        return;
    }
    while(ptr!=NULL)
    {
        pf("%d x^ %d",ptr->c,ptr->e);
        ptr=ptr->next;
        if(ptr!=NULL)
            pf("+");
        else
            pf("\n");
    }
}
void add(struct node *p1,struct node *p2)
{
    struct node *s3=NULL;
    while(p1!=NULL && p2!=NULL)
    {
if(p1->e>p2->e)
{
s3=insert(s3,p1->c,p1->e);
p1=p1->next;
}
}
else if(p2->e>p1->e)
{
    s3=insert(s3,p2->c,p2->e);
    p2=p2->next;
}
else{
    s3=insert(s3,p1->c+p2->c,p1->e);
    p1=p1->next;
    p2=p2->next;
}
}
while(p1!=NULL)
{
    s3=insert(s3,p1->c,p1->e);
    p1=p1->next;
}
while(p2!=NULL)
{
    s3=insert(s3,p2->c,p2->e);
    p2=p2->next;
}
pf("\n Added Polynomial is:\n");
display(s3);
}





