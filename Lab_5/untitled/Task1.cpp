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
cout<< "                            ������� 1.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "���ࠡ���� �ணࠬ�� � ����⠭⠬� level (�⠦) � �।������" <<endl;
cout << "���짮��⥫� �஥����� �� ����㠫쭮� ���� �� �⠦��." <<endl;
cout << "�ᯮ�짮���� ������� ����⠭� ��� ������� �⠦�� class enum." <<endl;
cout<<endl;

cout << "��� ���쥬� �� ���� ������ ����� �⠦� �� 1 �� 7" <<endl;

int etaj;
cin >> etaj;

switch (etaj)
    {
        case static_cast<int>(TorgovyCentr::ETAJ1):
            cout<< "���� ������� �� 1-� �⠦" <<endl;
            break;
        case static_cast<int>(TorgovyCentr::ETAJ2):
            cout<< "���� ������� �� 2-� �⠦" <<endl;
            break;
        case static_cast<int>(TorgovyCentr::ETAJ3):
            cout<< "���� ������� �� 3-� �⠦" <<endl;
            break;
        case static_cast<int>(TorgovyCentr::ETAJ4):
            cout<< "���� ������� �� 4-� �⠦" <<endl;
            break;
        case static_cast<int>(TorgovyCentr::ETAJ5):
            cout<< "���� ������� �� 5-� �⠦" <<endl;
            break;
        case static_cast<int>(TorgovyCentr::ETAJ6):
            cout<< "���� ������� �� 6-� �⠦" <<endl;
            break;
        case static_cast<int>(TorgovyCentr::ETAJ7):
            cout<< "���� ������� �� 7-� �⠦" <<endl;
            break;
        default:
            std::cout << "����� �⠦ ���������.\n";
            break;

    }

   cout<<endl<<endl<<endl;

}


















