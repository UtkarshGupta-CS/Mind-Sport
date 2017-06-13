#include <iostream>

using namespace std;

void merge(int a[], int p, int q, int r)
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
}

void mergeSort(int a[], int p, int r)
{
   if (p < r)
   {
      int q = (p + r) / 2;

      mergeSort(a, p, q);
      mergeSort(a, q + 1, r);
      merge(a, p, q, r);
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
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   cout << "Original Array"
        << "\n";
   display(arr, n);

   mergeSort(arr, 0, n-1);

   cout << "Sorted array is \n";
   display(arr, n);
   return 0;
}
