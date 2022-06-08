//Vedio -> https://youtu.be/6qXO72FkqwM
#include<bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int> &arr, int n)
{
    //  Write your code here.
    int ind1  = -1,ind2;
    for(int i=n-2;i>=0;i--){
        if(arr[i] < arr[i+1]){
            ind1 = i;
            break;
        }
    }
    if(ind1 < 0){
        sort(arr.begin(),arr.end());
    }else{
        for(int i=n-1;i>ind1;i--){
            if(arr[i] > arr[ind1]){
                ind2 = i;
                break;
            }
        }
        swap(arr[ind1],arr[ind2]);
        sort(arr.begin()+ind1+1,arr.end());
    }
    return arr;
}
