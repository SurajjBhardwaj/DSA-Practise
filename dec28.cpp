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