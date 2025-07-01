#include <bits./stdc++.h>
#include <vector>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    vector<int> v1;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            v1.push_back(arr[left]);
            left++;
        }
        else
        {
            v1.push_back(arr[right]);
            right++;
        }
    }
    // If element left on left array
    while (left <= mid)
    {
        v1.push_back(arr[left]);
        left++;
    }
    // If element left on right array
    while (right <= high)
    {
        v1.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = v1[i - low];
    }
}
void mergesort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);      // left half
    mergesort(arr, mid + 1, high); // Right half
    merge(arr, low, mid, high);    // merging array
}
int main()
{
    int arr[5] = {3, 2, 4, 1, 3};
    int n = 5;
    mergesort(arr, 0, n - 1);
    
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}