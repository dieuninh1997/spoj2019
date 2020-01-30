#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};

Node* newNode(int data){
  Node* node=new Node;
  node->data=data;
  node->left=NULL;
  node->right=NULL;
  return node;
}

bool isSame(Node* a, Node *b){
  if(a==NULL && b==NULL){
    return true;
  }
  if(a!=NULL && b!=NULL){
    return isSame(a->left, b->left) && isSame(a->right, b->right);
  }
  return false;
}
void add(Node* root, int val){
  if(root->data>val){
    if(!root->left){
      root->left=newNode(val);
    }else{
      add(root->left, val);
    }
  }else{
    if(!root->right){
      root->right=newNode(val);
    }else{
      add(root->right, val);
    }
  }
}

string duyet(Node *node){
  string s;
  if(node->left!=NULL){
    s+="0"+duyet(node->left);
  }
  s+='.';
  if(node->right!=NULL){
    s+="1"+duyet(node->right);
  }
  return s;
}
// void in(Node *root){
//   if(!root)return;
//   in(root->left);
//   cout<<root->data<<" ";
//   in(root->right);
// }


void init(vector<int> v, set<string> &lst){
  Node* root=newNode(v[0]);
  string s="";
  for(int i=1; i<v.size(); i++){
    add(root, v[i]);
  }
  lst.insert(duyet(root));
}

void solve(){
  int n, k;
  cin>>n>>k;
  set<string> lst;
  for(int t=0; t<n; t++){
    vector<int> v;
    v.clear();
    for(int i=0; i<k; i++)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }
    init(v,lst);
  }
  
  cout<<lst.size()<<endl;
}
int main(){
    solve();
    return 0;
}

//     3
//   1   4000
//     2

//     3
//   2   4
// 1

