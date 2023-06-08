#include<iostream>
using namespace std;
int calc(int x, int y)
{
    if (y == 1) return x;
    else
    {
        return calc(x,y-1) * x;
    }
}
int main()
{
   cout << calc(2,2);
}