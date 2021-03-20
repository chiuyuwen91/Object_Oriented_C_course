#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int i; // declare numeric type variables
  int sum = 0;
  char c; // declare charater type variable
  do      // do while loop to execute the process
  {
    cin >> i;   // input the value
    sum += i;   // sum up the value
    cin.get(c); // input the charater, the main purpose is to detect the '\n' charater
  } while (c != '\n');

  cout << sum << endl; // when the process ends, the system would print out the outcome

  return 0;
}
