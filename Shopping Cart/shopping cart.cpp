#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <fstream>
#include "human.h"
#include "book.h"
using namespace std;
//���ļ��ж�ȡ������Ϣ�ĺ���
bool getallbook(vector<book>&allbook)
{
    string id, na, au, pub;
    double pri;
    ifstream fin("�鼮��Ϣ.txt");
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
    ifstream fin("��ͨ�û���Ϣ.txt");
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
    ifstream fin("��Ա��Ϣ.txt");
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
    ifstream fin("�����Ϣ.txt");
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
    /*getallbook(allbook);                           //�鼮��Ϣ��ȡ
    vector<layfolk>alllayfolk;                     
    getalllayfolk(alllayfolk);                     //��ͨ�û���Ϣ��ȡ
    vector<member>allmember;                       
    getallmember(allmember);                       //��Ա��Ϣ��ȡ
    vector<vip>allvip;                             
    getallvip(allvip);*/                             //�����Ϣ��ȡ

    cout << "                                      ******ͼ�����߹��ﳵϵͳ******      " << endl;
    cout << "                                      ��ѡ���û����ͣ�" << endl;
    cout << "                                      1 ��ͨ�û�" << endl ;
    cout << "                                      2 �� Ա" << endl;
    cout << "                                      3 �� ��" << endl;
    cout << "                                      �����룺";
    int type;
    cin >> type;
    system("cls");
    cout << "                                      �˺�ID��";
    int id;
    cin >> id;
    cout << "                                      �˻����룺";
    string pass;
    cin >> pass;
    return 0;
}