//*****************************************************************
// FILE:      Assign2.cpp
// AUTHOR:    Christian Ritchie
// LOGON ID:  Z1787238
// DUE DATE:  2/15/2018
//
// PURPOSE:   Contains the declaration for the Book class.
//*****************************************************************

#include "BookStore.h"

using namespace std;

int main(){

    const string s1 = "Bookdata";
    Bookstore bookstore = Bookstore(s1);
    bookstore.print();

    return 0;
}