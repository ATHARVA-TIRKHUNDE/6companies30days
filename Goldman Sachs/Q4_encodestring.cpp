#include <iostream>
#include <string>
using namespace std;
void encode(char str[] ,int n)
{
    char prev ;
    prev = str[0] ;
    int count = 1,i;
    for (i=1;i<n;i++)
    {
        if(prev==str[i])
        {
            count++;
        }
        else{
            cout <<  prev << count;
            prev = str[i] ;
            count = 1 ;
        }
    }
}
int main()
{
    char str[] = "wwwwaaadexxxxxx" ; //w4a3d1e1x6
    int n = sizeof(str);
    encode(str,n);
    return 0;
}