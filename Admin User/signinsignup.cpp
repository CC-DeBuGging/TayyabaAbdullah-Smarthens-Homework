#include <iostream>
#include <conio.h>
using namespace std;

string emails[100], passwords[100];
int total_users = 0;

void menu(bool is_admin);
void sign_up(string email, string password);
bool sign_in(string email, string password);
bool is_user_present(string email);

int main()
{
    string user_type;
    cout << "are you a user or admin? (user/admin): ";
    cin >> user_type;

    int choice;
    do
    {
        bool is_admin = (user_type == "admin");
        menu(is_admin);
        cin >> choice;

        string email, password;
        switch (choice)
        {
        case 1:
            if (is_admin)
            {
                cout << "invalid choice for admin!" << endl;
                break;
            }
            cout << "sign up" << endl;
            cout << "enter your email: ";
            cin >> email;
            cout << "enter your password: ";
            cin >> password;
            if (is_user_present(email))
            {
                cout << "user already exists" << endl;
                break;
            }
            else
            {
                sign_up(email, password);
            }
            break;
        case 2:
            cout << "sign in" << endl;
            cout << "enter your email: ";
            cin >> email;
            cout << "enter your password: ";
            cin >> password;

            if (sign_in(email, password))
            {
                choice = 3;
            }
            break;
        case 3:
            cout << "exiting..." << endl;
            break;
        default:
            cout << "invalid choice" << endl;
        }
        getch();
        system("cls");
    } while (choice != 3);

    return 0;
}

void sign_up(string email, string password)
{
    emails[total_users] = email;
    passwords[total_users] = password;
    total_users++;
}

bool sign_in(string email, string password)
{
    for (int i = 0; i < total_users; i++)
    {
        if (emails[i] == email)
        {
            if (passwords[i] == password)
            {
                cout << "welcome " << emails[i] << endl;
                return true;
            }
        }
    }
    cout << "invalid email or password" << endl;
    return false;
}

bool is_user_present(string email)
{
    for (int i = 0; i < total_users; i++)
    {
        if (emails[i] == email)
        {
            return true;
        } 
    }
    return false;
}

void menu(bool is_admin)
{
    if (!is_admin)
    {
        cout << "1. sign up" << endl;
    }
    cout << "2. sign in" << endl;
    cout << "3. exit" << endl;
    cout << "enter your choice: ";
}
