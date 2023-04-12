#include <iostream>
#include <cmath>
using namespace std;

float jarak (float x1, float y1, float x2, float y2){
	float d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return d;
}

int main(){
	float x1, y1, x2, y2;
    cin >> y1 >>x1>>x2>>y2;
	float d = jarak (x1,y1,x2,y2);
	cout<<d;
	return 0;

}


//#include <iostream>
//#include <math.h>
//using namespace std;
//
//float jarak(float x[]){
//	return sqrt(pow(x[3]-x[0],2) + pow(x[1]-x[2],2));
//}
//
//int main(){
//	float arr[4];
//	
//	for(int i=0; i<4; i++){
//		cin>>arr[i];
//	}
//	
//	cout<<jarak(arr);
//}
