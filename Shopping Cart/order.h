#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include "book.h"
#include "human.h"
using namespace std;
class order
{
protected:
    static int orderid;
    int buyerid;
    int listcout;
    string bookidlist[10];
public:
    void display1()
    {
        cout << "������ţ�" << orderid << endl;
        cout << "��ұ�ţ�" << buyerid << endl;
        cout << "����������" << listcout << endl;
        cout << "�����嵥��";

    }



};