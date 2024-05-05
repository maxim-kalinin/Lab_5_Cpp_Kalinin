#include "Task3.h"


void functionZadanie3()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ЗАДАНИЕ 3.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "Напишите программу, чтобы продемонстрировать использование операторов" <<endl;
cout << " & (адрес) и * (значение по адресу)." <<endl;
cout<<endl;

int iVal = 300;
float fVal = 300.600006;
char cVal = 'W';

cout << "Использование оператора: &" <<endl;
cout << "  адрес  iVal = " << &iVal <<endl;
cout << "  адрес  fVal = " << &fVal <<endl;
cout << "  адрес  cVal = " << (void*)&cVal <<endl;

cout<<endl;

int* piVal = &iVal;
float* pfVal = &fVal;
char* pcVal = &cVal;

cout << "Используя только переменную указателя:" <<endl;
cout << "  адрес  iVal = " << piVal <<endl;
cout << "  адрес  fVal = " << pfVal <<endl;
cout << "  адрес  cVal = " << (void*)pcVal <<endl;

cout<<endl;

cout << "Использование только оператора указателя:" <<endl;
cout << "  значение по адресу  *piVal = " << *piVal <<endl;
cout << "  значение по адресу  *pfVal = " << *pfVal <<endl;
cout << "  значение по адресу  *pcVal = " << *pcVal <<endl;

cout<<endl<<endl<<endl;

}
















