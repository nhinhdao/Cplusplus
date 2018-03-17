/*
Author: Nhinh Dao
Course: CSCI-136
Instructor: Eric Critser
Assignment: Lab7A

Task A. Testing ASCII
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;


void getInput(string &n);
string getAsciiLine(string s);
//int getAsciiVal(char c);

int main(){
        string n;
        getInput(n);
        string output = getAsciiLine(n);
        cout << output << endl;
        return 0;
}
   
void getInput(string &s){
        cout << "Input: ";
        getline(cin, s);
        //cout << "Your line was: " << s << endl;
        return;
}

string getAsciiLine(string s) {
        ostringstream oss;
        for (unsigned int i = 0; i < s.size(); i++){
                oss << s[i];
                oss << " ";
                oss << int(s[i]);
                oss << "\n";
        }
        return oss.str();
}




/*int getAsciiVal(char c){
        return int(c);
}*/