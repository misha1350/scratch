#include <iostream>
using namespace std;

int n;

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j < n-1; j++)
    {
      cout << ' ';
    }
    for (int j = 0; j <= i; j++)
    {
      cout << '*';
    }
    cout << '\n';
  }
}
