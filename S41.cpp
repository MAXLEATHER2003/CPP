#include <iostream>

using namespace std;

double squared_sum(double num_1, double num_2){
    double sum = num_1 + num_2;
    return sum * sum;
}

int main(){
    double a, b;

    cout << "Enter the first floating-point number:  ";
    cin >> a;

    cout << "Enter the second floating-point number:  ";
    cin >> b;

    double res = squared_sum(a, b);

    cout << "Result: " << res << endl;

    return 0;
}
