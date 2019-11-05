#include <iostream>
using namespace std;

int setBits(int n){         // Find out the numbers of setBits
    int count = 0;
    while(n){
        count += (n&1);       // count = count + (n&1)
        n = n>>1;
    }
    return count;
}

int fastSetBits(int n){     // Find out the numbers of setBits (faster)
    int count = 0;
    while(n){
        count++;
        n = n&(n-1);
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    while(t--){             // for (i=0; i<t; i++)
        int n;
        cin >> n;
        cout << setBits(n) << endl;
    }
    return 0;
}
