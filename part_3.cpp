/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Alan Reeve <areeve@csu.fullerton.edu>,
                        Shang Gao <sgao96@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */
// assignment 03, part 03
// this program is an example program using containers from the Standart Template Library

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <random>

using std::cout;
using std::cin;

namespace {
	unsigned int mtrand(unsigned int low, unsigned int high) {
		static std::random_device rd;
		static std::mt19937 mt(rd());  // engine (mersenne twister)
		return std::uniform_int_distribution<unsigned int>(low, high)(mt);
	}
}
int main() {

	std::vector<int> vect(5);
	int temp;

	std::set<int> set;
	std::map<char, int> map;

// populate vector vect and output content
	for (int &i : vect) 
		i = mtrand(0,1000);
	
	cout << "Here are 5 integer values stored in a vector: \n"; 
	for (int n : vect) 
		cout << n << std::endl;

// modify the vector 	
	cout << "Enter an integer to be added to the vector: ";
	cin >> temp;
	vect.push_back(temp);

	cout << "Here is the updated vector: \n"; 
	for (int n : vect) 
		cout << n << std::endl;

// populate set with unique keys and output it
	for (int n = 0; n < 5; n++) 
		set.insert(n);
	
	cout << "Here is a set of integer keys: \n";
	for (int n : set)
		cout << n << std::endl;

// insert two mapped elements to map and output them
	map.insert (std::pair<char, int>('x', 5));
	map.insert (std::pair<char, int>('y', 5));

	cout << "Here are two values from a map with keys 'x' and 'y': \n";
	cout << "x is equal to: " << map['x'] << std::endl;
	cout << "y is equal to: " << map['y'] << std::endl;

	return 0;
}
