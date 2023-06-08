#include<iostream>
using namespace std;
int sum(int n, int a[])
{
   if (n == 1) return a[0];
   else return sum(n-1,a) + a[n-1];
}
int main()
{
    int n ;
    cin >> n;
    int a[n];
    for (int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }
    cout << sum(n,a);
}