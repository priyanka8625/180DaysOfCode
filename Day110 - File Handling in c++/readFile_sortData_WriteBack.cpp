#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    //create ifstream object
    ifstream fin;
    // open file
    fin.open("numbers.txt");
    // read data from file to vector 
    vector<int> numbers;
    string num=""; 
    while(!fin.eof()){
    	char c = fin.get();
        if(c != ' ')
        	num += c;//append in num unless you get a space 
        else{ 	
	        //once you get a complete number, push it and make num = ""
	        //numbers.push_back(stoi(num)); stoi doesn't work in dev c++
			int intNum=0;
			for(int i=0; i<num.length(); i++){
				intNum = intNum*10 + (num[i] - '0');
			}
			numbers.push_back(intNum);
	        num = "";
		}
    }
    sort(numbers.begin(), numbers.end());

    //append sorted numbers
    ofstream fout("numbers.txt", ios::app);//open file in append mode
    fout<<"\nSorted Numbers:\n";
    for(int i=0; i<numbers.size(); i++)
        fout<<numbers[i]<<" ";
        
    cout<<"Sorted!";
    
    // close file
    fin.close();
    fout.close();
    return 0;
}
