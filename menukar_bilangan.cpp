#include <iostream>
using namespace std;

void tukar(int& a, int& b, int& c) {
    int temp;
    temp = 0;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
}
