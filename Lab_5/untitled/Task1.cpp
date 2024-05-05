#include "Task1.h"


void functionZadanie1()
{

  enum class TorgovyCentr
  {
      ETAJ1=1,
      ETAJ2=2,
      ETAJ3=3,
      ETAJ4=4,
      ETAJ5=5,
      ETAJ6=6,
      ETAJ7=7
  };

cout<< "=========================================================================" <<endl;
cout<< "                            ЗАДАНИЕ 1.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "Разработать программу с константами level (этаж) и предложить" <<endl;
cout << "пользователю проехаться на виртуальном лифте по этажам." <<endl;
cout << "Использовать задания констант для задания этажей class enum." <<endl;
cout<<endl;

cout << "Для подьема на лифте введите номер этажа от 1 до 7" <<endl;

int etaj;
cin >> etaj;

switch (etaj)
    {
        case static_cast<int>(TorgovyCentr::ETAJ1):
            cout<< "Лифт поднялся на 1-ый этаж" <<endl;
            break;
        case static_cast<int>(TorgovyCentr::ETAJ2):
            cout<< "Лифт поднялся на 2-ый этаж" <<endl;
            break;
        case static_cast<int>(TorgovyCentr::ETAJ3):
            cout<< "Лифт поднялся на 3-ый этаж" <<endl;
            break;
        case static_cast<int>(TorgovyCentr::ETAJ4):
            cout<< "Лифт поднялся на 4-ый этаж" <<endl;
            break;
        case static_cast<int>(TorgovyCentr::ETAJ5):
            cout<< "Лифт поднялся на 5-ый этаж" <<endl;
            break;
        case static_cast<int>(TorgovyCentr::ETAJ6):
            cout<< "Лифт поднялся на 6-ый этаж" <<endl;
            break;
        case static_cast<int>(TorgovyCentr::ETAJ7):
            cout<< "Лифт поднялся на 7-ый этаж" <<endl;
            break;
        default:
            std::cout << "Такой этаж отсутствует.\n";
            break;

    }

   cout<<endl<<endl<<endl;

}


















