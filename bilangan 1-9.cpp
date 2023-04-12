#include <iostream>
using namespace std;

void bilangan(int n){
    if (n > 9) {
        cout << "Lebih dari 9";
    } else {
        string huruf[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
        cout << huruf[n];
    }
}
