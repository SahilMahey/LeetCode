//I was not able to figure out this one. First, I saw the solution then was able to do it. Now I know importance of XOR. Will never forget this.


#include <iostream>

int main()
{
    int arr[5] = {1,2,3,4,4};

    int ans = 0;

    for (int i = 0; i < 5; i ++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < 5; i ++)
    {
        ans = ans ^ i;
    }

    std::cout << ans;
}