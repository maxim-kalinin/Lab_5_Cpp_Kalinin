#include "Task3.h"


void functionZadanie3()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 3.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "������ �ணࠬ��, �⮡� �த�������஢��� �ᯮ�짮����� �����஢" <<endl;
cout << " & (����) � * (���祭�� �� �����)." <<endl;
cout<<endl;

int iVal = 300;
float fVal = 300.600006;
char cVal = 'W';

cout << "�ᯮ�짮����� ������: &" <<endl;
cout << "  ����  iVal = " << &iVal <<endl;
cout << "  ����  fVal = " << &fVal <<endl;
cout << "  ����  cVal = " << (void*)&cVal <<endl;

cout<<endl;

int* piVal = &iVal;
float* pfVal = &fVal;
char* pcVal = &cVal;

cout << "�ᯮ���� ⮫쪮 ��६����� 㪠��⥫�:" <<endl;
cout << "  ����  iVal = " << piVal <<endl;
cout << "  ����  fVal = " << pfVal <<endl;
cout << "  ����  cVal = " << (void*)pcVal <<endl;

cout<<endl;

cout << "�ᯮ�짮����� ⮫쪮 ������ 㪠��⥫�:" <<endl;
cout << "  ���祭�� �� �����  *piVal = " << *piVal <<endl;
cout << "  ���祭�� �� �����  *pfVal = " << *pfVal <<endl;
cout << "  ���祭�� �� �����  *pcVal = " << *pcVal <<endl;

cout<<endl<<endl<<endl;

}
















