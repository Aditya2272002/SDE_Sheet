#include <bits/stdc++.h> 
using namespace std; 


void rollingHash(string t, string pat)
{
    int n = t.length();
    int m = pat.length();
    int M = 26;
    
    int hashP = 0;
    int hashT = 0;
    int pm = 1;
    for(long long int i=0;i<m;i++){
        hashP = hashP + (pat[i] - 'a' + 1);
        hashT = hashT + (t[i] - 'a'+ 1);
    }
    // cout<<hashT<<" "<<hashP<<"\n";
    
    if(hashT==hashP){
        cout<<t.substr(0,m)<<" "<<0<<"\n";
    }
    
    for(long long int i=m;i<n;i++){
       hashT = hashT -(t[i-m]-'a'+1) + (t[i]-'a'+1);
        
        // cout<<hashT<<" "<<hashP<<"\n";
        
        if(hashT == hashP){
            cout<<t.substr(i-m+1,m)<<" "<<i-m+1<<"\n";
        }
    }
}