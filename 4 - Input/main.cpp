#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter your age: ";

    cin >> age;

    cout << "Enter your name: ";

    cin.ignore();
    getline(cin, name);

    cout << "You are " << name << " and " << age << " years old!" << endl;

    return 0;
}