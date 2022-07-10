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


int main(){
   fun();

   vector<vector<int>> arr = {{1,3},{8,10},{15,18},{2,6}};
   sort(arr.begin(),arr.end());

   for(auto i:arr){
      cout<<i[0]<<" "<<i[1]<<"\n";
   }
   

}