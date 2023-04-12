void deret(int a, int d, int n) {
    int has = (n*(2 * a + (n - 1) * d))/2;
    cout<<has;
}

void baris(int a, int d, int n) {
    int temp = 0;
    for (int i = 1; i <= n; i++) {
        temp = a + (i-1) * d;
        if(temp>=0){
        cout << temp << " ";
        }
        else{
        cout<<"Not Found";
        exit(0);
        }
    }
    cout << endl;
}
