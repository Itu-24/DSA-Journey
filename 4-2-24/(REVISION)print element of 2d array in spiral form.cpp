
void printspiral(vector<vector<int>> arr, int r, int c)
{
    int n = 0;
    int i = 0, j = 0;
    int right = c;
    int bottom = r;
    int top = 0, left = 0;

    while (n < 25)

    {

        while (j < right)
        {

            cout << arr[i][j] << " ";
            j++;
            n++;
        }
        j = j - 1;
        i = i + 1;
        while (i < bottom)
        {
            cout << arr[i][j] << " ";
            i++;
            n++;
        }

        i = i - 1;
        j = j - 1;
        while (j >= left)
        {
            cout << arr[i][j] << " ";
            j--;
            n++;
        }
        j = j + 1;
        i = i - 1;
        while (i > top)
        {

            cout << arr[i][j] << " ";
            i--;
            n++;
        }
        j = j + 1;
        i = i + 1;
        right--;
        bottom--;
        top++;
        left++;
    }
}
