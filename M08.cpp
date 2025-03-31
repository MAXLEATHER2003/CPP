#include <iostream>
#include <math.h>

using namespace std;

double get_angle(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        cerr << "Ошибка: Длины сторон должны быть больше 0." << endl;
        return NAN;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        cerr << "Ошибка: Не выполняется неравенство треугольника." << endl;
        return NAN;
    }

    double cos_angle = (b * b + c * c - a * a) / (2 * b * c);

    if (cos_angle < -1 || cos_angle > 1) {
        cerr << "Ошибка: Значение косинуса угла находится вне допустимого диапазона." << endl;
        return NAN;
    }

    double angle_rad = acos(cos_angle);

    double angle_deg = angle_rad * 180.0 / 3.14f;

    return angle_deg;
}

int main() {
    setlocale(0,"Russian");
    double angle = get_angle(5., 4., 3.);

    if (!isnan(angle)) cout << "Угол: " << angle << " градусов" << endl;

	angle = get_angle(5., 4., 3.);
	cout << get_angle(5., 4., 3.) << endl;

    return 0;
}
