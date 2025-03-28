#include <iostream>
#include <string>

using namespace std;

string get_day_of_week(int d) {

  if (d < 10000 || d > 999999) {
    return "Некорректный формат даты! Должно быть шестизначное число (ДДММГГ).";
  }

  int day = d / 10000;
  int month = (d % 10000) / 100;
  int year = d % 100;


  if (day < 1 || day > 31 || month < 1 || month > 12) {
    return "Некорректная дата (день или месяц).";
  }

  if (year < 70) {
    year += 2000;
  } else {
    year += 1900;
  }

  int a = (14 - month) / 12;
  int y = year - a;
  int m = month + 12 * a - 2;
  int day_of_week = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7; //Формула Цёллера

  string days[] = {"Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота"};

  return days[day_of_week];
}

int main() {
    setlocale(0,"Russian");

  cout << get_day_of_week(240423) << endl;
  cout << get_day_of_week(240493) << endl;
  cout << get_day_of_week(10170) << endl;

  return 0;
}
