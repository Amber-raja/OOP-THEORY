#include <iostream>
#include <math.h>
using namespace std;

int calculateSquareLength(int length, int width)
{
    return (2 * sqrt(length * width)) / 4;
}

int calculateMaxVolume(int length, int width, int squareLength)
{
    return (length - 2 * squareLength) * (width - 2 * squareLength) * squareLength;
}

int main()
{
    int area, length, width, square_length;

    cout << "Enter area of the flat cardboard : ";
    cin >> area;

    length = sqrt(area);
    width = length;

    square_length = calculateSquareLength(length, width);

    int maximum_volume = calculateMaxVolume(length, width, square_length);

    cout << "The length and width of the cardboard are: " << length << " " << width << endl;
    cout << "The length of the square to be cut from each corner: " << square_length << endl;
    cout << "The maximum volume of the box is: " << maximum_volume << endl;

    return 0;
}