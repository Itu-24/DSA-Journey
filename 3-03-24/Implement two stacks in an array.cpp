// Question= https://www.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article


class twoStacks
{
 
    int *arr;
    int i;
    int j;
    int size;
    
    public:
    
    twoStacks(int n=100)
    {
        this->size=n;
        i=-1;
        j=n;
        arr=new int[n];
       
        
    }
 
    //Function to push an integer into the stack1.
    void push1(int x)
    {
        if((i+1)<j){
            i++;
            arr[i]=x;
        }
        
        
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
            
        if(i<(j-1)){
          j--;
          arr[j]=x;
          
        }
       
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(i>=0){
            i--;
            return arr[i+1];
        }else{
            return -1;
        }
        
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
       if(j<size){
           j++;
           return arr[j-1];
       }else{
           return -1;
       }
    }
};
