#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, j, temp;
    cin >> n;
    int arr[200];
    arr[0] = 1;
    j = 0;
    for (; n >= 2; n--)
    {
      temp = 0;
      for (int i = 0; i <= j; i++)
      {
        temp = (arr[i] * n) + temp;
        arr[i] = temp % 10;
        temp = temp / 10;
      }
      while (temp > 0)
      {
        arr[++j] = temp % 10;
        temp = temp / 10;
      }
    }
    for (int i = j; i >= 0; i--)
    {
      printf("%d", arr[i]);
    }
    printf("\n");
  }
}
