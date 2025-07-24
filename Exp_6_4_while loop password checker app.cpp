//RISHITA GOSWAMI 
//24070123086
//B1
#include <iostream>
using namespace std;

int main() {
    string password = "papri@1234";
    string user_password;

    cout << "Enter the password: ";
    cin >> user_password;

    while (true) {
        if (user_password == password) {
            cout << "System is Unlocked" << endl;
            break;
        } else {
            cout << "Incorrect Password.\n";
            cout << "Enter the password: ";
            cin >> user_password;
        }
    }

    return 0;
}

/*
Output:
Enter the password: 123
Incorrect Password.
Enter the password: papri@1234
System is Unlocked
*/
