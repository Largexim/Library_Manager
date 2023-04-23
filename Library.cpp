// Created by Cena Hasanzadeh on 4/23/2023 AD.
#include <iostream>
#include "Library.h"
#include "Book.h"
#include "Person.h"
using namespace std;

void Library::setter()
{
    book = nullptr;
    person = nullptr;
    cout<<"Enter Library's Name : ";
    cin>>Name;
    cout<<"Enter Library's Phone number : ";
    cin>>Phone_Number;
}

void Library::Add_Book()
{
    Book *curr;
    curr = new class Book;
    curr->Next = book;
    book = curr;
}
void Library::Add_Person()
{
    Person *curr;
    curr = new class Person;
    curr->Next = person;
    person = curr;
}