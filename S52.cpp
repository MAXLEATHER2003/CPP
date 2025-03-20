#include <iostream>

using namespace std;

void print(int num){
    cout << num << endl;
}

void print(float num){
    cout << num << endl;
}

void print(char ch){
    cout << ch << endl;
}

void print(int num_1, int num_2){
    cout << num_1 << endl;
    cout << num_2 << endl;
}
int main(){
    print(100);
    print(3.14f);
    print('A');
    print(10, 20);

    return 0;
}
