//{ Driver Code Starts
// C program for insertion sort
//1st  question

#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        iterative method
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<=i;j++){
                
                if(arr[i]<arr[j]){
                   
                  int temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
                }
                
                
                
            }
            
            
            
        }
        
        //Reccursive method
        
        
        
        if(n==1){
            return ;
        }
       
        for(int i=0;i<n-1;i++){
            
            if(arr[i]>arr[i+1]){
                 int temp=arr[i];
                 arr[i]=arr[i+1];
                 arr[i+1]=temp;
            }
        }
         
          
        insertionSort(arr,n-1);
        
       
        
        
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends


//2nd question

//{ Driver Code Starts
//Initial Template for C++

// C program for implementation of Bubble sort
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

// swapping the elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here 
        
      // Iterative method
        
        for(int i=0;i<n-1;i++){
            
            for(int j=0;j<(n-1)-i;j++){
                
                if(arr[j]>arr[j+1]){
                    
                      swap(arr[j],arr[j+1]);
                      
                }
                
                
            }
            
            
            
        }
        
        
        //Recursive method
        
        if(n==1){
            return;
        }
        
        for(int i=0;i<n-1;i++){
            
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        
        bubbleSort(arr,n-1);
 
    }
};


//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
      
    ob.bubbleSort(arr, n);
    printArray(arr, n);
    }
    return 0;;
}
// } Driver Code Ends


//3rd question

//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        // Your code here
        int i = l, j = m+1, ci = 0;
        int *temp = new int[r - l + 1];
        while(i <= m && j <= r){
            if(arr[i] <= arr[j]){
                temp[ci++] = arr[i++];
            }else {
                temp[ci++] = arr[j++];
            }
        }
        while(i <= m ){
            temp[ci++] = arr[i++];
        }
        while(j <= r){
            temp[ci++] = arr[j++];
        }
        for(int k = 0; k < r-l+1; k++){
            arr[l + k] = temp[k];
        }
         
    }
    
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(r > l){
            int m = l + (r - l) /2; 
            mergeSort(arr, l, m );
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
        
        
        
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends

//question no 4
//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        
        // code here
        // if(high==1){
        //     return ;
        // }
        
        if(low == high || low>high){
            return ;
        }
        
        int j;
        if(low<high){
            
            j=partition(arr,low,high);
            quickSort(arr,low,j-1);
            quickSort(arr,j+1,high);
            
        }  
    }
    
    public:
    int partition (int a[], int low, int high)
    {
       // Your code here
     int pivot = a[low];
      int l=low,r=high;
      while(l<r)
      {
          while(a[l]<=pivot)l++;
          while(a[r]>pivot)r--;
          if(l<r) swap(a[l],a[r]);
      }
      swap(a[low],a[r]);
      return r;
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends