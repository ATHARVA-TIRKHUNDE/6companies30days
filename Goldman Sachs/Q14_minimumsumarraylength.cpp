#include <iostream>
using namespace std;

int countsubarray(int array[], int n, int k)
{
    int count = 0 ;
    int i, j, sum,min;

    for (i = 0; i < n; i++)
    {
        if (array[i] == k)
            return 1 ;
        sum = array[i];
        count = 0 ;
        for (j = i + 1; j < n; j++) 
        {
            sum = sum + array[j];        
            if (sum >= k)
            {    
                cout << "Addition : " << sum << endl ;
                min = count++; 
            }
            else
                continue;
        }
    }
    return min ;
}

int main()
{
    int array[] = { 1, 2, 3, 4 ,10} ;
    int k = 10 ;
    int size = sizeof(array) / sizeof(array[0]) ;
    int count = countsubarray(array, size, k) ;
    cout << count << "\n" ;
}