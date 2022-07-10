#include<bits/stdc++.h>
using namespace std;

// 1. Brute
// Time:- O((n-m+1)*m)
void brutePatternSearching(string &text,string &pattern){
   vector<int> ans;
   int n = text.length();
   int m = pattern.length();

   for(int i=0;i<=n-m;i++){  // window sliding
      bool isPresent = true;
      for(int j=0;j<m;j++){  // checking in each window
         if(pattern[j] != text[i+j]){
            isPresent = false;
         }
      }
      if(isPresent){
         cout<<i<<" ";
      }
   }
}
// 2. Brute Optimization case.  Time:- O(n)
// If all char in  pattern are distinct then we can shift the pattern 
// till the char matched in Text. 

void optimizedBrute(string &text,string &pattern){
   int n = text.length();
   int m = pattern.length();
   
   for(int i=0;i<=n-m; ){  // Note:- i++ part is not done here
      int j;
      for(j=0;j<m;j++){
         if(pattern[j] != text[i+j]){
            break;
         }
      }
      if(j==m){
         cout<<i<<" "; //if all char matched then j will will m
      }
      if(j==0){
         i = i + 1; // if first char not matched then simply +1
      }
      else{
         i = i+j; // moving to next index upto which char matched
      }
   }
}



int main(){
   string text = "abaacdaacbaaa";
   string pattern = "ba";

   brutePatternSearching(text,pattern);
   cout<<"\n";
   optimizedBrute(text,pattern);

   return 0;
}