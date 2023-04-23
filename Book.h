// Created by Cena Hasanzadeh on 4/23/2023 AD.
#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;
class Book
{
private:
    string ID;
    string Type;
    string Name;
    int Price;
    string Author;
    bool Is_Borrowed;
    Book *Next;
public:
    Book(){setter();}
    void setter();
    void changer();
};
#endif
