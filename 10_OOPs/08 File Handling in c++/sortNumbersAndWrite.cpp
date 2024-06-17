#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //create ofstream object
    ofstream fout;
    //read data from user
    vector<int> arr(5);
    cout<<"Enter numbers: ";
    for(int i=0; i<5; i++)
        cin>>arr[i];

    // open file
    fout.open("z1.txt");

    fout<<"Original Data: \n";
    for(int i=0; i<5; i++)
        fout<<arr[i]<<" ";

    sort(arr.begin(), arr.end());

    fout<<"\nSorted Data: \n";
    for(int i=0; i<5; i++)
        fout<<arr[i]<<" ";

    // close file
    fout.close();
    return 0;
}
