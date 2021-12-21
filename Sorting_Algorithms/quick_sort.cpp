// Quick Sort

#include<bits/stdc++.h>
using namespace std;

int Partition(int a[], int s, int e)
{
     int pivot = a[e];
     int pindex = s;
     for (int i = s; i < e; i++)
     {
          if (a[i] <= pivot)
          {
               swap(a[i],a[pindex]);
               pindex++;
          }
     }
     swap(a[pindex], a[e]);
     return pindex;
}

void QuickSort(int a[], int s, int e)
{
     if (s < e)
     {
          int pivot = Partition(a,s,e);
          QuickSort(a,s,pivot-1);
          QuickSort(a,pivot+1,e);
     }
}

int main()
{
     int a[] = {3,2,4,1,5};
     QuickSort(a,0,4);
     for (int i : a)
          cout << i << " ";
     cout << endl;

     return 0;
}