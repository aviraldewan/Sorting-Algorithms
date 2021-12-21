#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &left, vector<int> &right, vector<int> &a)
{
     int k = 0, i = 0, j = 0;
     int nL = left.size();
     int nR = right.size();
     while (i < nL && j < nR)
     {
          if (left[i] <= right[j])
          {
               a[k] = left[i];
               i++;
          }
          else
          {
               a[k] = right[j];
               j++;
          }
          k++;
     }
     while (i < nL)
     {
          a[k] = left[i];
          i++;
          k++;
     }
     while (j < nR)
     {
          a[k] = right[j];
          j++;
          k++;
     }
}

void MergeSort(vector<int> &a)
{
     int n = a.size();
     if (n < 2) return;
     int mid = n/2;
     vector<int> left, right;
     for (int i = 0; i <= mid-1; i++) left.push_back(a[i]);
     for (int i = mid; i <= n-1; i++) right.push_back(a[i]);
     MergeSort(left);
     MergeSort(right);
     Merge(left,right,a);
}

int main()
{
     vector<int> a;
     a.push_back(3);
     a.push_back(1);
     a.push_back(4);
     a.push_back(5);
     a.push_back(2);
     MergeSort(a);
     for (int i : a)
          cout << i << " ";
     cout << endl;

     return 0;
}