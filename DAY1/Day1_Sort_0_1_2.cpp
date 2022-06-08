#include<bits/stdc++.h>
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
    int l = 0;
    int mid = 0;
    int h = n-1;
    while(mid <=h){
        if(arr[mid]==0){
            swap(arr[mid],arr[l]);
            l++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[h]);
            h--;
        }
    }
}
