#include <iostream>

using namespace std;

int main() {
    int matriks1[100][100];
    int matriks2[100][100];
    int hasil[100][100];

    int baris_1, kolom_1, baris_2, kolom_2;

    cin >>baris_1>>kolom_1;

    for (int i = 0; i < baris_1; i++) {
        for (int j = 0; j < kolom_1; j++) {
            cin >> matriks1[i][j];
        }
    }

    cin >> baris_2 >> kolom_2;

    if (kolom_1 != baris_2) {
        cout << "Perkalian matriks tidak dapat dilakukan" << endl;
        return 0;
    }

    for (int i = 0; i < baris_2; i++) {
        for (int j = 0; j < kolom_2; j++) {
            cin >> matriks2[i][j];
        }
    }

    for (int i = 0; i < baris_1; i++) {
        for (int j = 0; j < kolom_2; j++) {
            hasil[i][j] = 0;
        }
    }

    for (int i = 0; i < baris_1; i++) {
        for (int j = 0; j < kolom_2; j++) {
            for (int k = 0; k < kolom_1; k++) {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
    
    for (int i = 0; i < baris_1; i++) {
        for (int j = 0; j < kolom_2; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
