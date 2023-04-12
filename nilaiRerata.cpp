#include <iostream>
using namespace std;

void hitungRerata() {
  int n;
  double total = 0.0;
  double rata_rata,nilai;
  cin >> n; 
  
  for (int i = 0; i < n; i++) {
    cin >> nilai; 
    total+=nilai; 
    }
    rata_rata = total / n;
  
  cout<<rata_rata;
  cout<<endl;
}

