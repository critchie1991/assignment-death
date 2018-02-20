//*****************************************************************
// FILE:      Book.cpp
// AUTHOR:    Christian Ritchie
// LOGON ID:  Z1787238
// DUE DATE:  2/15/2018
//
// PURPOSE:   Contains the declaration for the Book class.
//*****************************************************************

#include <cstring>
#include <iostream>
#include <iomanip>
#include "Book.h"

using namespace std;

// default constructor
Book::Book() {
    ISBN[0] = '\0';
    title[0] = '\0';
    setPrice(0);
    setQuantity(0);
}

//Alt Constructor(char array new ISBN, char array new Title, double variable new Price, int new Price
Book::Book(char *newISBN, char *newTitle, double newPrice, int newQuantity) {
    strcpy(ISBN, newISBN);
    strcpy(title,newTitle);
    setPrice(newPrice);
    setQuantity(newQuantity);
}

//Accessor method declaration returns ISBN data member
char* Book::getISBN() {
    return ISBN;
}

//Accessor method declaration returns Title data member
char* Book::getTitle() {
    return title;
}

//Accessor method declaration returns Price data member as type double
double Book::getPrice() {
    return price;
}

//Accessor method declaration returns Quantity as type int
int Book::getQuantity() {
    return quantity;
}

//Method declaration that takes a double argument and newPrice
void Book::setPrice(double newPrice) {
    if (newPrice >= 0) {
        price = newPrice;
    } else {
        price = 0;
    }
}

//Method declaration that takes an int newQuantity
void Book::setQuantity(int newQuantity) {
    if (newQuantity >= 0) {
        quantity = newQuantity;
    } else {
        quantity = 0;
    }
}

//Accessor method that takes an int which is the quantity of the book and returns the quantity available
int Book::fulfillOrder(int orders) {
    int current_quantity = getQuantity();
    if (orders < 0) {
        return 0;
    } else if (orders <= getQuantity()) {
        setQuantity(current_quantity - orders);
        return current_quantity;
    } else {
        int current_quantity = getQuantity();
        setQuantity(0);
        return current_quantity;
    }
}

//Method prints the ISBN, title, price, and quantity members in custom format
void Book::print(){
    left( cout << ISBN << setw(14) << endl );
    left( cout << title << setw(44) << endl );
    right( cout << price << setw(5) << endl );
    right( cout << quantity << setw(6) << endl );
}
