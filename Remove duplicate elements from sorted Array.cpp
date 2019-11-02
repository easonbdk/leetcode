{
#include<bits/stdc++.h>
using namespace std;
/*You are required to complete this function */
int remove_duplicate(int [],int );
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    int n = remove_duplicate(a,sizeof(a)/sizeof(a[0]));
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}

}
/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete this function */

//Your code here
int remove_duplicate(int A[],int N)
{    
int fin = 0;
for (int i = 1; i < N; i++){
	if (A[fin] != A[i]){
	    A[++fin] = A[i];
	}
}
return fin+1;
}
