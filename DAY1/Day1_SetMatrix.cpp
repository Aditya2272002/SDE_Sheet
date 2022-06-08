//Brute force
#include<bits/stdc++.h>
using namespace std;

void makeZero(vector<vector<int>>& arr,int row,int col,int n,int m){
    int p = row-1;
    while(p>=0){
        if(arr[p][col] !=0)
            arr[p][col] = -1;
        p--;
    }

    p = row+1;
    while(p<n){
        if(arr[p][col] !=0)
            arr[p][col] = -1;
        p++;
    }

    int q = col-1;
    while(q>=0){
        if(arr[row][q] !=0)
            arr[row][q] = -1;
        q--;
    }

    q = col+1;
    while(q<m){
        if(arr[row][q] !=0){
            arr[row][q] = -1;
        }
        q++;
    }
}

void setZeros(vector<vector<int>> &arr)
{
	// Write your code here.
    int n = arr.size();
    int m = arr[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                makeZero(arr,i,j,n,m);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == -1){
                arr[i][j] = 0;
            }
        }
    }
}
 
 
 
 
 
 
 //Time Optimized
 void setZeroes(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        int row[n];
        for(int i=0;i<n;i++) row[i] = -1;
        int col[m];
        for(int i=0;i<m;i++) col[i] = -1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==0){
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]==0 || col[j]==0){
                    arr[i][j] = 0;
                }
            }
        }
    }


int main(){

}