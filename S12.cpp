#include <iostream>

using namespace std;

int main(){
    int num_0 = 1;
    int step = 4;
    int limit = 1000;
    int sum = 0;

    while(num_0 <= limit){
        if (num_0 % 7 == 0){
            sum += num_0;
        }
        num_0 += step;
    }

    cout << "Sum of nums divisible by 7 is: " << sum << endl;

    return 0;
}
