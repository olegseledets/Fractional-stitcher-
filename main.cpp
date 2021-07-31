#include <iostream>
#include <sstream>

int main() {
  int wholePart = 0;
  int fraction = 0;
  double number = 0;
  std::stringstream doubleNumber;

  std::cout << "Целая часть: ";
  std::cin >> wholePart;
  std::cout << "Дробная часть: ";
  std::cin >> fraction;
  doubleNumber << wholePart << "." << fraction;

  doubleNumber >> number;
  std::cout << "Полученное число: " << number;
}

/*
Сшиватель дробных чисел
Надо написать небольшую программу. Из целой и дробной частей числа, которые в отдельности вводит пользователь надо составить новое число с плавающей точкой (типа double) и вывести это число обратно в консоль, для проверки. Целая часть - это та, часть числа, которая находится до точки (запятой), дробная - после.
*/