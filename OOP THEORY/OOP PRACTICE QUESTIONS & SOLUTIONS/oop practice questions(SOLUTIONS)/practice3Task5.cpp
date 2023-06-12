#include <iostream>
using namespace std;
class romanType
{
    string roman;
    int decimal;

public:
    int convtoDecimal(string roman)
    {
        int n = roman.size();
        int decimal;
        for (int i = 0; i < n; i++)
        {
            if (roman[i] == 'M')
            {
                decimal = decimal + 1000;
            }
            else if (roman[i] == 'D')
            {
                decimal = decimal + 500;
            }
            else if (roman[i] == 'C')
            {
                decimal = decimal + 100;
            }
            else if (roman[i] == 'L')
            {
                decimal = decimal + 50;
            }
            else if (roman[i] == 'X')
            {
                decimal = decimal + 10;
            }
            else if (roman[i] == 'V')
            {
                decimal = decimal + 5;
            }
            else if (roman[i] == 'I')
            {
                decimal = decimal + 1;
            }
            // return decimal;
        }
        return decimal;
    }
    void RomanNo()
    {
        cout << "Enter a roman number: " << endl;
        cin >> roman;
    }
    void display()
    {
        int d = convtoDecimal(roman);
        cout << roman << "  as decimal number is equal to: " << d << endl;
    }
};
int main()
{
    romanType R;

    while (1)
    {
        cout << "Enter 1 to store the number as a Roman numeral" << endl;
        cout << "Enter 2 to Convert and store the number into decimal form" << endl;
        cout << "Enter 3 to exit the code" << endl;
        int input;
        cout << "Enter your choice: " << endl;
        cin >> input;
        if (input == 1)
        {
            R.RomanNo();
        }
        else if (input == 2)
        {
            R.display();
        }
        else if (input == 3)
        {
            cout << "Exited" << endl;
            break;
        }
    }
}