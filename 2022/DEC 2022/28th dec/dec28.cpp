class Solution
{
public:
    vector<long long> v;
    
    long long fact(long long i){
        
        if(i==1  || i==0){
            return 1;
        }
        return i*fact(i-1);
    }
    
    void factnumber(long long N){
        
        long long x;
        for(long long i=1;i<=(N/2)+1;i++){
            
            x=fact(i);
            if(x<=N){
                v.push_back(x);
            }
            else{
                return;
            }
        }
    }
    
    
    
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
       factnumber(N);
       return v;
        
        
    }
};


//2nd question

void MyQueue:: push(int x)
{
        // Your Code
        
        QueueNode *t=new QueueNode(x);

if(t==NULL){
    cout<<" queue is full "<<endl;
}

else{

    // t->data=data;
    // t->next=NULL;
    if(front==NULL){front=rear=t;}
    else{
         rear->next=t;
         rear=t;
}
 
}
        
 


}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code
        
         int x=-1;
    if(front==NULL){

      

    }else{
      
      QueueNode *p=front;
      front=front->next;
      x=p->data;
      delete p;
    }
      return x;
        
        
}
