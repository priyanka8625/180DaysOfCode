#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //create ifstream object
    ifstream fin;
    // open file
    fin.open("zoom.txt");
    // read data to it
    char c;
    while(!fin.eof()){
        c = fin.get();//this approach will read all the chars including spaces, tabs, or \n
        cout<<c;
    }
    // close file
    fin.close();
    return 0;
}
