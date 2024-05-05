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
cout<< "                            ������� 5.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "����쪮 ��ਠ�⮢ ������祭�� ����������� ���ਪ� �� ������祭�� ����⮪" <<endl;
cout << "��� 3�-䠧���� �����⥫� UVWN, �����⠩� �� ���� ����⠭���� ������ ��ப�" <<endl;
cout << "� �ᯮ�짮������ ��뫪�." <<endl;
cout<<endl;
cout << "��襭��:" <<endl;
cout << "������⢮ ����⠭���� ᨬ�����, ࠢ�� 䠪�ਠ�� ������⢠ ᨬ�����" <<endl;
cout << "��� ����� ᨬ����� UVWN, ���-�� ����⠭���� ࠢ�� = 24 ����⠭����:" <<endl;
cout<<endl;

string str = "UVWN";
    int n = str.size();
    KolichestvoKombinacy(str, 0, n-1);


    cout<<endl<<endl<<endl;
}


