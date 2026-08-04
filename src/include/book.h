#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<string>
using namespace std;

class Book {
public:
    string ISBN, title, author, category, publisher;

    Book(); 
    void show();
};

#endif
