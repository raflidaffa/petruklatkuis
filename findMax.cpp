#include <iostream>
using namespace std;

void findMax() {
  int n, maxNilai, nilai;
  cin >> n; 
  cin >> maxNilai;
  
  for (int i = 1; i < n; i++) {
    cin >> nilai; 
    if (nilai > maxNilai) {
      maxNilai = nilai; // 
    }
  }
  cout <<maxNilai;
  cout<<endl;
}
