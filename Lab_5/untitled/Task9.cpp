#include "Task9.h"

#include <algorithm>
#include <string>
#include <string.h>


char *replacer(std::string input)
{
    auto n = input.size();
    for (auto i = 0; i < n; i++)
    {
        input[i] = (input[i] == '\t' ? ' ' : input[i]);
    }

    char * cstr = new char[input.length() + 1];
    strcpy_s(cstr, input.length() + 1, input.c_str());

    return cstr;
}




void functionZadanie9()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 9.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "���� ��ப�, ᮤ�ঠ�� ᫮��, ࠧ������� ��᪮�쪨�� �஡�����." <<endl;
cout << "�������� �� ����� ⠡��樨 ������ �஡���, 㤠���� ������ �஡���." <<endl;
cout<<endl;
cout<<"�����塞�� ��ப�:"<<endl;
cout<< "qwert     qwert         qwert            qwert" <<endl<<endl;


std::string str = "qwert     qwert         qwert            qwert";


   // �᪠�� ������ �஡���
   std::string::size_type pos = str.find("  ");

   while (pos != std::string::npos) {
       // �������� � ����� �஡����
       str.replace(pos, 2, " ");
       // �饬 �᫨ ��⠫��� ��
       pos = str.find("  ", pos);
   }


   cout<<"�������:"<<endl;
   std::cout << str << std::endl;

   cout<<endl<<endl<<endl;

}



