#include <bits/stdc++.h>

int search(int* arr, int n, int key) {
  int l=0,h=n-1;
  while(l<=h)
  {
      int mid=(l+h)/2;
      if(arr[mid]==key)return mid;
      else if(arr[mid]>=arr[l])
      {
          if(key>=arr[l]&&key<=arr[mid])
          {
              h=mid-1;
          }
        else
        {
                l=mid+1;
        }
         
      }
      else
      {
          if(key<=arr[h]&&key>=arr[mid])
          {
              l=mid+1;
          }
          else
          {
              h=mid-1;
          }
         

      }
  }
  return  -1;
}