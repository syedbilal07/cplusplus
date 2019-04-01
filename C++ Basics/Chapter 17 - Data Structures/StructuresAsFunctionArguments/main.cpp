#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

struct Books{
    char title[50];
    char author[50];
    char subject[50];
    int id;
};

void printBook(struct Books book){
    cout << "Book ID Is : " << book.id << endl;
    cout << "Book Title Is : " << book.title << endl;
    cout << "Book Author Is : " << book.author << endl;
    cout << "Book Subject Is : " << book.subject << endl;
}
int main(int argc, char** argv) {
    struct Books book1;        // Declare Book1 of type Book
    struct Books book2;        // Declare Book2 of type Book
    
    // book 1 specification
    strcpy(book1.title, "C++ Programming");
    strcpy(book1.author, "Bjarne Stroustrup");
    strcpy(book1.subject, "C++ Guide Book");
    book1.id = 1;
    
    // book 2 specification
    strcpy(book2.title, "C++ Tutorials");
    strcpy(book2.author, "Bjarne Stroustrup");
    strcpy(book2.subject, "C++ Cook Book");
    book2.id = 2;
    
    // Print Book1 info
    printBook(book1);
    // Print Book2 info
    printBook(book2);
    return 0;
}

