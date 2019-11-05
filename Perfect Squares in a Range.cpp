#include <iostream>
#include <cmath>
using namespace std; 

int countSquares(int a, int b) 
{ 
    return (floor(sqrt(b)) - ceil(sqrt(a)) + 1); 
} 
  
int main() 
{ 
    int t, a, b;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> a >> b;
        cout << countSquares(a, b) << endl; 
    }
    return 0;
} 
