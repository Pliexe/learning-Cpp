#include <iostream>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;

    Book(string _title, string _author, int _pages)
    {
        title = _title;
        author = _author;
        pages = _pages;
    }

    Book()
    {
        title = "no title";
        author = "no author";
        pages = 0;
    }

    // I just noticed that I made an function before shown in tutorial lmfao.
    void PrintBook()
    {
        cout << "Book: " << title << ", made by: " << author << " and " << pages << " pages!" << endl;
    }
};

int main()
{
    Book book1 = Book("Harry Potter", "JK Rowling", 500);

    Book book2 = Book("Lord of the rings", "Tolkein", 700);

    Book book3;

    book1.PrintBook();
    book2.PrintBook();
    book3.PrintBook();

    return 0;
}
