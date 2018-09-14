/* Nhinh Dao
CSCI 13500
Project 1B
Calculator program
Date: 02/28/2018 */


#include <iostream>
using namespace std;

int main() {
	int numbers;
	int sum = 0;
	char operators;
	cin >> sum;
	while (cin >> operators >> numbers){
		//while (cin >> operators >> numbers){
		//cin.get(operators);
		if (operators == '+'){
			sum += numbers;
			//cin.ignore(operators);
		}
		else if (operators == '-'){
			//cin.ignore(operators);
			//numbers = -numbers;
			sum -= numbers;
		}
		//sum += numbers;
	}
	cout << sum;
	return 0;
}
