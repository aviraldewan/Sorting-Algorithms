// Insertion Sort

#include<iostream>
using namespace std;

void InsertionSort(int a[], int n)
{
     for (int i = 1; i < n; i++)
     {
          int value = a[i];
          int hole = i;
          while (hole > 0 && a[hole-1] > value)
          {
               a[hole] = a[hole-1];
               hole--;
          }
          a[hole] = value;
     }
}

int main()
{
     int a[] = {2, 5, 1, 3, 4};
     InsertionSort(a,5);
     for (int i : a)
          cout << i << " ";
     cout << endl;

     return 0;
}