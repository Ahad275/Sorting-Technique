#include<bits./stdc++.h>
using namespace std;
int fun(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
    }
    int temp1 = arr[low];
    arr[low] = arr[j];
    arr[j] = temp1;
    return j;
    
}
void quicksort(int arr[],int low, int high){
    if (low < high)
    {
        int prtindex  = fun(arr,low,high);
        quicksort(arr,low,prtindex-1);
        quicksort(arr,prtindex+1, high);

    }
    
}
int main()
{
    int arr[6] = {13,46,24,52,20,9};
    int n = 6;
    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}