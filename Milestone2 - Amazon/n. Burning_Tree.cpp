/*
Problem Link: https://practice.geeksforgeeks.org/problems/burning-tree/1/
Title: Burning Tree
Difficulty: Hard
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    Node *root = new Node(stoi(ip[0]));
    queue<Node *> queue;
    queue.push(root);

    int i = 1;
    while (!queue.empty() && i < ip.size()) {
        Node *currNode = queue.front();
        queue.pop();

        string currVal = ip[i];
        if (currVal != "N") {
            currNode->left = new Node(stoi(currVal));
            queue.push(currNode->left);
        }

        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];
        if (currVal != "N") {
            currNode->right = new Node(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


class Solution {
  public:
  Node *tar=NULL;
  void get(Node *root,int tg){
      if(root==NULL){
          return;
      }
      if(root->data==tg){
          tar=root;
      }
      get(root->left,tg);
      get(root->right,tg);
      
  }
unordered_map<Node *,Node *>parent;
  void getparent(Node *root,Node *  p){
      if(root==NULL){
          return;
      }
     
      parent[root]=p;
      getparent(root->left,root);
      getparent(root->right,root);
  }
    int minTime(Node* root, int target) 
    {
        get(root,target);
        getparent(root,NULL);
        int ans=0;
       queue<Node *>q;
       q.push(tar);
       q.push(NULL);
       unordered_map<Node *,int>mp;
       while(!q.empty()){
           if(q.front()==NULL){
               q.pop();
             
              
              if(q.empty()){
                  break;
              }
               ans++;
               q.push(NULL);
               continue;
           }
           Node *temp=q.front();
           q.pop();
           mp[temp]=1;
           if(parent[temp]!=NULL && !mp[parent[temp]]){
               q.push(parent[temp]);
           }
        if(temp->left && !mp[temp->left]){
               q.push(temp->left);
           }if(temp->right && !mp[temp->right]){
               q.push(temp->right);
           }
           
       }
       return ans;
    }
};

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        int target;
        cin>>target;

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}
