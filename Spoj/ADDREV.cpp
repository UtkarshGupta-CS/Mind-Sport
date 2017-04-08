#include <iostream>

using namespace std;

int revNo(int n)
{
   int reversedNumber = 0, remainder;

   while (n != 0)
   {
      remainder = n % 10;
      reversedNumber = reversedNumber * 10 + remainder;
      n /= 10;
   }

   return reversedNumber;
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num1, num2,sum = 0; cin>> num1 >> num2;
      num1 = revNo(num1);
      num2 = revNo(num2);
      sum = num1 + num2;
      cout<< revNo(sum) <<"\n";  
   }
}