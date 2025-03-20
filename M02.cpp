#include <iostream>
#include <cmath>

using namespace std;

double Area(double A, int N) {
    if (A <= 0 || N < 3) {
        cout << "Invalid input." << endl;
        return 1;
    } else {
        double angle = 3.14f / N;
        double area = (N * A * A) / (4 * tan(angle));
        cout << "Area: " << area << endl;
        return area;
    }
}

int main() {
    double A, area;
    int N;

    cout << "Enter the side length: ";
    cin >> A;

    cout << "Enter the number of sides: ";
    cin >> N;

    area = Area(A, N);

    return 0;
}
