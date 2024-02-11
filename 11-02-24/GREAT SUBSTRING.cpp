
 long long count(string S, int s, int e)
    {
        long long cnt = 0;
        for (int i = s; i <= e; i++)
        {
            if (S[i] == '1')
            {
                cnt++;
            }
        }
        return cnt;

        //  if(cnt>(e-s+1)/2){
        //         return true;
        //      }
        // return false;
    }

    long long update(string S, int s, int e, long long &a)
    {
 

        if (s == 0)
        {
            return a;
        }

        if (S[s - 1] == '1')
        {
            a--;
        }
        if (S[e] == '1')
        {
            a++;
        }
        // 11101101001
        return a;
    }
    bool check(long long num, int size)
    {
        if (num > size / 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    long long greatCount(int N, string S)
    {
        // code here

        int size = N;
        long long ans = 0;
        int z = 0;
        while (size > 0)
        {
            //   cout<<size<<" ";
            long long a = count(S, 0, size - 1);
            for (int i = 0; i < N - size + 1; i++)
            {
                long long num = update(S, i, i + size - 1, a);

                if (check(num, size))
                {
                    if (size == 1)
                    {
                        // cout << i << " ";
                    }
                    ans++;
                }
            }
            size--;
            // z++;
        }
        return ans;
        // return z;
    }
