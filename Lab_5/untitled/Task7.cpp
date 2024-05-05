#include "Task7.h"


void functionSort(char *num, int Size)
{
    int b;
    bool c;
    c = true;

    cout<< "верхний регистр букв:" <<endl;
    for (int i = 0; i <= Size - 1;)
    {
            b = num[i];
            num[i] = num[i + 1];
            num[i + 1] = b;
            cout << num[i] << '_' <<  num[i + 1] << " ";
            i = i + 2;
            c = false;
        if (c) i++;
    }

    cout<<endl<<endl;

    cout<< "нижний регистр букв:" <<endl;
    for (int i = 0; i <= Size - 1;)
    {
            b = num[i];
            num[i] = num[i + 1];
            num[i + 1] = b;
            cout << (char)tolower(num[i]) << '_' << (char)tolower( num[i + 1]) << " ";
            i = i + 2;
            c = false;
        if (c) i++;
    }
}



void functionZadanie7()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ЗАДАНИЕ 7.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "Передайте указатель в функцию на массив типа char для 12-ти элементов." <<endl;
cout << "Необходимо в этой функции, поменять значения четных и нечетных ячеек массива." <<endl;
cout<<endl;

int Size =12;
char str[] = {'A','B','C','D','E','F','G','H','I','J','K','L'};

functionSort(str, Size);

cout<<endl<<endl<<endl;

}

