#include "Task6.h"

#include <functional>


int functionAND(int prm1, int prm2)
{
    cout<< "Функция вычисляет побитовое AND" <<endl;
    return prm1 & prm2;
}

int functionOR(int prm1, int prm2)
{
    cout<< "Функция вычисляет побитовое OR" <<endl;
    return prm1 | prm2;
}


// передача функции через std::function
void DoWork(int prm1, int prm2, function<int(int, int)> fnc)
{
    int perem  = fnc(prm1, prm2);

    cout<< "Передача функции через std::function" <<endl;
    cout<< "Рассчитанное значение равно:  " << perem <<endl<<endl;
}
\
// передача функции через простой указатель
void DoWork(int prm1, int prm2, int (*fncPointer)(int, int))
{
    int perem  = fncPointer(prm1, prm2);

    cout<< "Передача функции через простой указатель" <<endl;
    cout<< "Рассчитанное значение равно:  " << perem <<endl<<endl;
}


void functionZadanie6()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ЗАДАНИЕ 6.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "Разработайте программу, которая работает с логическими функциями: И, ИЛИ" <<endl;
cout << "определите их как Callback функции, которые передаются через" <<endl;
cout << "std::function и обычный указатель." <<endl;
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





























