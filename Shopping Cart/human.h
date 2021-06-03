#pragma once
/*这个头文件包含Shopping Cart所需的所有顾客类的声明和定义*/
#ifndef human_h
#define human_h

#include <iostream>
#include <cstring>
#include <string>
#include "book.h"
using namespace std;
//基类 用户类
class buyer
{
protected:
    string name;
    int buyerID;
    string address;
    double balance;
public:
    buyer(string n, int b, string a, double p)
    {
        name = n;
        buyerID = b;
        address = a;
        balance = p;
    }
    string getbuyname()
    {
        return name;
    }
    int getid()
    {
        return buyerID;
    }
    string getaddress()
    {
        return address;
    }
    double getbalance()
    {
        return balance;
    }
    virtual void display() = 0;
    virtual void buy(book&) = 0;
};

//派生类 普通人类
class layfolk :public buyer
{
public:
    layfolk(string n, int b, string a, double p) :buyer(n, b, a, p)
    {}
    void display()
    {
        cout << "用户信息如下：" << endl;
        cout << "用户名：" << name << endl;
        cout << "用户ID：" << buyerID << endl;
        cout << "配送地址：" << address << endl;
        cout << "账户余额：" << balance << endl << endl;;
    }
    void buy(book& b)
    {
        if (balance < b.getprice())
            cout << "余额不足，购买失败！" << endl;
        else
        {
            balance = balance - b.getprice();
            cout << "购买成功！" << endl;
        }
    }
};

//派生类 会员类
class member :public buyer
{
protected:
    int level;
    double disc;
public:
    member(string n, int b, string a, double p, int l) :buyer(n, b, a, p), level(l)
    {
        switch (level)
        {
        case 1:
            disc = 0.95;
            break;
        case 2:
            disc = 0.9;
            break;
        case 3:
            disc = 0.85;
            break;
        case 4:
            disc = 0.8;
            break;
        case 5:
            disc = 0.7;
            break;
        default:
            break;
        }
    }
    void display()
    {
        cout << "该用户是一位 " << level << " 级会员,";
        cout << "享受 " << disc << " 倍价格购书优惠" << endl;
        cout << "会员信息如下：" << endl;
        cout << "用户名：" << name << endl;
        cout << "用户ID：" << buyerID << endl;
        cout << "配送地址：" << address << endl;
        cout << "账户余额：" << balance << endl << endl;
    }
    void buy(book& b)
    {
        if (balance < (b.getprice() * disc))
            cout << "余额不足，购买失败！" << endl;
        else
        {
            balance = balance - (b.getprice() * disc);
            cout << "购买成功！" << endl;
        }
    }
};

//派生类 贵宾类
class vip :public buyer
{
protected:
    double disc;     //为了与会员类统一以免混淆，此处的disc意义也是以某个折扣购买商品
public:
    vip(string n, int b, string a, double p, double d) :buyer(n, b, a, p), disc(d)
    {}
    void display()
    {
        cout << "该用户是一位贵宾,";
        cout << "享受 " << disc << " 倍价格购书优惠" << endl;
        cout << "贵宾信息如下：" << endl;
        cout << "用户名：" << name << endl;
        cout << "用户ID：" << buyerID << endl;
        cout << "配送地址：" << address << endl;
        cout << "账户余额：" << balance << endl << endl;
    }
    void buy(book& b)
    {
        if (balance < (b.getprice() * disc))
            cout << "余额不足，购买失败！" << endl;
        else
        {
            balance = balance - (b.getprice() * disc);
            cout << "购买成功！" << endl;
        }
    }
};

#endif