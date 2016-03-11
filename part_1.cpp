/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Alan Reeve <areeve@csu.fullerton.edu>,
                        Shang Gao <sgao96@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

// example program of exception handling in c++

#include <iostream>
#include <string>
using std::cout;
using std::cin;

void getUserInput(char &userChar){
  
  cout << "Would you like to play my game? (Y/N) " << std::endl;
  
  cin >> userChar;
  
  if (userChar != 'Y' && userChar != 'N')
      throw 5;
 
}

int main() {
  
  char userChar;

  try
  {
      getUserInput(userChar);
  }
  catch (int i)
  {
      cout << "An exception occurred. Exception Nr. " << i << std::endl;
  }
  
  return 0;
}
