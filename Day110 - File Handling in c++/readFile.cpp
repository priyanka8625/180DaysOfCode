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
        fin>>c;//this approach won't read blank chars like spaces, tabs, or \n
        cout<<c;
    }
    // close file
    fin.close();
    return 0;
}
