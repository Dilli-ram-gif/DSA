#include <iostream>
using namespace std;

int main()
{
  // Defining the variables
  int first_number;
  int second_number;
  int result;

  cout << "Enter any two numbers:" << endl;
  cin >> first_number >> second_number;
  result = first_number + second_number;
  cout << "The sum is: " << result;

  return 0;
}