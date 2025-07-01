// Bubble Sort: In this algorithm, we repeatedly compare adjacent elements 
// and swap them if they are in the wrong order. After each full pass through 
// the array, the largest unsorted element "bubbles up" to its correct position 
// at the end. We repeat this process for all elements until the entire array is sorted.
#include<bits./stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {13,46,24,52,20,9};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            //Comapre adjacent element and swapping.
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}