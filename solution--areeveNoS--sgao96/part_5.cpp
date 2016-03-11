/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Alan Reeve <areeve@csu.fullerton.edu>,
                        Shang Gao <sgao96@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */
// assignment 03, part 05
// this program is an example program of iterative functions


#include <iostream>

using std::cout;
using std::endl;

// this function takes in two ints and returns the greatest common divisor of the two using Euclid's algorithm
int gcd_iter(int, int);
int fib_iter(int);
int pow_iter(int, int);
int tri_iter(int);

int main(){

cout << "gcd: " << gcd_iter(-6, -24) << endl;
cout << "fib: " << fib_iter(8) << endl;
cout << "pow: " << pow_iter(-2, 4) << endl;
cout << "tri: " << tri_iter(40) << endl;

	return 0;
}

int gcd_iter(int a, int b){

	if (a < 0)
		a *= -1;
	if (b < 0)
		b *= -1;

	if (a == 0)
		return b;
	else if (b == 0)
		return a;

	if (a > b){		
		for (int i = b; i > 0; i--){
			if(a % i == 0)
				return i;
		}
	}
	else{
		for (int i = a; i > 0; i--){
			if(b % i == 0)
				return i;
		}
	}

}

int fib_iter(int n){

	int sum = 0;
	int first = 0;
	int second = 1;
	int temp;

	if (n < 1)
		throw "invalid input";
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;

	for (int i = 0; i < n-1; i++){
		temp = first;
		first = second;
		second = temp + second;
	}

	return second;
}

int pow_iter(int a, int b){
	int result = a;
	if (b < 0) 
		throw "negative exponent";

	if (b == 0)
		return 1;

	for(int i = 0; i < b-1; i++)
		result *= a;

	return result;
}

int tri_iter(int n){
	int sum = 0;
	if (n < 1)
		throw "invalid input";

	if (n == 1)
		return 1;

	for(int i = 1; i <= n; i++)
		sum += i;

	return sum;

}
