//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* inputList(int size)
{
    if (size == 0) return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}


// } Driver Code Ends
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        // Your Code Here
        // brute force method
        
        // Node *first=head1;
        // Node *second=head2;
        // Node *q=head1;
        
        // if(first!=NULL || second!=NULL){
            
        //     while(first && second){
                
        //         while(first){
                    
        //             if(first==second) return first->data;
        //             first=first->next;
                    
        //         }
        //         first=q;
        //         second=second->next;
        
        //     }
            
        //     return -1;

        // }
        
        
        // else return -1;
        
        //optimized approach 
        //find the length of both of the ll
         int len1=0;
         int len2=0;
         Node *node1 = head1;
         Node *node2 = head2;
         
         //to find length
         while(node1!=NULL){
             len1++;
             node1=node1->next;
         }
         while(node2!=NULL){
             len2++;
             node2=node2->next;
         }
         node1=head1;
         node2=head2;
         int diff=0;

         //traverse the node with the greter length by the difference between their length
         if(len1>len2){
             diff=len1-len2;
             for(int i=0;i<diff;i++){
                 node1=node1->next;
             }
         }
         else{
             diff=len2-len1;
             for(int i=0;i<diff;i++){
                 node2=node2->next;
             }
         }

         //traverse from now to the end and check if they are equal then return the data of that node otherwise return -1
         while(node1!=NULL && node2!=NULL){
             if(node1==node2){
                 return node1->data;
             }
             node1=node1->next;
             node2=node2->next;
         }
         return -1;
	
        
        
        
        
        
        
        
        
    }
};



//{ Driver Code Starts.


/* Driver program to test above function*/
int main()
{
    int T, n1, n2, n3;

    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);

        Node* temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;
        
        Solution ob;
        cout << ob.intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends