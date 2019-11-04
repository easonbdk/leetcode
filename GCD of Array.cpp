#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    gcd(b, a%b);
}
int main()
{
	int t;
	cin >> t;
	while (t--){        // After the loop finished, the value of x will be -1.  * 0 equals to false.
	    int n;
	    cin >> n;
	    int a[n];
	    
	    int i;
	    for(i=0; i<n; i++)
	    cin >> a[i];
	    if (n==1)
	    cout << a[0] << endl;
	    else{
        	    int g=gcd(a[0], a[1]);
        	    for(i=2;i<n;i++){
        	        g=gcd(g, a[i]);
        	    }
        	    cout << g << endl;
	    }
	}
	return 0;
}
