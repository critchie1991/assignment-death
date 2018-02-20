//*****************************************************************
// FILE:      Bookstore.h
// AUTHOR:    Christian Ritchie
// LOGON ID:  Z1787238
// DUE DATE:  2/15/2018
//
// PURPOSE:   Contains the declaration for the Book class.
//*****************************************************************

#ifndef ASSIGNMENT_2_BOOKSTORE_H
#define ASSIGNMENT_2_BOOKSTORE_H

#include "Book.h"
#include <string>

class Bookstore {
private:
    Book inventory[30];
    int booksSize; // = sizeof(books);
public:
    // default constructor
    Bookstore();
    // alternate constructor
    Bookstore(const std::string&);
    // print
    void print();
};

#endif //ASSIGNMENT_2_BOOKSTORE_H
