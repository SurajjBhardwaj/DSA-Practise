//1st question 

//striver sheet ::
//	Implement Stack using Arrays


//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    // Your Code
    if(top==999){
        cout<<"stack overflow"<<" ";
    }
    
    top++;
    arr[top]=x; 
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code
    
    if(top==-1){
        return -1;
    }
    
    int x=arr[top];
     top--;
     return x;   
}



/*
   QUESTION NO 2 :
   Implement Stack using Arrays
*/


The structure of the class is
class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 */

//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
        // Your Code
        
        if(rear==100004){
            cout<<"queue is fulled it can't take more push"<<endl; 
        }
        else{
            
            rear++;
            arr[rear]=x;
        
        }
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code  
        
        if(front==rear){
            return -1;
        }
        
        else{
            
           
            front++;
            return arr[front];
        }
}

