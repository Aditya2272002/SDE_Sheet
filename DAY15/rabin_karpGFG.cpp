#include <bits/stdc++.h> 
using namespace std; 


void go(string &text,string &pattern){
   int n = text.length();
   int m = pattern.length();
   int M = 1000000007;
   int p = 5;

   int pm = 1;  // p ki power m
   int hashP = 0;
   int hashT = 0;

   for(int i=0;i<m;i++){
      pm = (pm%M * p%M)%M;
      hashP = (hashP%M + (pattern[i]-'a'+ 1)*pm)%M;
      hashT = (hashT%M + (text[i] -'a'+ 1)*pm)%M;
   }

   //cout<<hashT<<" "<<hashP<<"\n";

   if(hashP == hashT){
      bool isEqual = true;
      for(int i=0;i<m;i++){
         if(pattern[i] != text[i]){
            break;
         }
      }
      if(isEqual){
         cout<<0<<" ";
      }
   }
   
   for(int i=m;i<n;i++){
      hashT = (((hashT -((text[i-m]-'a'+1)%M*p%M)%M)/p)%M + ((text[i]-'a'+1)%M*pm%M)%M)%M;
      //cout<<i-m+1<<" "<<hashT<<"\n";
      if(hashP == hashT){
         bool isEqual = true;
         for(int j=0;j<m;j++){
            if(pattern[j] != text[i - m + 1 + j]){
               break;
            }
         }
         if(isEqual){
            int t = i-m+1;
            cout<<t<<" ";
         }
      }  
   }
}


/* Driver code */
int main() 
{ 
	string text = "abaacdaacbadaac"; 
   string pattern = "aac";

   // string text = "geeksforgeeks";
	// string pattern = "geeks";
   go(text,pattern);
	return 0; 
} 

// This is code is contributed by rathbhupendra 