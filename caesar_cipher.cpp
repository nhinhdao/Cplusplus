/*
Author: Nhinh Dao
Course: CSCI-136
Instructor: Eric Critser
Assignment: Lab7B
Task B. Ceasar Cipher
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void getInput(string &n, int &t);
string encryptCaesar(string n, int t);

int main(){
  string n;
  int t;
  getInput(n, t);
  string output = encryptCaesar(n, t);
  cout << "Ciphertext: " << output << endl;
  return 0;
}

void getInput(string &plaintext, int &rshift){
  cout << "Enter plaintext: ";
  getline(cin, plaintext);
  cout << "Enter right shift: ";
  cin >> rshift;
  cout << "your line was: " << plaintext << ", " << rshift << endl;
  return;
}



char shiftChar(char c, int rshift){
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


string encryptCaesar(string plaintext, int rshift) {
  ostringstream oss;
  for (unsigned int i = 0; i < plaintext.size(); i++){
    if (isalpha(plaintext[i])) {
      oss << shiftChar(plaintext[i], rshift);
    }
    else {
      oss << plaintext[i];
    }

  }

  return oss.str();
}
