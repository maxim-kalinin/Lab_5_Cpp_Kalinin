#include "Task4.h"



void functionZadanie4()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 4.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "�������� �࠭���� n ����⮢ � ���ᨢ� �" <<endl;
cout << "���� ����⮢ � ������� 㪠��⥫�." <<endl;
cout<<endl;

int str[5];

for(int i=0; i<10; i++)
{
   str[i] = (i*10+i)*10+i;
}


int *pstr = str;


for(int i=1; i<10; i++)
{
   cout << *(pstr+i) <<endl;
}

cout<<endl<<endl<<endl;

}


