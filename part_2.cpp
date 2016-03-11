/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Alan Reeve <areeve@csu.fullerton.edu>,
                        Shang Gao <sgao96@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */
//this program is an example of how to use function templates

#include<iostream>
#include "keyboardKey.h"

template <typename T>
void Swap(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

template <typename P>
void AskForInput()
{
	P xsub;
	P ysub;

	std::cout << "Please enter two " << typeid(xsub).name() << "."
		<< std::endl;
	std::cin >> xsub;
	std::cin >> ysub;

	std::cout << xsub << " " << ysub << std::endl;

	Swap(xsub, ysub);

	std::cout << xsub << " " << ysub << std::endl;
}

int main()
{
	AskForInput<int>();

	AskForInput<char>();

	system("PAUSE");

	keyboardKey<int> number;

	number.printToScreen();

	keyboardKey<char> letter;
	letter.printToScreen();

	system("PAUSE");

	return 0;
}
