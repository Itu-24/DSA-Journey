
// By using recursion
int power(int n, int e)
{
    // base case
    if (e == 0)
    {
        return 1;
    }
    else if (e == 1)
    {
        return n;
    }

    int ans = 1;
    if (e % 2 == 0)
    {

        int inside = n * n;
        ans = power(inside, e / 2);
    }
    else
    {
        int inside = n * n;
        ans = power(inside, (e - 1) / 2) * power(n, 1);
    }

    return ans;
}

// By using while loop 

int powerUsingWhile(int n, int e)
{
    if(e==0){
        return 1;
    }
    int ans = n;
    int rem = 1;
    while (e != 1)
    {
        if (e % 2 == 0)
        {
            ans = ans * ans;
            // cout << ans << " ";
            e = e / 2;
        }
        else
        {
            rem = rem * ans;
            ans = ans * ans;
            // cout << ans << " ";
            e = (e - 1) / 2;
        }
    }
    ans = ans * rem;
    return ans;
}
