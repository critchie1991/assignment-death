//*****************************************************************
// FILE:      Bookstore.cpp
// AUTHOR:    Christian Ritchie
// LOGON ID:  Z1787238
// DUE DATE:  2/15/2018
//
// PURPOSE:   Contains the declaration for the Book class.
//*****************************************************************
#include <stdio.h>
#include <iostream>
#include <fstream>
#include "BookStore.h"

using namespace std;

// default constructor
Bookstore::Bookstore() {
    booksSize = 0;
}

// alternate constructor
Bookstore::Bookstore(const std::string& str) {
    ifstream inFile;
    inFile.open(str);
    if (!inFile.is_open()) {
        perror("could not open file!");
    } else {
        inFile.read((char*) this, sizeof(Bookstore));
        inFile.close();
    }
}

void Bookstore::print(){
    cout << "Book Inventory Listing \n";
    cout << "-----------------------\n";

    for (int i = 0; i < (int) sizeof(inventory); i++) {
        inventory[i].print();
    }
}

