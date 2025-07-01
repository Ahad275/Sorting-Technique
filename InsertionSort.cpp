// Insertion Sort: For each element, we insert it into its correct position 
// in the sorted portion of the array by shifting larger elements to the right.

#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {13, 46, 24, 52, 20, 9};
    for (int i = 1; i < 6; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}