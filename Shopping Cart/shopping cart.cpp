#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <fstream>
#include "human.h"
#include "book.h"
using namespace std;
//从文件中读取各类信息的函数
bool getallbook(vector<book>&allbook)
{
    string id, na, au, pub;
    double pri;
    ifstream fin("书籍信息.txt");
    if (!fin)
    {
        cout << "failed to open!" << endl;
    }
    while (!fin.eof())
    {
        fin >> id >> na >> au >> pub >> pri;
        allbook.push_back(book(id, na, au, pub, pri));
    }
    return true;
}
/*bool getalllayfolk(vector<layfolk>& alllayfolk)
{
    string na, addr;
    int id;
    double bal;
    ifstream fin("普通用户信息.txt");
    while (!fin.eof())
    {
        fin >> na >> id >> addr >> bal;
        alllayfolk.push_back(layfolk(na, id, addr, bal));
    }
    return true;
}
bool getallmember(vector<member>& allmember)
{
    string na, addr;
    int id,l;
    double bal;
    ifstream fin("会员信息.txt");
    while (!fin.eof())
    {
        fin >> na >> id >> addr >> bal >> l;
        allmember.push_back(member(na, id, addr, bal,l));
    }
    return true;
}
bool getallvip(vector<vip>& allvip)
{
    string na, addr;
    int id;
    double bal,d;
    ifstream fin("贵宾信息.txt");
    while(!fin.eof())
    {
        fin >> na >> id >> addr >> bal >> d;
        allvip.push_back(vip(na, id, addr, bal, d));
    }
    return true;
}*/
int main()
{
    system("color 06");
    vector<book>allbook;
    vector<book>::iterator p = allbook.begin();
    cout << p->getauthor();
    /*getallbook(allbook);                           //书籍信息读取
    vector<layfolk>alllayfolk;                     
    getalllayfolk(alllayfolk);                     //普通用户信息读取
    vector<member>allmember;                       
    getallmember(allmember);                       //会员信息读取
    vector<vip>allvip;                             
    getallvip(allvip);*/                             //贵宾信息读取

    cout << "                                      ******图书在线购物车系统******      " << endl;
    cout << "                                      请选择用户类型：" << endl;
    cout << "                                      1 普通用户" << endl ;
    cout << "                                      2 会 员" << endl;
    cout << "                                      3 贵 宾" << endl;
    cout << "                                      请输入：";
    int type;
    cin >> type;
    system("cls");
    cout << "                                      账号ID：";
    int id;
    cin >> id;
    cout << "                                      账户密码：";
    string pass;
    cin >> pass;
    return 0;
}