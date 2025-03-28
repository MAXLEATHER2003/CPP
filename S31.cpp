#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(0,"Russian");
    string NumsWords[] = {"Ноль", "Один", "Два", "Три", "Четыре",
        "Пять", "Шесть", "Семь", "Восемь", "Девять"};

    int number;

    cout << "Введите цифру от 0 до 9: ";
    cin >> number;

    if (number >= 0 && number <= 9) {
        cout << "Вы ввели " << NumsWords[number] << endl;
    } else {
        cout << "Ошибка: Введите цифру от 0 до 9." << endl;
    }

    return 0;
}
