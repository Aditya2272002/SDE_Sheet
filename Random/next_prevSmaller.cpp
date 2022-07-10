#include <bits/stdc++.h> 
using namespace std; 


void nextSmaller(vector<int> &arr,vector<int> &ns){

   int n = arr.size();
   stack<int> st;
   for(int i=n-1;i>=0;i--){
      while(!st.empty() && arr[st.top()] >= arr[i]){
            st.pop();
      }
      
      if(st.empty()){
            ns[i] = n;
      }else{
            ns[i] = st.top();
      }
      st.push(i);
   }
}
   
void prevSmaller(vector<int> &arr,vector<int> &ps){
   
   int n = arr.size();
   stack<int> st;
   for(int i=0;i<n;i++){
      while(!st.empty() && arr[st.top()] >= arr[i]){
            st.pop();
      }
     
      if(st.empty()){
            ps[i] = -1;
      }else{
            ps[i] = st.top();
      }
      st.push(i);
   }
}
   
int largestRectangleArea(vector<int>& heights) {
   int n = heights.size();
   vector<int> ps(n,0);
   vector<int> ns(n,0);
   
   prevSmaller(heights,ps);
   nextSmaller(heights,ns);

   int ans = 0;
   for(int i=0;i<n;i++){
      ans = max(ans,(ns[i]-ps[i]-1)*heights[i]);
   }

   return ans;
}

int main(){
   // vector<int> heights = {2,1,5,6,2,3};
   // cout<<largestRectangleArea(heights)<<"\n";
   cout<<(int)"1"<<" ";
   cout<<(int)"0";
}