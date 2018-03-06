/* Nhinh Dao
13600
03/01/2018
lab5
Is divisible
5a
5a
5a
5a
5b
5b
5b
5b
5c
5c
5c
5c
5d
5d
5d
5d
5e
5e
5e
5f
5f
5f
compile with g++ numbers.cpp -o number */
#include <iostream>

using namespace std;
bool isDivisibleBy(int n, int d);
bool test_isDivisibleBy();
bool isPrime(int t);
bool test_isPrime();
int nextPrime(int k);
int test_nextPrime();
int countPrimes(int a, int b);
int test_countPrimes();
bool isTwinPrime(int c);
bool test_isTwinPrime();
int nextTwinPrime(int g);
int test_nextTwinPrime();
int largestTwinPrime(int j, int l);
int test_largestTwinPrime();

int main() {     
	cout << "5A: TESTING IS DIVISIBLE" << endl;
	bool res = test_isDivisibleBy();
		if (!res) {cout << "Failed Test" << endl;}
		else { cout << "Passed Tests" << endl;}
	cout << endl;
	
	cout << "5B: TESTING ISPRIME" << endl;
	bool res2 = test_isPrime();
	cout << endl;
	
	cout << "5C: TEST NEXT PRIME" << endl;
	int res3 = test_nextPrime();
	cout << endl;
	
	cout << "5D: TEST COUNT PRIME" << endl;
	int res4 = test_countPrimes();
	cout << endl;
	
	cout << "5E: TEST TWIN PRIME" << endl;
	int res5 = test_isTwinPrime();
	cout << endl;
	
	cout << "5F: TEST NEXT TWIN PRIME" << endl;
	int res6 = test_nextTwinPrime();
	cout << endl;
	
	cout << "5G: TEST LARGEST TWIN PRIME" << endl;
	int res7 = test_largestTwinPrime();
	cout << endl;
	return 0;
}       
		 
bool isDivisibleBy(int n, int d){
	if (d == 0){
		cout << "Division by ZERO!" << endl;
		return false;
	}
	return (n%d==0);
}

bool test_isDivisibleBy(){
	const int LEN = 3;
	int test_n[LEN] = {0,6,4};
	int test_d[LEN] = {1,4,-2};
	bool res[LEN] = {true, false, true};
	bool pass = false;
	bool allpass = true;
	for (int i = 0; i < LEN; i++){
		pass = isDivisibleBy(test_n[i], test_d[i]) == res[i];
		allpass = pass && allpass;
		if(!pass){
		cout << "Test IsDivisible" << test_n[i] << " and " << test_d[i] << "expected " << res[i]
		<< endl;
		}
	}
	return allpass;
}

bool isPrime(int t){
	if (t <= 1) {
		return false;
	}
	if (t == 2) { 
		return true;
	}
	if (t>2){
		for (int e = 2; e < t; e++){
			if ( t % e == 0) {
				return false;
			}
			
		}
	}
	return true;     
}

bool test_isPrime(){
	const int LEN = 5;
	int test_t[LEN] = {7, 9, 12, 13, 26};
	for (int i = 0; i < LEN; i++){
		if (!isPrime(test_t[i])) {
			{cout << test_t[i] << " is not a prime number" << endl;}
		}
		else {
			cout << test_t[i] << " a prime number" << endl;
			}
	}   
}              
int nextPrime(int k){
	for (int j = k + 1; true; j++){
		if (isPrime(j)) {
			return j;
		 }
	}
}

int test_nextPrime(){
	const int LEN = 3;
	int test_k[LEN] = {10, 15, 20};
	for (int i = 0; i < LEN; i++){
		if (!nextPrime(test_k[i])) {
			cout << "Not Found!!!" << endl;
		}
		else { 
		cout << "Found smallest prime number greater than " << test_k[i] << " is " << nextPrime(test_k[i]) << endl;
		}
	}
}

int countPrimes(int a, int b){
    int count = 0;
	for (int q = a; q <= b; q++){
		if (isPrime(q)) {
			count++;
		}
	}
	return count;
}

int test_countPrimes(){
	const int LEN = 3;
	int test_a[LEN] = {10, 10, 16};
	int test_b[LEN] = {21, 15, 24};
	int res4[LEN] = {4, 2, 3};
	for (int i = 0; i < LEN; i++){
		if (countPrimes(test_a[i], test_b[i]) != res4[i]) {
			cout << "Test countPrime " << "(" << test_a[i] << "," << test_b[i] << ") expected " << res4[i] << endl;
		}
		else if (countPrimes(test_a[i], test_b[i]) == res4[i]) {
		cout << "Found the numbers of prime numbers " << "(" << test_a[i] << "," 
		<< test_b[i] << ") is "  << countPrimes(test_a[i], test_b[i]) << endl;
		}
	}
}	

bool isTwinPrime(int c){
	int d = c + 2;
	int f = c - 2;
	if (!isPrime(c)){
		return false;
	}
	if (isPrime(d) || isPrime(f)){
		return true;
	}
	if (!isPrime(d) && !isPrime(f)) {
		return false;
	}
}

bool test_isTwinPrime(){
	const int LEN = 5;
	int test_c[LEN] = {7, 13, 17, 25, 37};
	for (int i = 0; i < LEN; i++){
		if (!isTwinPrime(test_c[i])) {
			{cout << test_c[i] << " is not a twin prime" << endl;}
		}
		else {
			cout << test_c[i] << " a twin prime" << endl;
			}
	}
}

int nextTwinPrime(int g){
	for (int h = g + 1; true; h++){
		if (isTwinPrime(h)) {
			return (h);
		 }
	}
}

int test_nextTwinPrime(){
	const int LEN = 5;
	int test_g[LEN] = {5, 16, 19, 22, 37};
	for (int i = 0; i < LEN; i++){
		if (!nextTwinPrime(test_g[i])) {
			cout << "Not Found!!!" << endl;
		}
		else { 
		cout << "Found smallest twin prime number greater than " << test_g[i] << " is " << nextTwinPrime(test_g[i]) << endl;
		}
	}
}

int largestTwinPrime(int j, int l){
	int count = 0;
	for (int z = l; z >= j; z--){
		if (!isTwinPrime(z)){
			count++;
		}
		if (isTwinPrime(z)) {
			return z;
		}
	}
	return (-1);
}

int test_largestTwinPrime(){
	const int LEN = 3;
	int test_j[LEN] = {5, 1, 14};
	int test_l[LEN] = {18, 31, 16};
	for (int i = 0; i < LEN; i++){
		if (!largestTwinPrime(test_j[i], test_l[i])) {
			cout << "Not Found!!!" << endl;
		}
		else {
		cout << "Found the largest twin prime number in range " << test_j[i] << " and " << test_l[i] << " is " << largestTwinPrime(test_j[i], test_l[i]) << endl;
		}
	}
}	
