/*
 *https://www.hackerrank.com/challenges/ctci-merge-sort
*/

#include <iostream>
#include <vector>

using namespace std;

class InversionCounter {
   public:
   static long long inv;
};

long long InversionCounter::inv = 0;

void merge(vector<int> a, int p, int q, int r)
{
   int i, j, k;
   int n1 = q - p + 1;
   int n2 = r - q;
   InversionCounter obj;

   vector<int> P(n1), R(n2);

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
         int count = P.size() - k;
         obj.inv += count;
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

void mergeSort(vector<int> a, int p, int r)
{
   if (p < r)
   {
      int q = (p + r) / 2;

      mergeSort(a, p, q);
      mergeSort(a, q + 1, r);
      merge(a, p, q, r);
   }
}

long long count_inversions(vector<int> a, int n)
{  
   InversionCounter obj;
   mergeSort(a, 0, n - 1);
   return obj.inv;
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<int> arr(n);
      for (int arr_i = 0; arr_i < n; arr_i++)
      {
         cin >> arr[arr_i];
      }
      cout << count_inversions(arr, n) << endl;
   }
   return 0;
}
