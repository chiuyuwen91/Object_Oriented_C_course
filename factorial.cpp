#include <iostream>
using namespace std;

int f(int number) // distinguish concidtions
{
  if (number < 0) // when num is negative return minus one which means error value
    return (-1);
  else if (number == 0) // when num is zero return one
    return (1);
  else // Otherwise calculate the formula
  {
    return (number * f(number - 1));
  }
}
int main()
{
  int f(int);
  int fact, value;                                             // declare numeric type variables
  cin >> value;                                                // put in value
  fact = f(value);                                             // execute the formula
  cout << "Factorial of " << value << " is: " << fact << endl; // show the outcome
  return 0;
}
