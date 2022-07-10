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


struct Node{
   int data;
   struct Node* next;
};

struct Node* insertBeforeHead(struct Node **head,int data){
   struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
   ptr->data = data;
   ptr->next = *head;
   *head = ptr;
   
   return *head;
}

void printing(struct Node* head){
   while(head!=NULL){
      cout<<head->data<<" ";
      head = head->next;
   }
   cout<<"\n";
}

int main(){
   // fun();
   struct Node* head = NULL;
   insertBeforeHead(&head,30);
   insertBeforeHead(&head,20);
   insertBeforeHead(&head,10);

   printing(head);
}



