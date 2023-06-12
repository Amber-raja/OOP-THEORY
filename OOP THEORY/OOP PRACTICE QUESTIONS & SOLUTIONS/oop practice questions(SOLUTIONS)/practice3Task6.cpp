#include <iostream>
using namespace std;
class bookType
{
  string title;
  int authors;
  string author[4];
  string publisher;
  string isbn;
  int price;
  int noOfcopies;

public:
  void settitle()
  {
    cout << "Enter title of the book: " << endl;
    cin >> title;
  }
  void setauthors()
  {
    cout << "Enter the number of authors: " << endl;
    cin >> authors;
    if (authors <= 4 && authors >= 1)
    {
      for (int i = 0; i < authors; i++)
      {
        cout << "Enter author's name: " << endl;
        cin >> author[i];
      }
    }
  }

  void setpublisher()
  {
    cout << "Enter the name of publisher: " << endl;
    cin >> publisher;
  }
  void setisbn()
  {
    cout << "Enter ISBN for the book " << endl;
    cin >> isbn;
  }

  void setprice()
  {
    cout << "Enter price of the book: " << endl;
    cin >> price;
  }

  void setnoc()
  {
    cout << "Enter number of copies: " << endl;
    cin >> noOfcopies;
  }

  void displaytitle()
  {
    cout << "The title is " << title << endl;
  }
  void displayauthors()
  {
    cout << "The author is: " << authors << endl;
  }

  void displaypublisher()
  {
    cout << "The publisher is :" << publisher << endl;
  }
  void displayisbn()
  {
    cout << "The ISBN of the book is: " << isbn << endl;
  }
  void displayprice()
  {
    cout << "The price is: " << price << endl;
  }
  void displayNoofCopies()
  {
    cout << "The number of copies are: " << noOfcopies << endl;
  }

  void setData()
  {
    settitle();
    cout << endl;
    setauthors();
    cout << endl;
    setpublisher();
    cout << endl;
    setisbn();
    cout << endl;
    setprice();
    cout << endl;
    setnoc();
  }
  void dispData()
  {
    displaytitle();
    displayauthors();
    displaypublisher();
    displayisbn();
    displayprice();
    displayNoofCopies();
  }

  void updateCopies()
  {
    cout << "Enter the updated copies of book:" << endl;
    int n;
    cin >> n;
    noOfcopies = n;
  }

  string returnTitle()
  {
    return title;
  }

  string returnISBN()
  {
    return isbn;
  }
};
void searchTitle(bookType b[], int n)
{
  cout << "Enter the book title: " << endl;
  string t;
  cin >> t;
  for (int i = 0; i < n; i++)
  {
    string p = b[i].returnTitle();
    if (t == p)
    {
      b[i].dispData();
    }
  }
}

void searchISBN(bookType x[], int n)
{
  cout << "Enter ISBN no: " << endl;
  string isbn;
  cin >> isbn;
  for (int i = 0; i < n; i++)
  {
    string s = x[i].returnISBN();
    if (isbn == s)
    {
      x[i].dispData();
    }
  }
}
int main()
{
  cout << "Enter no of books you want to add: " << endl;
  int n;
  cin >> n;
  bookType y[n];
  while (1)
  {
    cout << "1. Enter data of the book" << endl;
    cout << "2. Search book by title" << endl;
    cout << "3. Search book by isbn" << endl;
    cout << "4. Update number of copies" << endl;
    cout << "5. Exit" << endl;
    cout << "Select an option" << endl;
    int input;
    cin >> input;
    if (input == 1)
    {
      for (int i = 0; i < n; i++)
      {
        cout << "Enter data for book " << i + 1 << endl;
        y[i].setData();
      }
    }
 //Develop a program that calculates the areas of different shapes and compares them. The program should implement the concept of polymorphism by using a base class called shape with two pure virtual functions: calcArea() to calculate the area of shape and display to display information about the shape. Implement derived classes for different shapes: Create a class called circle that inherits from the shape class. It should have a private data member for the radius and provide the implementation for calcArea() and display(). Create a class called rectangle that inherits from the shape class. It should have private data members for the width and height and provide the implementations for calcArea() and display(). Create a class called Triangle that inherits from the shape class. It should have private data members for the base and height and provide the implementations for calcArea() and display(). Overload the > operator as a friend function for the shape class to compare the areas of two shapes. In the main function: Create objects of each shape with appropriate dimensions. Calculate the display and areas of the shapes using the calcArea() and display functions. Compare the areas of any two shapes using the overload > operator and display the result. Your classes must have destructors and the destructor of each class must be called when your objects get out of scope. 
    else if (input == 2)
    {
      searchTitle(y, n);
    }
    else if (input == 3)
    {
      searchISBN(y, n);
    }
    else if (input == 4)
    {
      for (int i = 0; i < n; i++)
      {
        cout << "Enter no of copies for book" << i + 1 << endl;
        y[i].updateCopies();
      }
    }
    else
    {
      break;
    }
  }
}