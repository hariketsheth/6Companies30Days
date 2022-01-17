/*
Problem Link: https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1/
Title: Delete N nodes after M nodes of a linked list
Difficulty: Easy
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

void printList(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert(int n1)
{
    int n,value;
    n=n1;
    struct Node *temp;
    
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp=start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp=temp->next;
        }
    }
}
class Solution
{
    public:
    int length( struct Node *head)
    {
        struct Node *temp = head;
        int len = 0;
        while(temp)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
    void deleted(struct Node *t)
    {
        if(!t)
          return;
          
        delete(t->next);
    }
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here 
        int len = length(head);
        
        if( M >= len || N==0)
            return;
        
        struct Node *temp = head , *prev = NULL;
        
        while(temp)
        {
        int i=1;
        
        while( i<=M && temp)
        {
            prev = temp;
            temp = temp->next;
            if(!temp)
               return;
            i++;
        }
        
        struct Node *t = temp;
        i=1;
        while(i<N && temp)
        {
            i++;
            temp = temp->next;
            if(!temp)
            {
                prev->next = NULL;
                deleted(t);
                return;
            }
        }
        
        prev->next = temp->next;
        struct Node *p;
        
        while( t!= temp)
        {
            p = t->next;
            delete(t);
            t = p;
        }
        
        temp = t->next;
        delete(t);
      
        
    }
    }
};

int main()
{
    int t,n1;
    cin>>t;
    while (t--) {
        cin>>n1;
        int m,n;
        cin>>m;
        cin>>n;
        insert(n1);
        Solution ob;
        ob.linkdelete(start,m,n);
        printList(start);
    }
    
    return 0;
}
