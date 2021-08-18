#include <iostream>

using namespace std;

int main()
{
    string text = "Hello, my name is John Scoot";

    cout << text.find("John", 0) << endl;

    cout << text.substr(7, 8);

    return 0;
}