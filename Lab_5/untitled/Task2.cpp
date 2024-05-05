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
          return "Вы выбрали тип животного:  Pig";
          break;
      case Animal::chicken:
          return "Вы выбрали тип животного:  Chicken";
          break;
      case Animal::goat:
          return "Вы выбрали тип животного:  Goat";
          break;
      case Animal::cat:
          return "Вы выбрали тип животного:  Cat";
          break;
      case Animal::dog:
          return "Вы выбрали тип животного:  Dog";
          break;
      default:
          return "Такой тип животного отсутствует.\n";
          break;

     }
}



void printNumberOfLegs(Animal tipAnimal)
{
    switch (tipAnimal)
      {
        case Animal::pig:
            cout<< "У выбранного животного 4-е лапы." <<endl;
            break;
        case Animal::chicken:
            cout<< "У выбранного животного 2-е лапы." <<endl;
            break;
        case Animal::goat:
            cout<< "У выбранного животного 4-е лапы." <<endl;
            break;
        case Animal::cat:
            cout<< "У выбранного животного 4-е лапы." <<endl;
            break;
        case Animal::dog:
            cout<< "У выбранного животного 4-е лапы." <<endl;
            break;
        default:
            cout<< "";
            break;

       }
}


void functionZadanie2()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ЗАДАНИЕ 2.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;

cout << "Определить перечисление enum Animal, которое содержит следующих" <<endl;
cout << "животных: pig, chicken, goat, cat, dog. Написать функцию getAnimalName()," <<endl;
cout << "которая принимает параметр Animal и использует switch для возврата типа жив-го." <<endl;
cout << "Написать функцию - printNumberOfLegs(), которая использует switch" <<endl;
cout << "для вывода количества лап соответствующего типа животного." <<endl;

cout<<endl<<endl;

cout << "Выберите ваш любимый тип животного из списка" <<endl;
cout << "введя цифровое значение от 1 до 5" <<endl;

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


