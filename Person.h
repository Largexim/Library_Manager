// Created by Cena Hasanzadeh on 4/23/2023 AD.
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include "Book.h"
using namespace std;
class Person
{
private:
    string ID;
    string Name;
    int Aga;
    Book *Borrowed;
public:
    Person(){setter();}
    void setter();
    void changer();
    void Adder();
};
#endif
