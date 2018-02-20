#ifndef ASSIGNMENT_2_BOOK_H
#define ASSIGNMENT_2_BOOK_H

//*****************************************************************
// FILE:      Book.h
// AUTHOR:    Christian Ritchie
// LOGON ID:  Z1787238
// DUE DATE:  2/15/2018
//
// PURPOSE:   Contains the declaration for the Book class.
//*****************************************************************
class Book
{
private:
    // Char array with room for 10 chars + null
    char ISBN[11];
    //Char array with room for 40 chars + null
    char title[41];
    //Double variable used for storing price value
    double price;
    //Integer used for storing stock quantity
    int quantity;


public:

    Book(); //Default Constructor
    //Alt Constructor(char array new ISBN, char array new Title, double variable new Price, int new Price
    Book(char *newISBN, char *newTitle, double newPrice, int newQuantity);
    char * getISBN(); //Accessor method declaration returns ISBN data member
    char * getTitle(); //Accessor method declaration returns Title data member
    double getPrice(); //Accessor method declaration returns Price data member as type double
    int getQuantity(); //Accessor method declaration returns Quantity as type int
    void setPrice(double newPrice); //Method declaration that takes a double argument and newPrice
    void setQuantity(int newQuantity); //Method declaration that takes an int and newQuantity
    int fulfillOrder(int orders); //Accessor method that takes an int which is the quantity of the book and returns the quantity available
    void print(); //Method prints the ISBN, title, price, and quantity members in custom format
};

#endif //ASSIGNMENT_2_BOOK_H
