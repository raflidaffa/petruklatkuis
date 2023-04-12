#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int banyakAngka[n];
    for (int i = 0; i < n; i++) {
        cin >> banyakAngka[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << banyakAngka[i] << " ";
    }
    cout << endl;

    return 0;
}
