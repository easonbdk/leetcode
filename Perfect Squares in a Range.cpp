#include <iostream>
#include <cmath>
using namespace std;

int countsquares(int a, int b){
    return (floor(sqrt(b)) - ceil(sqrt(a)) + 1);
}

int main() {
	//code
	int t=1, a, b;
	for (int i = 0; i < t; i++){
	    cin >> a >> b;
        cout << countsquares(a, b);
	}
    return 0;
}
