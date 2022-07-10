#include<bits/stdc++.h>
using namespace std;

int go(int i1,int i2,string &s1,string &s2,vector<vector<int>> &dp){
   if(i1==0 || i2==0){
      if(s1[i1]==s2[i2]) return 1;
      else
         return 0;
   }

   if(dp[i1][i2]!=-1){
      return dp[i1][i2];
   }

   int maxiSame = INT_MIN;
   //Same
   if(s1[i1] == s2[i2])
      maxiSame = max(maxiSame,1 + go(i1-1,i2-1,s1,s2,dp)); 

   int maxiNotSame = INT_MIN;
   //notSame
   maxiNotSame  = max(maxiNotSame,max(go(i1-1,i2,s1,s2,dp) ,go(i1,i2-1,s1,s2,dp)));

   return dp[i1][i2] = max(maxiSame,maxiNotSame);
}


void goIterative(){
   string s1 = "acd";
   string s2 = "acd";
   int n = s1.length();
   int m = s2.length();

   vector<vector<int>> dp(n,vector<int> (n,-1));
}

int main()
{
   string s1 = "acd";
   string s2 = "acd";
   int n = s1.length();
   int m = s2.length();

   vector<vector<int>> dp(n,vector<int> (n,-1));

   cout<<go(n-1,m-1,s1,s2,dp);

   return 0;
}