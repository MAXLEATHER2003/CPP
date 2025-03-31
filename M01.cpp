#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int TABLE_SIZE = 10;
    cout << "   |";

    for (int i = 1; i <= TABLE_SIZE; ++i) {
        cout << setw(4) << i;
    }
    cout << endl;

    cout << "---+";

    for (int i = 1; i <= TABLE_SIZE; ++i) cout << "----";
    cout << endl;

    for (int i = 1; i <= TABLE_SIZE; ++i) {

        cout << setw(2) << i << " |";

        for (int j = 1; j <= TABLE_SIZE; ++j) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}
