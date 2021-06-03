#pragma once
#ifndef book_h
#define book_h

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class book
{
protected:
    string bookid;
    string bookname;
    string author;
    string publishing;
    double price;
public:
    book(string i, string n, string a, string pub, double p)
    {
        bookid = i;
        bookname = n;
        author = a;
        publishing = pub;
        price = p;
    }
    void display()
    {
        cout << "书籍编号：" << bookid << endl;
        cout << "书籍名称：" << bookname << endl;
        cout << "作者：" << author << endl;
        cout << "出版商：" << publishing << endl;
        cout << "价格：" << price << endl << endl;
    }
    string getbookid()
    {
        return bookid;
    }
    string gerbookname()
    {
        return bookname;
    }
    string getauthor()
    {
        return author;
    }
    string getpublishing()
    {
        return publishing;
    }
    double getprice()
    {
        return price;
    }
};

#endif