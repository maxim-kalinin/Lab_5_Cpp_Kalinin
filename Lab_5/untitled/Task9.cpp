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
cout<< "                            ЗАДАНИЕ 9.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "Дана строка, содержащая слова, разделенные несколькими пробелами." <<endl;
cout << "Заменить все знаки табуляции знаком пробела, удалить двойные пробелы." <<endl;
cout<<endl;
cout<<"Заменяемая строка:"<<endl;
cout<< "qwert     qwert         qwert            qwert" <<endl<<endl;


std::string str = "qwert     qwert         qwert            qwert";


   // Искать двойные пробелы
   std::string::size_type pos = str.find("  ");

   while (pos != std::string::npos) {
       // Заменить с одним пробелом
       str.replace(pos, 2, " ");
       // Ищем если осталось еще
       pos = str.find("  ", pos);
   }


   cout<<"Результат:"<<endl;
   std::cout << str << std::endl;

   cout<<endl<<endl<<endl;

}



