#include "Task7.h"


void functionSort(char *num, int Size)
{
    int b;
    bool c;
    c = true;

    cout<< "���孨� ॣ���� �㪢:" <<endl;
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

    cout<< "������ ॣ���� �㪢:" <<endl;
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
cout<< "                            ������� 7.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "��।��� 㪠��⥫� � �㭪�� �� ���ᨢ ⨯� char ��� 12-� ����⮢." <<endl;
cout << "����室��� � �⮩ �㭪樨, �������� ���祭�� ���� � ������ �祥� ���ᨢ�." <<endl;
cout<<endl;

int Size =12;
char str[] = {'A','B','C','D','E','F','G','H','I','J','K','L'};

functionSort(str, Size);

cout<<endl<<endl<<endl;

}

