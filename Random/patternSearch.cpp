#include <bits/stdc++.h> 
using namespace std; 

 
bool search(string pat, string txt) 
{ 
   // Your code here
   int m = pat.length();
   int n = txt.length();

   int i=0,j=0;
   while(i<n && j<m){
      if(txt[i] == pat[j]){
         i++;
         j++;
      }else{
         j=0;
         if(txt[i]!=pat[j]){
            i++;
         }
      }
      
      if(j==m){
         cout<<i-m<<" ";
         j=0;
      }
   }
} 



int main(){
   string text = "abaacdaacbaaa";
   string pattern = "ba";

   search(pattern,text);
   

   return 0;
}