
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class bookType
{
    string title;
    int numofAuthors;
    vector<string> author;
    string publisher;
    string ISBN;
    double price;
    int copies;

public:
    bookType(string = " ", vector<string> = {}, string = " ", string = " ", double = 0, int = 0, int = 0);

    void setTitle(string);
    void setAuthor(string);

    string getTitle();
    bool isTitle(string);
    void displayNoOfCopies();
    void setNoOfCopies(int);
    void updateNoOfCopies(int);
    int getnoOfCopies();
    void display();
    double getPrice();
};

bookType::bookType(string t, vector<string> a, string p, string i, double pr, int c, int n)
{
    title = t;
    publisher = p;
    ISBN = i;
    price = pr;
    copies = c;
    numofAuthors = n;

    for (int j = 0; j < n; j++)
    {
        author.push_back(a[j]);
    }
}

void bookType::setAuthor(string a)
{
    author.push_back(a);
    numofAuthors++;
}

double bookType::getPrice()
{
    return price;
}

void bookType::display()
{
    cout << "Title: " << title << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Price: " << price << endl;
    cout << "No of copies: " << copies << endl;
    cout << "Authors: " << endl;
    for (int i = 0; i < numofAuthors; i++)
        cout << author[i] << endl;
}

void bookType::setTitle(string t)
{
    title = t;
}

string bookType::getTitle()
{
    return title;
}

bool bookType::isTitle(string t)
{
    return (title == t);
}

void bookType::displayNoOfCopies()
{
    cout << "Number of copies: " << copies << endl;
}

void bookType::setNoOfCopies(int c)
{
    copies = c;
}

void bookType::updateNoOfCopies(int c)
{
    copies += c;
}

int bookType::getnoOfCopies()
{
    return copies;
}
class memberType
{
    string name;
    int memberID;
    int books_Bought;
    int amountSpent;

public:
    memberType(string = " ", int = 0, int = 0, int = 0);
    void setName(string);
    void setMemberID(int);
    void setBooksBought(int);
    void setAmountSpent(int);
    string getName();
    int getMemberID();
    int getBooksBought();
    int getAmountSpent();
    void display();
    void updateBooksBought(int);
    void updateAmountSpent(int);
};
memberType::memberType(string n, int m, int b, int a)
{
    name = n;
    memberID = m;
    books_Bought = b;
    amountSpent = a;
}

void memberType::setName(string n)
{
    name = n;
}
void memberType::setMemberID(int m)
{
    memberID = m;
}
void memberType::setBooksBought(int b)
{
    books_Bought = b;
}
void memberType::setAmountSpent(int a)
{
    amountSpent = a;
}
string memberType::getName()
{
    return name;
}
int memberType::getMemberID()
{
    return memberID;
}
int memberType::getAmountSpent()
{
    return amountSpent;
}

int memberType::getBooksBought()
{
    return books_Bought;
}

void memberType::display()
{
    cout << "Name: " << name << endl;
    cout << "Member ID: " << memberID << endl;
    cout << "Books bought: " << books_Bought << endl;
    cout << "Amount spent: " << amountSpent << endl;
}

void memberType::updateAmountSpent(int a)
{
    amountSpent = 0;
    amountSpent += a;
}

void memberType::updateBooksBought(int b)
{
    books_Bought += b;
}

int main()
{
    vector<bookType> books;
    vector<memberType> members;

    int choice;
    int book_count = 0;
    int member_count = 0;
    int book_index;
    int member_index;

    while (true)
    {

        cout << "1. Add a book" << endl;
        cout << "2. Add a member" << endl;
        cout << "3. Display books" << endl;
        cout << "4. Display members" << endl;
        cout << "5. Search a book by title" << endl;
        cout << "6. Search a member by ID" << endl;
        cout << "7. Buy a book" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            string title, publisher, ISBN;
            int price;
            int numofAuthors, copies;

            cout << "Enter the title of the book: ";
            cin.ignore();
            getline(cin, title);
            cout << "Enter the number of authors: ";
            cin >> numofAuthors;

            vector<string> authors(numofAuthors);
            for (int i = 0; i < numofAuthors; i++)
            {
                cout << "Enter the name of author " << i + 1 << ": ";
                cin.ignore();
                getline(cin, authors[i]);
            }

            cout << "Enter the publisher of the book: ";
            cin.ignore();
            getline(cin, publisher);
            cout << "Enter the price of the book: ";
            cin >> price;
            cout << "Enter the ISBN of the book: ";
            cin.ignore();
            getline(cin, ISBN);
            cout << "Enter the number of copies of the book: ";
            cin >> copies;

            books.push_back(bookType(title, authors, publisher, ISBN, price, copies, numofAuthors));

            cout << "Book has been added" << endl;

            break;
        }

        case 2:
        {

            string name;
            int memberID;

            cout << "Enter name of the member: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter the member ID: ";
            cin >> memberID;

            members.push_back(memberType(name, memberID, 0, 0));

            cout << "Member has been added" << endl;
            break;
        }

        case 3:
        {
            cout << "Books in the Bookstore:  " << endl;
            for (int i = 0; i < books.size(); i++)
            {
                books[i].display();
                cout << endl;
            }
            break;
        }

        case 4:
        {

            cout << "Members in the Bookstore:" << endl;
            for (int i = 0; i < members.size(); i++)
            {
                members[i].display();

                cout << endl;
            }
            break;
        }

        case 5:
        {

            string searchTitle;
            bool bookFound = false;

            cout << "Enter the title of the book to search: ";
            cin.ignore();
            getline(cin, searchTitle);

            for (int i = 0; i < books.size(); i++)
            {
                if (books[i].getTitle() == searchTitle)
                {
                    books[i].display();
                    bookFound = true;
                    break;
                }
            }
            if (!bookFound)
            {
                cout << "Book not found." << endl;
            }

            cout << endl;
            break;
        }

        case 6:
        {

            int searchID;
            bool memberFound = false;

            cout << "Enter the ID of the member to search: ";
            cin >> searchID;

            for (int i = 0; i < members.size(); i++)
            {
                if (members[i].getMemberID() == searchID)
                {
                    members[i].display();
                    memberFound = true;
                    break;
                }
            }

            if (!memberFound)
            {
                cout << "Member not found." << endl;
            }

            cout << endl;
            break;
        }

        case 7:
        {

            int memberID;
            string bookTitle;
            int copies = 0;
            int input;

            cout << "Are you a member? Enter 1 for Yes and 2 for No: ";
            cin >> input;

            if (input == 1)
            {
                int bookCount;
                int totalCopies = 0;
                double totalPrice = 0.0;

                cout << "Enter the member ID: ";
                cin >> memberID;
                cout << "Enter the number of books to buy: ";
                cin >> bookCount;

                for (int i = 0; i < bookCount; i++)
                {
                    int copies = 0;

                    cout << "Book #" << (i + 1) << endl;
                    cout << "Enter the title of the book to buy: ";
                    cin.ignore();
                    getline(cin, bookTitle);
                    cout << "Enter the number of copies to buy: ";
                    cin >> copies;

                    member_index = -1;
                    for (int i = 0; i < members.size(); i++)
                    {
                        if (members[i].getMemberID() == memberID)
                        {
                            member_index = i;
                            break;
                        }
                    }

                    book_index = -1;
                    for (int i = 0; i < books.size(); i++)
                    {
                        if (books[i].isTitle(bookTitle))
                        {
                            book_index = i;
                            break;
                        }
                    }

                    if (member_index != -1 && book_index != -1)
                    {

                        double price = books[book_index].getPrice() * copies;

                        cout << "Book bought successfully." << endl;

                        totalCopies += copies;
                        totalPrice += price;
                    }

                    else
                    {
                        cout << "Invalid member ID or book title." << endl;
                    }

                    cout << endl;
                }

                if (totalCopies > 11)
                {

                    double discount = totalPrice * 0.5;

                    if (members[member_index].getMemberID() == memberID)
                    {
                        members[member_index].updateBooksBought(totalCopies);
                        members[member_index].updateAmountSpent(totalPrice);

                        totalPrice -= discount;
                    }
                    cout << "Total copies bought: " << totalCopies << endl;
                    cout << "Total price: $" << totalPrice << endl;
                    cout << endl;
                }
            }
            else
            {
                cout << "Enter the title of the book to buy: ";
                cin.ignore();
                getline(cin, bookTitle);
                cout << "Enter the number of copies to buy: ";
                cin >> copies;

                book_index = -1;
                for (int i = 0; i < books.size(); i++)
                {
                    if (books[i].isTitle(bookTitle))
                    {
                        book_index = i;
                        break;
                    }
                }

                if (book_index != -1)
                {
                    double price2 = books[book_index].getPrice() * copies;

                    cout << "Book bought successfully." << endl;
                    cout << "Total price: $" << price2 << endl;
                }
            }
            break;
        }

        case 8:
        {

            cout << "Exiting the program..." << endl;
            return 0;
        }

        default:
        {
            cout << "Invalid choice. Please try again." << endl;
            cout << endl;
            break;
        }
        }
    }

    return 0;
}
