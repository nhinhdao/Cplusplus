/*Nhinh Dao
CSCI 13600 - Lab4
***
***
***
compile with G++ trazepoid.cpp -o trapezoid */

#include <iostream>
using namespace std;

int main() {

  int h, w, n = 3;
  cout << "Input width: ";
  cin >> w;
  cout << "Input height: ";
  cin >> h;
  cout << endl;
  cout << "Shape" << endl;

  for (int bigrow = 0; bigrow < h/3; bigrow++){
    for (int smallrow = 0; smallrow < n; smallrow++){
      for (int bigcol = 0; bigcol < w/3; bigcol++){
        for (int smallcol = 0; smallcol < n; smallcol++){
          if (bigrow % 2 == bigcol % 2){
            cout << "*"; }
            else { cout << " ";}
          }
        }
        cout << endl;
      }
    }
  return 0;
}
