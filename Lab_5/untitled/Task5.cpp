#include "Task5.h"


void KolichestvoKombinacy(string &a, int zn1, int zn2)
{

    if (zn1 == zn2)
        cout<<a<<endl;
    else
    {
        for (int i = zn1; i <= zn2; i++)
        {
            swap(a[zn1], a[i]);

            KolichestvoKombinacy(a, zn1+1, zn2);

            swap(a[zn1], a[i]);
        }
    }
}


void functionZadanie5()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ЗАДАНИЕ 5.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "Сколько вариантов подключения понадобится электрику при подключении обмоток" <<endl;
cout << "для 3х-фазного двигателя UVWN, напечатайте все виды перестановок данной строки" <<endl;
cout << "с использованием ссылки." <<endl;
cout<<endl;
cout << "Решение:" <<endl;
cout << "Количество перестановок символов, равно факториалу количества символов" <<endl;
cout << "Для четырех символов UVWN, кол-во перестановок равно = 24 перестановки:" <<endl;
cout<<endl;

string str = "UVWN";
    int n = str.size();
    KolichestvoKombinacy(str, 0, n-1);


    cout<<endl<<endl<<endl;
}


