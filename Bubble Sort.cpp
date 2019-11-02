/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/* The task is to complete bubble() which is used 
   in below bubbleSort() */
/* A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   for (int i = 0; i < n-1; i++)      
        bubble(arr, i, n);
} */
void bubble(int arr[], int i, int n)
{
    int j;
    for (j=0; j<n-i-1; j++){
        if (arr[j] > arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
