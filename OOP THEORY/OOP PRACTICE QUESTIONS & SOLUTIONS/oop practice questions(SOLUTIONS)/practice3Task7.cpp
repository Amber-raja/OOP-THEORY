#include <iostream>
using namespace std;
class memberType
{
    string name;
    int ID;
    int numOfBooks;
    int amtspent;

public:
    memberType(string n, int id, int nob, int amt)
    {
        name = n;
        ID = id;
        numOfBooks = nob;
        amtspent = amt;
    }

     memberType()
    {
        name = " ";
        ID = 0;
        numOfBooks = 0;
        amtspent = 0;
    }
    void setname()
    {
        cout << "Enter name of the person: " << endl;
        cin >> name;
    }
    void setID()
    {
        cout << "Enter ID of the person: " << endl;
        cin >> ID;
    }
    void setnumOfBooks()
    {
        cout << "Enter number of books brought: " << endl;
        cin >> numOfBooks;
    }
    void setamtspent()
    {
        cout << "Enter the amount spent: " << endl;
        cin >> amtspent;
    }
    void displayname()
    {
        cout << "The name of the person is: " << name << endl;
    }
    void displayID()
    {
        cout << "The ID of the person is: " << ID << endl;
    }
    void dispnoOfBooks()
    {
        cout << "The number of books brought are: " << numOfBooks << endl;
    }
    void displayamtspent()
    {
        cout << "The amount spent is:  " << amtspent << endl;
    }

    void setData()
    {
        setname();
        setID();
        setnumOfBooks();
        setamtspent();
    }

    void displayData()
    {
        displayname();
        displayID();
        dispnoOfBooks();
        displayamtspent();
    }
    void modifyName()
    {
        cout << "Modify name for this ID: " << endl;
        cin >> name;
    }
    void modifyNoOfBooks()
    {
        cout << "Modify the number of books: " << endl;
        cin >> numOfBooks;
    }

    void modifyamtspent()
    {
        cout << "What do you want to do??" << endl;
        cout << "1. Add amount: " << endl;
        cout << "2. withdraw amount: " << endl;
        cout << "Enter your choice" << endl;
        int inp;
        cin >> inp;

        if (inp == 1)
        {
            cout << "Enter amount you want to add: " << endl;
            int amount;
            cin >> amount;
            amtspent = amtspent + amount;
        }
        if (inp == 2)
        {
            cout << "Enter amount you want to deduct: " << endl;
            int amount;
            cin >> amount;
            amtspent = amtspent - amount;
        }
        else
        {
            cout << "Id not found " << endl;
        }
    }

    void updateData(memberType m[], int n)
    {
        cout << "Enter user ID" << endl;
        int id;
        cin >> id;
        for (int i = 0; i < n; i++)
        {
            if (id == m[i].ID)
            {
                cout << "1. Modify name: " << endl;
                cout << "2. Modify no of Books" << endl;
                cout << "3. Modify amount spent" << endl;
                cout << "Enter your choice: " << endl;
                int choice;
                cin >> choice;
                if (choice == 1)
                {
                    m[i].modifyName();
                }
                else if (choice == 2)
                {
                    m[i].modifyNoOfBooks();
                }
                else if (choice == 3)
                {
                    m[i].modifyamtspent();
                }
                else
                {
                    cout << "Invalid input" << endl;
                    break;
                }
            }
        }
    }
};
int main()
{
    int n;
    cout << "Enter the no of members" << endl;
    cin >> n;
    memberType m[n];
    while (1)
    {
        cout << "1. ENter data" << endl;
        cout << "2. Update data of member" << endl;
        cout << "3. Display data" << endl;
        int input;
        cout << "select an option" << endl;
        cin >> input;
        if (input == 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "ENter data" << endl;
                m[i].setData();
            }
            if (input == 2)
            {
                m->updateData(m, n);
            }
            else if (input == 3)
            {
                for (int i = 0; i < n; i++)
                {
                    cout << "Data of member" << i + 1 << endl;
                    m[i].displayData();
                }
            }
            else
                break;
        }
    }
}