#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //create ofstream object
    ofstream fout;
    // open file
    fout.open("zoom.txt");
    // write data to it
    fout<<"Hello Priyanka!";
    // close file
    fout.close();
    return 0;
}