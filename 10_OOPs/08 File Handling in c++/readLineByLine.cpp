#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //create ifstream object
    ifstream fin;
    // open file
    fin.open("zoom.txt");
    // read data to it
    string line;
    while(getline(fin, line)){
        cout<<line<<endl;
    }
    // close file
    fin.close();
    return 0;
}