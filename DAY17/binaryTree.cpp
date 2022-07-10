#include<bits/stdc++.h>
using namespace std;


class Node{
   public:
      int data;
      Node* left;
      Node* right;
      Node* random;
      Node(int data){
         this->data = data;
         left = NULL;
         right = NULL;
         random = NULL;
      }
};

void inorder(Node* root){
   if (root==NULL){
      return;
   }

   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}

void iterativeInorder(Node* root){
   stack<pair<Node*,char>> st;
   st.push({root,'L'});

   while(!st.empty()){
      Node* cur = st.top().first;
      char state = st.top().second;
      st.pop();

      if(cur==NULL){
         continue;
      }

      if(state=='L'){
         st.push({cur,'V'});
         st.push({cur->left,'L'});
      }
      else if(state=='V'){
         cout<<cur->data<<" ";
         st.push({cur,'R'});
      }else{
         st.push({cur->right,'L'});
      }
   }
}

void levelorder(Node* root){
   queue<Node*> q;
   q.push(root);

   while(!q.empty()){
      Node* cur = q.front();
      q.pop();

      cout<<cur->data<<" ";
      if(cur->left!=NULL){
         q.push(cur->left);
      }

      if(cur->right!=NULL){
         q.push(cur->right);
      }
   }
}

//LevelOrder on tree having more than two childerns
void levelOrderNry(Node* root){
   queue<Node*> q;
   q.push(root);

   while(!q.empty()){
      int n = q.size();
      for(int i=0;i<n;i++){
         Node* cur = q.front();
         q.pop();

         cout<<cur->data<<" ";
         if(cur->left!=NULL){
            q.push(cur->left);
         }
         if(cur->right!=NULL){
            q.push(cur->right);
         }
         if(cur->random!=NULL){
            q.push(cur->random);
         }
      }
   }
}

int main()
{  
   Node* root = new Node(10);
   root->left = new Node(20);
   root->right = new Node(30);
   root->left->left = new Node(40);
   root->right->left = new Node(50);
   root->random = new Node(60);
   root->right->right = new Node(70);
   root->right->random = new Node(80);

   // inorder(root);
   // cout<<"\n";
   // iterativeInorder(root);
   // cout<<"\n";
   // levelorder(root);

   levelOrderNry(root);

   return 0;
}