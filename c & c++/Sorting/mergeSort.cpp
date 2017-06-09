#include <iostream>
#include <vector>

using namespace std;

int merge(int a[], int p, int q, int r, int inv)
{
   int i, j, k;
   int n1 = q - p + 1;
   int n2 = r - q;

   int P[n1], R[n2];

   for (i = 0; i < n1; i++)
      P[i] = a[p + i];
   for (j = 0; j < n2; j++)
      R[j] = a[q + 1 + j];

   i = 0;
   j = 0;
   k = p;

   while (i < n1 && j < n2)
   {
      if (P[i] <= R[j])
      {
         a[k] = P[i];
         i++;
      }
      else
      {
         a[k] = R[j];
         j++;
         inv++;
         // cout << inv;
      }
      k++;
   }

   while (i < n1)
   {
      a[k] = P[i];
      i++;
      k++;
   }

   while (j < n2)
   {
      a[k] = R[j];
      j++;
      k++;
   }
   return inv;
}

int mergeSort(int a[], int p, int r, int inv)
{
   if (p < r)
   {
      int q = (p + r) / 2;
      
      mergeSort(a, p, q, inv);
      mergeSort(a, q + 1, r, inv);
      inv = merge(a, p, q, r, inv);
      cout << inv;
      return inv;
   }
}

void display(int a[], int size)
{
   int i;
   for (i = 0; i < size; i++)
      cout << a[i];
   cout << "\n";
}

int main()
{
   int n;
   int inv = 0;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   cout << "Original Array" << "\n";
   display(arr, n);
   
   cout << mergeSort(arr, 0, n-1, inv);

   cout << "Sorted array is \n";
   display(arr, n);
   // cout << mergeSort(arr, 0, n);

   cout << inv;
   return 0;
}
