#include <iostream>
#include <vector>

using namespace std;

void insertionSort(int arr[], int n)
{
   int value, hole, i;
   for (i = 0; i < n - 1; i++)
   {
      value = arr[i + 1];
      hole = i + 1;
      while (hole > 0 && arr[hole - 1] > value)
      {
         arr[hole] = arr[hole - 1];
         hole--;
      }
      arr[hole] = value;
   }
}

int main()
{
   int number, x;
   cin >> number;
   int inputs[number];

   for (int i = 0; i < number; i++)
   {
      cin >> inputs[i];
   }
   insertionSort(inputs, number);

   for (int j = 0; j != number; j++)
   {
      cout << inputs[j] << " ";
   }
}