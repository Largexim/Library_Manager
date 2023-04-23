// Created by Cena Hasanzadeh on 4/23/2023 AD.
#ifndef LIBRARY_H
#define IBRARY_H
#include <iostream>
#include "Book.h"
#include "Person.h"
using namespace std;
class Library
{
private:
    string Name;
    string Phone_Number;
    Person *person;
    Book *book;
public:
    Library(){setter();}
    void setter();
    void Add_Book();
    void Add_Person();
    
};
#endif
