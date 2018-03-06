/* Nhinh Dao
CSCI 13500
Project 1C
Reading multiple formulas
Reading multiple formulas
Reading multiple formulas
Reading multiple formulas
Reading multiple formulas
Date: 02/28/2018 */


#include <iostream>
#include <string>
using namespace std;

int main() {
	int numbers;
	int sum = 0;
	char operators;
	cin >> sum;
	while (cin >> numbers >> operators){
		if (operators == '+'){
			sum += numbers;
		}
		else if (operators == '-'){
			sum -= numbers;
		}
		else if ( operators = ';'){
			cout << sum << endl;
			sum = 0;
			sum += numbers;
		}
		
	}
	cout << sum;
	return 0;
}