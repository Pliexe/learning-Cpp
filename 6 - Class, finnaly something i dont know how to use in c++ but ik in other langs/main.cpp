#include <iostream>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;
};

void printBook(Book book)
{
    cout << "Book: " << book.title << ", made by: " << book.author << " and " << book.pages << " pages!" << endl;
}

int main()
{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    printBook(book1);
    printBook(book2);

    return 0;
}
