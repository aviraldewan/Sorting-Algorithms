// Bubble Sort

#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int a[], int n)
{
     for (int i = 1; i < n; i++)
     {
          for (int j = 0; j < n-1; j++)
          {
               if (a[j] > a[j+1])
                    swap(a[j], a[j+1]);
          }
     }
}

int main()
{
     int a[] = {3, 5, 2, 1, 4};
     BubbleSort(a, 5);
     for (int i : a)
          cout << i << " ";
     cout << endl;

     return 0;
}