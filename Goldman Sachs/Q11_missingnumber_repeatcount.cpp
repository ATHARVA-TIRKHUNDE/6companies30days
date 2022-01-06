#include <bits/stdc++.h>
using namespace std;

void missingnum_twicenum(int arr[], int size)
{
    int i;
    cout << "The repeating element : ";
    for (i = 0; i < size; i++) 
    {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << "\n";
    }
    cout << "The missing element : ";
    for (i = 0; i < size; i++) 
    {
        if (arr[i] > 0)
            cout << (i + 1);
    }
}

int main()
{
    int arr[] = { 1,2,2,4,5,6,7,8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    missingnum_twicenum(arr, n);
}
