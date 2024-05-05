#include "Task6.h"

#include <functional>


int functionAND(int prm1, int prm2)
{
    cout<< "�㭪�� ������ ����⮢�� AND" <<endl;
    return prm1 & prm2;
}

int functionOR(int prm1, int prm2)
{
    cout<< "�㭪�� ������ ����⮢�� OR" <<endl;
    return prm1 | prm2;
}


// ��।�� �㭪樨 �१ std::function
void DoWork(int prm1, int prm2, function<int(int, int)> fnc)
{
    int perem  = fnc(prm1, prm2);

    cout<< "��।�� �㭪樨 �१ std::function" <<endl;
    cout<< "�����⠭��� ���祭�� ࠢ��:  " << perem <<endl<<endl;
}
\
// ��।�� �㭪樨 �१ ���⮩ 㪠��⥫�
void DoWork(int prm1, int prm2, int (*fncPointer)(int, int))
{
    int perem  = fncPointer(prm1, prm2);

    cout<< "��।�� �㭪樨 �१ ���⮩ 㪠��⥫�" <<endl;
    cout<< "�����⠭��� ���祭�� ࠢ��:  " << perem <<endl<<endl;
}


void functionZadanie6()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 6.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "���ࠡ�⠩� �ணࠬ��, ����� ࠡ�⠥� � �����᪨�� �㭪�ﬨ: �, ���" <<endl;
cout << "��।���� �� ��� Callback �㭪樨, ����� ��।����� �१" <<endl;
cout << "std::function � ����� 㪠��⥫�." <<endl;
cout<<endl;

function<int(int, int)> fnc;

fnc = functionAND;

DoWork(3, 5, fnc);



fnc = functionOR;

DoWork(3, 5, fnc);

cout<< "------------------------------------ \n" <<endl;


int (*fncPointer)(int, int);

fncPointer = functionAND;

DoWork(3, 5, fncPointer);



fncPointer = functionOR;

DoWork(3, 5, fncPointer);

cout<<endl<<endl<<endl;

}





























