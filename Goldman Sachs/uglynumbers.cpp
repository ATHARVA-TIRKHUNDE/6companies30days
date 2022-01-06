#include <iostream>
using namespace std;
int isNumberUgly(int i)
{
    while(i%2==0)
        i=i/2;
    while(i%3==0)
        i=i/3;
    while(i%5==0)
        i=i/5;
    if(i==1)
        return 1;
    else
        return 0;
}
int nthugly(int number)
{
    int count=1;
    int no=1;
    while(number>count)
    {
        no++;
        if(isNumberUgly(no))
        {
            count++;
        }
        
    }
    return no;
}
int main()
{
  int n,u;
  cout << "Enter the nth ugly number to print : " << endl;
  cin>>n;
  u = nthugly(n);
  cout << n <<"th ugly number is "<< u << endl;
  return 0;
}