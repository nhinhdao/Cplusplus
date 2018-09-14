/*Nhinh Dao
CSCI 13600 - Lab4
compile with G++ trazepoid.cpp -o trapezoid */

#include <iostream>
using namespace std;

int main(){
	int w, h;
	cout << "Enter width: ";
	cin >> w;
	cout << "Enter height: ";
	cin >> h;
	cout << endl;

	if (h*2 <= w + 1) {
		for (int row = 0; row < h; row++){
			for (int col = 0; col < w; col++){
				if (row <= col && (row + col <= w - 1)) {
					cout << "*";
				}
				else  {
					cout << " ";
				}
			}

			cout << endl;
		}
	}
	else { cout << "Impossible shape!" << endl; }

	return 0;
}


I hate myself whenever I am next to her.
