#include "Task4.h"



void functionZadanie4()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ЗАДАНИЕ 4.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "Реализуйте хранения n элементов в массиве и" <<endl;
cout << "печати элементов с помощью указателя." <<endl;
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


