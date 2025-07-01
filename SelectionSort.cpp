// Assume the first element is the minimum.
// Find the actual minimum in the remaining array.
// Swap it with the first element.
// Move to the next position and repeat.

#include<bits./stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {7,5,9,2,8};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        //We consider i'th element as the minimum. 
        int min = i;
        //For Finding the minimum element from an array.
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            
        }
        //Swap the minimum element with the element which is at i'th index.
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        
    }
    //Traversing in the array.
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" ";
    }
    
    
    return 0;
}