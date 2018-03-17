/*
Author: Nhinh Dao
Course: CSCI-136
Instructor: Eric Critser
Assignment: Lab7D
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
Task D. Decryption
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string getInputPT();
int getInputCS();
string getInputVG();
string encryptCaesar(string n, int t);
string decryptCaesar(string n, int t);
string encryptVigenere(string n, string k);
string decryptVigenere(string n, string k);

int main(){
        string n = getInputPT();
        int t = getInputCS();
        string output1 = encryptCaesar(n, t);
        cout << "Ciphertext: " << output1 << endl;
        cout << "Decrypt CipherCaesar: " << decryptCaesar(output1, t) << endl;
        string k = getInputVG();
        string output2 = encryptVigenere(n, k);
        cout << "Ciphertext: " << output2 << endl;
        cout << "Decrypt CipherVigenere: " << decryptVigenere(output2, k) << endl;
        return 0;
}

string getInputPT(){
        string x;
        cout << "Enter plaintext: ";
        getline(cin, x);
        return x;
}
   
int getInputCS(){
        int u;
        cout << "Enter right shift: ";
        cin >> u;
        return u;
}
string getInputVG(){
        string y;
        cout << "Enter keyword: ";
        cin >> y;
        return y;
}

char shiftCharCS(char c, int rshift){
        if ((int) c >= 65 && (int) c <= 90){
                if (((int) c + rshift) > 90){
                        c = (char) ((((int) c+ rshift) % 90) + 64);
                }
                else {
                c = (char) ((int) c + rshift);
                }
        }
        if ((int) c >= 97 && (int) c <= 122){
                if (((int) c+ rshift) > 122){
                        c = (char) ((((int) c + rshift) % 123) + 97) ;
                }
                else {
                c = (char) ((int) c + rshift);
                }
        }
        return c;
}

char reShiftCharCS(char b, int rshift){
        if ((int) b >= 65 && (int) b <= 90){
                if (((int) b - rshift) < 65){
                        b = (char) (91 - rshift + ((int) b - 65));
                }
                else {
                        b = (char) ((int) b - rshift);
                }
        }
        if ((int) b >= 97 && (int) b <= 122){
                if (((int) b - rshift) < 97){
                        b = (char) (123 - rshift + ((int) b - 97));
                }
                else {
                        b = (char) ((int) b - rshift);
                }
        }

        return b;
}

string encryptCaesar(string plaintext, int rshift) {
        ostringstream oss;
        for (unsigned int i = 0; i < plaintext.size(); i++){
                if (isalpha(plaintext[i])) {
                        oss << shiftCharCS(plaintext[i], rshift);
                }
                else {
                        oss << plaintext[i];
                }
                
        }
        
        return oss.str();   
}

string decryptCaesar(string op1, int rshift) {
        ostringstream oss;
        for (unsigned int i = 0; i < op1.size(); i++){
                if (isalpha(op1[i])) {
                        oss << reShiftCharCS(op1[i], rshift);
                }
                else {
                        oss << op1[i];
                }
                
        }
        return oss.str();   
}

char shiftCharVG(char c, char d){
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

char reShiftCharVG(char b, char d){
        if ((int) b >= 65 && (int) b <= 90){
                if (((int) b - ((int) d - 97)) < 65){
                        b = (char) (91 - ((int) d - 97) + ((int) b - 65));
                }
                else {
                        b = (char) ((int) b - ((int) d - 97));
                }
                
        }
        if ((int) b >= 97 && (int) b <= 122){
                if (((int) b - ((int) d - 97))< 97){
                      b = (char) (123 - ((int) d - 97) + ((int) b - 97));
                }
                else {
                        b = (char) ((int) b - ((int) d - 97));
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
                        oss << shiftCharVG(plaintext[i], keyword[e]);
                }
                else {
                        e--;
                        oss << plaintext[i];
                }
        }
        return oss.str();   
}

string decryptVigenere(string output2, string keyword) {
        ostringstream oss;
        for (unsigned int i = 0, e = 0; i < output2.size(); i++, e++){
                if (isalpha(output2[i])) {
                        if (e >= keyword.size()){
                                e = 0;
                        }
                        oss << reShiftCharVG(output2[i], keyword[e]);
                }
                else {
                        e--;
                        oss << output2[i];
                }
        }
        return oss.str();   
}