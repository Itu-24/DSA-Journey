// passed 7/11 test case (runtime error )
// Question - https://www.codingninjas.com/studio/problems/n-stacks-in-an-array_1164271?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio11thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio11thfeb

#include <bits/stdc++.h> 
class NStack
{
    int *arr;
    int **matrix;
    int size;
    int fill;

    int findindex(int arr[],int size){
         for(int i=0;i<size;i++){
                if(arr[i]==-1){
                    return i;
                    
                }
            }
            return -1;
    }
    void updatematrix(int **matrix,int col,int myrow,int index){


              for(int i=0;i<col;i++){
                  if(matrix[myrow][i]==-1){
                      matrix[myrow][i]=index;
                      break;
                  }
              }
    }
    bool ispossible(int **matrix,int c,int myrow){
        for(int i=0;i<c;i++){
            if(matrix[myrow][i]!=-1){
                return true;
            }
        }
        return false;
    }
    int popindex(int **matrix,int c,int myrow){
           for(int i=c-1;i>=0;i--){
              if(matrix[myrow][i]!=-1){
                int store = matrix[myrow][i];
                 matrix[myrow][i]=-1;
                 return store;
               }
            }
            return -1;
    }
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        arr=new int[S];
        size=S;
        for(int i=0;i<size;i++){
             arr[i]=-1;
        }

        matrix=new int*[N];

        for(int i=0;i<N;i++){
            matrix[i]=new int[S];
            
        }

        for(int i=0;i<N;i++){
            for(int j=0;j<S;j++){
                matrix[i][j]=-1;
            }
        }
        fill=0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        if(fill<=size){
            int index=findindex(arr,size);
            
            arr[index]=x;
            fill++;
            updatematrix(matrix,size,m-1,index);
            return true;

        }else{
            return false;
        }
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
      
            int index=popindex(matrix,size,m-1);
            if(index!=-1){
               int store=arr[index];
               arr[index]=-1;
               fill--;
               return store;
            }else{

               return -1;
            }
         

       
    }
};
