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

int main(int argc, char** argv) {
    struct Books book1; // Declare Book1 of type Book
    struct Books book2; // Declare Book2 of type Book
    
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
    cout << "Book1 Title : " << book1.title << endl;
    cout << "Book1 Author : " << book1.author << endl;
    cout << "Book1 Subject : " << book1.subject << endl;
    cout << "Book1 ID : " << book1.id << endl;
    
    // Print Book2 info
    cout << "Book2 Title : " << book2.title << endl;
    cout << "Book2 Author : " << book2.author << endl;
    cout << "Book2 Subject : " << book2.subject << endl;
    cout << "Book2 ID : " << book2.id << endl;
    return 0;
}

