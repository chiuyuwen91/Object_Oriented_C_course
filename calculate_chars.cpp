#include <iostream>
using namespace std;
int main()
{

  char str[100];                       // declare array
  int c = 0, count[58] = {0}, x, y, e; // declare numeric type variables

  cin.get(str, 100); // input content

  while (str[c] != '\n')
  { // while loop to execute and stop when EOF shows

    if (str[c] >= 'A' && str[c] <= 'Z')
    { // use ASCII to calculate the value and put into count
      x = str[c] - 'A';
      count[x]++;
    }
    else if (str[c] >= 'a' && str[c] <= 'z')
    {
      y = str[c] - 'A';
      count[y]++;
    }
    c++;
  }
  for (e = 0; e < 58; e++) // use for loop to present the outcome

    if (e >= 26 && e <= 31)
    { // ignore non-characters symbols
      continue;
    }
    else
    {
      cout << char(e + 'A') << " occurs " << count[e] << " times in the string" << endl;
    }
  return 0;
}
