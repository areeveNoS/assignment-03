/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Alan Reeve <areeve@csu.fullerton.edu>,
                        Shang Gao <sgao96@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

// this program is an example program of recursive functions


#include <iostream>

using std::cout;
using std::endl;

// this function takes in two ints and returns the greatest common divisor of the two using Euclid's algorithm
int gcd(int, int);
int fib(int);
int pow(int, int);
int tri(int);

int main(){

cout << "gcd: " << gcd(5, 10) << endl;
cout << "fib: " << fib(4) << endl;
cout << "pow: " << pow(-2, 4) << endl;
cout << "tri: " << tri(40) << endl;

	return 0;
}

int gcd(int a, int b){

	if (a < 0)
		a *= -1;
	if (b < 0)
		b *= -1;

	if (a == 0)
		return b;
	else if (b == 0)
		return a;

	if (a > b)
		return gcd(a-b, b);
	else
		return gcd(a, b-a);

}

int fib(int n){

	if (n < 1)
		throw "invalid input";
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;

	return fib(n-1) + fib(n-2);
}

int pow(int a, int b){
	if (b < 0) 
		throw "negative exponent";

	if (b == 0)
		return 1;

	return a * pow(a, b - 1);
}

int tri(int n){
	if (n < 1)
		throw "invalid input";

	if (n == 1)
		return 1;

	return n + tri(n-1);
}
