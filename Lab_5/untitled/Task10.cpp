#include "Task10.h"


#include <algorithm>
#include <string>
#include <string.h>




void functionZadanie10()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 10.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "��� ���ᨢ ��ப (���ᨬ��쭮 25 ��ப, ������ ��ப� �� ����� 80 ᨬ�����)." <<endl;
cout << "����冷��� ��ப� �� ����� ��� �� ��䠢���." <<endl;
cout<<endl;

cout << "����஢�� ��ப �� ��䠢���:" <<endl<<endl;
std::vector <std::string> v;
v.push_back("Qwert qwert qwert qwert");
v.push_back("Asdfg asdfg asdfg asdfg asdfg");
v.push_back("Zxcvb zxcvb zxcvb");
v.push_back("Yuiop yuiop yuiop yuiop");
v.push_back("Hjkl hjkl");
v.push_back("Mnbvc mnbvc mnbvc");

std::sort(v.begin(), v.end());
for (auto a : v) {
    std::cout << a << "\n";
}


cout<<endl<<endl;

cout << "����஢�� ��ப �� ������." <<endl<<endl;

std::sort(v.begin(),v.end(),[](const std::string &s1, const std::string &s2) {return s1.size() < s2.size(); });

for(int i=0; i<v.size();i++)
        std::cout<<v.at(i) <<endl;

}



