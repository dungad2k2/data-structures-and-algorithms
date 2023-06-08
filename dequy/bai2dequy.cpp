#include<iostream>
using namespace std;
int sum(int n)
{
    if (n / 10 == 0) return n;
    else
    {
        int r = n % 10;
        return sum(n/10) + r;
    }
}
int main()
{
    cout << sum(123);
}