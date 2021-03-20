#include <iostream>
using namespace std;

int main()
{
  char cNext;                // declare character type variable
  int a, b, c;               // declare numeric type variables
  while (cin >> a >> b >> c) // while loop
  {

    if (a + b > c && b + c > a && a + c > b) // if/else loop
      cout << "fit\n";
    else
      cout << "unfit\n";

    if (cNext == '\0') // end process while EOF shows
    {
      cout << "Now: EOF\n";

      break;
    }
  }

  return 0;
}
