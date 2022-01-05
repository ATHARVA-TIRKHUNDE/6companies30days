#include <iostream>
using namespace std;
int countsquare(int n)
{
    int count ;
    return count = (n*(n+1)*(2*n+1))/6;
}
int main()
{
    int n ;
    cin >> n ;
    cout << countsquare(n);
    return 0;
}
