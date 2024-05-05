#include "Task2.h"

enum Animal
{
    pig=1,
    chicken=2,
    goat=3,
    cat=4,
    dog=5
};


string getAnimalName(Animal tipAnimal)
{
  switch (tipAnimal)
    {
      case Animal::pig:
          return "�� ��ࠫ� ⨯ ����⭮��:  Pig";
          break;
      case Animal::chicken:
          return "�� ��ࠫ� ⨯ ����⭮��:  Chicken";
          break;
      case Animal::goat:
          return "�� ��ࠫ� ⨯ ����⭮��:  Goat";
          break;
      case Animal::cat:
          return "�� ��ࠫ� ⨯ ����⭮��:  Cat";
          break;
      case Animal::dog:
          return "�� ��ࠫ� ⨯ ����⭮��:  Dog";
          break;
      default:
          return "����� ⨯ ����⭮�� ���������.\n";
          break;

     }
}



void printNumberOfLegs(Animal tipAnimal)
{
    switch (tipAnimal)
      {
        case Animal::pig:
            cout<< "� ��࠭���� ����⭮�� 4-� ����." <<endl;
            break;
        case Animal::chicken:
            cout<< "� ��࠭���� ����⭮�� 2-� ����." <<endl;
            break;
        case Animal::goat:
            cout<< "� ��࠭���� ����⭮�� 4-� ����." <<endl;
            break;
        case Animal::cat:
            cout<< "� ��࠭���� ����⭮�� 4-� ����." <<endl;
            break;
        case Animal::dog:
            cout<< "� ��࠭���� ����⭮�� 4-� ����." <<endl;
            break;
        default:
            cout<< "";
            break;

       }
}


void functionZadanie2()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 2.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "��।����� ����᫥��� enum Animal, ���஥ ᮤ�ন� ᫥�����" <<endl;
cout << "�������: pig, chicken, goat, cat, dog. ������� �㭪�� getAnimalName()," <<endl;
cout << "����� �ਭ����� ��ࠬ��� Animal � �ᯮ���� switch ��� ������ ⨯� ���-��." <<endl;
cout << "������� �㭪�� - printNumberOfLegs(), ����� �ᯮ���� switch" <<endl;
cout << "��� �뢮�� ������⢠ ��� ᮮ⢥�����饣� ⨯� ����⭮��." <<endl;

cout<<endl<<endl;

cout << "�롥�� ��� ��� ⨯ ����⭮�� �� ᯨ᪠" <<endl;
cout << "����� ��஢�� ���祭�� �� 1 �� 5" <<endl;

int intAnimal;
cin >> intAnimal;

Animal enmAnimal = static_cast<Animal>(intAnimal);

string str;
str = getAnimalName(enmAnimal);

cout<<endl;
cout<< str <<endl;

printNumberOfLegs(enmAnimal);

cout<<endl<<endl<<endl;

}


