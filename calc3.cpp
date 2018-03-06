/* Nhinh Dao
CSCI 13500
Project 1d
Squares
Squares
Squares
Squares
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
		if (operators = '^'){
			numbers = numbers**2;
		}
		if (operators == '+'){
			sum = sum + numbers;
		}
		else if (operators == '-'){
			sum = sum - numbers;
		}
		else if ( operators = ';'){
			cout << sum << endl;
			sum = 0;
			continue;
			sum += numbers;
		}
		
	}
	cout << sum;
	return 0;
}