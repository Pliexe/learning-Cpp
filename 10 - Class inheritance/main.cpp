#include <iostream>

using namespace std;

// I already know what this means but I need to know the syntax for doing it in cpp

class Chef
{
public:
    void makeChicken()
    {
        cout << "The chef makes chicken" << endl;
    }

    void makeSalad()
    {
        cout << "The chef makes salad" << endl;
    }

    void makeSpecialDish()
    {
        cout << "The chef makes bbq ribs" << endl;
    }
};

// So same as in c#? lol
// This is an weird example for tutorial, idk
class ItalianChef : public Chef
{
public:
    void makePasta()
    {
        cout << "The chef makes pasta" << endl;
    }

    void makeSpecialDish()
    {
        cout << "The chef makes chicken parm" << endl;
    }
};

int main()
{
    Chef chef;

    chef.makeSpecialDish();

    ItalianChef italianChef;

    italianChef.makeSpecialDish();

    return 0;
}