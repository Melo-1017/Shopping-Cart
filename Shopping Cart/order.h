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
        cout << "订单编号：" << orderid << endl;
        cout << "买家编号：" << buyerid << endl;
        cout << "购书数量：" << listcout << endl;
        cout << "购书清单：";

    }



};