#include <iostream>
using namespace std;

float a,b;
int main()
{
    cin >> a;
    cin >> b;
    if (a==0)
    {
        cout << 0;
    }
    else
    {
        if (b==0)
        {
            cout << "uh oh stinky";
        }
    }
    if (a!=0 && b!=0)
    {
       cout << a/b;
    }
}
