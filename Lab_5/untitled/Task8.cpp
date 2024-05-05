#include "Task8.h"


void functionZadanie8()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ЗАДАНИЕ 8.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "Напишите программу, которая берет упакованную строчку и восстанавливает по ней" <<endl;
cout << "исходную строку. Упакованная строка:  AAAABCCCCCDDDD" <<endl;
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


