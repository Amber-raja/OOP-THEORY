#include <iostream>
#include <iomanip>
using namespace std;
class angle
{
private:
  int degrees;
  float minutes;
  char direction;

public:
  void getvalues()
  {
    cout << "Enter value in degrees: " << endl;
    cin >> degrees;
    cout << "Enter value in minutes: " << endl;
    cin >> minutes;
    cout << "Enter direction: " << endl;
    cin >> direction;
  }
  void displayValues()
  {
    cout << degrees << "\xF8" << minutes << " '" << direction << endl;
  }
  angle(int d = 0, float mint = 0, char dir = ' ')
  {
    degrees = d;
    minutes = mint;
    direction = dir;
  }
};
int main()
{
  angle angle1;
  int option;
  while (1)
  {
    cout << "Enter values: " << endl;
    cout << "1. Enter values: " << endl;
    cout << "2. Display values: " << endl;
    cout << "3. Exit" << endl;
    cin >> option;
    if (option == 1)
    {
      angle1.getvalues();
    }
    else if (option == 2)
    {
      angle1.displayValues();
    }
    else
    {
      break;
    }
  }
}
