#include "Task8.h"


void functionZadanie8()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 8.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "������ �ணࠬ��, ����� ���� 㯠�������� ����� � ����⠭�������� �� ���" <<endl;
cout << "��室��� ��ப�. ����������� ��ப�:  AAAABCCCCCDDDD" <<endl;
cout<<endl;

std::string s = "AAAABCCCCCDDDD";


int n = 0;
char pc = 0;
if (s.length()) pc = s[0];


for (char c : s) {
  if (c == pc) {
     ++n;
  } else {
     cout << n << pc;
     n = 1;
     pc = c;
  }
}


if (n > 0) cout << n << pc;


cout<<endl<<endl<<endl;

}


