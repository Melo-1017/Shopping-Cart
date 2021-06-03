#pragma once
/*���ͷ�ļ�����Shopping Cart��������й˿���������Ͷ���*/
#ifndef human_h
#define human_h

#include <iostream>
#include <cstring>
#include <string>
#include "book.h"
using namespace std;
//���� �û���
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

//������ ��ͨ����
class layfolk :public buyer
{
public:
    layfolk(string n, int b, string a, double p) :buyer(n, b, a, p)
    {}
    void display()
    {
        cout << "�û���Ϣ���£�" << endl;
        cout << "�û�����" << name << endl;
        cout << "�û�ID��" << buyerID << endl;
        cout << "���͵�ַ��" << address << endl;
        cout << "�˻���" << balance << endl << endl;;
    }
    void buy(book& b)
    {
        if (balance < b.getprice())
            cout << "���㣬����ʧ�ܣ�" << endl;
        else
        {
            balance = balance - b.getprice();
            cout << "����ɹ���" << endl;
        }
    }
};

//������ ��Ա��
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
        cout << "���û���һλ " << level << " ����Ա,";
        cout << "���� " << disc << " ���۸����Ż�" << endl;
        cout << "��Ա��Ϣ���£�" << endl;
        cout << "�û�����" << name << endl;
        cout << "�û�ID��" << buyerID << endl;
        cout << "���͵�ַ��" << address << endl;
        cout << "�˻���" << balance << endl << endl;
    }
    void buy(book& b)
    {
        if (balance < (b.getprice() * disc))
            cout << "���㣬����ʧ�ܣ�" << endl;
        else
        {
            balance = balance - (b.getprice() * disc);
            cout << "����ɹ���" << endl;
        }
    }
};

//������ �����
class vip :public buyer
{
protected:
    double disc;     //Ϊ�����Ա��ͳһ����������˴���disc����Ҳ����ĳ���ۿ۹�����Ʒ
public:
    vip(string n, int b, string a, double p, double d) :buyer(n, b, a, p), disc(d)
    {}
    void display()
    {
        cout << "���û���һλ���,";
        cout << "���� " << disc << " ���۸����Ż�" << endl;
        cout << "�����Ϣ���£�" << endl;
        cout << "�û�����" << name << endl;
        cout << "�û�ID��" << buyerID << endl;
        cout << "���͵�ַ��" << address << endl;
        cout << "�˻���" << balance << endl << endl;
    }
    void buy(book& b)
    {
        if (balance < (b.getprice() * disc))
            cout << "���㣬����ʧ�ܣ�" << endl;
        else
        {
            balance = balance - (b.getprice() * disc);
            cout << "����ɹ���" << endl;
        }
    }
};

#endif