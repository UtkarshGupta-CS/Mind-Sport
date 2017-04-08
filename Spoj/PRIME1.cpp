#include <iostream>

using namespace std;

void prime(int n1, int n2)
{
   for (int i=n1; i <= n2; i++) 
    {
        bool isPrime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
            {
                isPrime=false;
                break;    
            }
        }   
        if(isPrime && i != 1) cout << i << " ";
    }
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num1, num2;
      cin >> num1 >> num2;
      prime(num1, num2);
   }
}