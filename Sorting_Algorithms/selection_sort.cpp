// Selection Sort

#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int a[], int n)
{
     for (int i = 0; i < n-1; i++)
     {
          int minn = i;
          for (int j = i+1; j < n; j++)
          {
               if (a[j] < a[minn])
                    minn = j;
          }
          swap(a[minn], a[i]);
     }
}

int main()
{
     int a[] = {4, 3, 1, 5, 2};
     SelectionSort(a, 5);

     for (int i = 0; i < 5; i++)
          cout << a[i] << " ";
     cout << endl;

     return 0;
}