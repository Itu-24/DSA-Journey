// QUES = https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int>countchar;
		    queue<int>q;
		    for(int i=0;i<A.size();i++){
		        char ch=A[i];
		        
		        countchar[ch]++;
		        
		        if(countchar[ch]==1)
		        {
		            q.push(ch);
		            
		        }
		        while(q.size()){
		            if(countchar[q.front()]==1){
		              //  nonrepeating char
		                A[i]=q.front();
		                break;
		            }else{
		              //  repeating char
		                q.pop();
		            }
		        }
		      //  no non repeating char available 
		        if(q.size()==0){
		            A[i]='#';
		        }
		    }
		    return A;
		}

};


// 2nd approach
class Solution {
void updatequeue(queue<int> &q, vector<int> &arr)
{

    while (q.size())
    {
        char ch = q.front();
        int i = ch - 'a';
        if (arr[i]>=2)
        {
       
            q.pop();
        }
        else
        {
            break;
        }
    }
}
void updatestring(string &A, queue<int> &q, int index)
{
    int i = index;

    if (q.size())
    {

        A[i] = q.front();
    }
    else
    {

        A[i] = '#';
    }
}
	public:
		string FirstNonRepeating(string A){
		    // Code here
	vector<int> arr(26, 0);
    queue<int> q;
    for (int i = 0; i < A.size(); i++)
    {
        char ch = A[i];
        int index = ch - 'a';

        if (arr[index])
        {
                arr[index]++;
            
            if (q.front() == ch)
            {
                // this can give run time error 
                // q.pop();
                updatequeue(q, arr);

                updatestring(A, q, i);
            }
            else
            {

               updatestring(A, q, i);
            }
        }
        else
        {
            arr[index]++;
            q.push(ch);

            A[i] = q.front();
        }
    }

    return A;
		    
		}

};
