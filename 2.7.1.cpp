#include <iostream>
#include <cmath>
using namespace std;

int n, a;

int main()
{
  cin >> n;
  a=sqrt(n);
  for (int i = 0; i<a; i++)
  {
    for (int j = 0; j<a; j++)
    {
      cout << "* ";
    }
    cout << '\n';
  }
  return 0;

}
