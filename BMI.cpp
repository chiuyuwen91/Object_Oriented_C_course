#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  char name[128];
  cin >> name;
  cout << "Hello " << name << endl;

  float h, w, bmi;
  cin >> h >> w;

  cout << "Height(cm): " << h << endl;
  cout << "Weight(kg): " << w << endl;

  bmi = w / pow(h / 100, 2); //pow means exponent
  cout << bmi << endl;

  if (bmi < 18.5)
  {
    cout << "Underweight " << endl;
  }
  if (bmi >= 18.5 && bmi < 24)
  {
    cout << "Ideal " << endl;
  }
  if (bmi >= 24 && bmi < 27)
  {
    cout << "Overweight " << endl;
  }

  return 0;
}
