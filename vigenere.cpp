/*
Author: Nhinh Dao
Course: CSCI-136
Instructor: Eric Critser
Assignment: Lab7C
Task C. Implementing Vigenere cipher encryption
Task C. Implementing Vigenere cipher encryption
Task C. Implementing Vigenere cipher encryption
Task C. Implementing Vigenere cipher encryption
Task C. Implementing Vigenere cipher encryption
Task C. Implementing Vigenere cipher encryption
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void getInput(string &n, string &t);
string encryptVigenere(string n, string t);

int main(){
        string n, t;
        getInput(n, t);
        string output = encryptVigenere(n, t);
        cout << "Ciphertext: " << output << endl;
        return 0;
}
   
void getInput(string &plaintext, string &keyword){
        cout << "Enter plaintext: ";
        getline(cin, plaintext);
        cout << "Enter keyword: ";
        cin >> keyword;
        cout << "Your line was: " << plaintext << ", " << keyword << endl;
        return;
}


char shiftChar(char c, char d){
        char b;
        if ((int) c >= 65 && (int) c <= 90){
                if (((int) c + ((int) d - 97))> 90){
                        b = (char) (((int) c + ((int) d - 97)) % 90 + 64);
                }
                else {
                b = (char) ((int) c + ((int) d - 97));
                }
        }
        if ((int) c >= 97 && (int) c <= 122){
                if (((int) c + ((int) d - 97))> 122){
                        b = (char) (((int) c + ((int) d - 97)) % 122 + 96) ;
                }
                else {
                b = (char) ((int) c + ((int) d - 97));
                }
        }
        return b;
}


string encryptVigenere(string plaintext, string keyword) {
        ostringstream oss;
        for (unsigned int i = 0, e = 0; i < plaintext.size(); i++, e++){
                if (isalpha(plaintext[i])) {
                        if (e >= keyword.size()){
                                e = 0;
                        }
                        oss << shiftChar(plaintext[i], keyword[e]);
                }
                else {
                        e--;
                        oss << plaintext[i];
                }
        }
        return oss.str();   
}