#include <iostream>
using namespace std;

int countsubarray(int array[], int n, int k)
{
    int count = 0 ;
    int i, j, mul ;

    for (i = 0; i < n; i++)
    {
        if (array[i] < k)
            count++;
        mul = array[i];

        for (j = i + 1; j < n; j++) 
        {
            mul = mul * array[j];;
            if (mul < k)
                count++;
            else
                break;
        }
    }
    return count;
}

int main()
{
    int array[] = { 1, 2, 3, 4 } ;
    int k = 10 ;
    int size = sizeof(array) / sizeof(array[0]) ;
    int count = countsubarray(array, size, k) ;
    cout << count << "\n" ;
}