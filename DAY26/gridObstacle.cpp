#include<bits/stdc++.h>
using namespace std;

void fun(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   freopen("i.txt","r",stdin);
   freopen("o.txt","w",stdout);
   #endif
}

int M = 1000000007;
int go(int i,int j,vector<vector<int>> &arr,vector<vector<int>> &dp){
   if(i==0 && j==0){
      return 1;
   }
   if(i<0 || j<0){
      return 0;
   }

   if(arr[i][j]==-1){
      return 0;
   }
   if(dp[i][j]!=-1){
      return dp[i][j];
   }

   int u = go(i-1,j,arr,dp);
   int l = go(i,j-1,arr,dp);
   return dp[i][j] = (u+l)%M;
}

int main()
{
   fun();
   int n,B;
   cin>>n>>B;

   vector<vector<int>> arr(n,vector<int> (n,0));
   if(B>=0){
      int i = n/2;
      int j = n/2;
      arr[i][j] = -1;

      //left
      int p = i;
      int q = j-1;
      int t = B;
      while(q>=0 && t>0){
         arr[p][q] = -1;
         q--;
         t--;
      }

      //right
      p = i;
      q = j+1;
      t = B;
      while(q<n && t>0){
         arr[p][q] = -1;
         t--;
         q++;
      }

      //up
      p = i-1;
      q = j;
      t = B;
      while(p>=0 && t>0){
         arr[p][q] = -1;
         t--;
         p--;
      }

      //down
      p = i+1;
      q = j;
      t = B;
      while(p<n && t>0){
         arr[p][q] = -1;
         p++;
         t--;
      }

      //left up diagonal
      p = i-1;
      q = j-1;
      t = B;
      while(p>=0 && q>=0 && t>0){
         arr[p][q] = -1;
         p--;
         q--;
         t--;
      }

      //left down diagonal
      p = i+1;
      q = j-1;
      t = B;
      while(p<n && q>=0 && t>0){
         arr[p][q] = -1;
         p++;
         q--;
         t--;
      }

      //right up diagonal
      p = i-1;
      q = j+1;
      t = B;
      while(p>=0 && q<n && t>0){
         arr[p][q] = -1;
         p--;
         q++;
         t--;
      }

      //right down diagonal
      p = i+1;
      q = j+1;
      t = B;
      while(p<n && q<n && t>0){
         arr[p][q] = -1;
         p++;
         q++;
         t--;
      }
   }
   
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         cout<<arr[i][j]<<" ";
      }
      cout<<"\n";
   }
   cout<<"\n";

   vector<vector<int>> dp(n,vector<int> (n,-1));
   cout<<go(n-1,n-1,arr,dp)<<"\n";

   return 0;
}