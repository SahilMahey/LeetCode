//this was a good example of how to create another variable whihc can prevent us from keeping one part from the binary number whihc is neccessary from the ouputs

class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;
        if (m==0)
        {
            return 1;
        }
        
        while (m!=0)
        {
            mask = (mask <<1) | 1;
            m = m >> 1;
        }
         int ans = ((~n) & mask);
        return ans;
    }
};

// This was my previous solution. this did not worked as it was faster than only 8.96% solution.

// int answer = 0;
//         int i = 0;
           // if (n==0)
            //return 1;
//         while (n!=0)
//         {
//             answer = answer + (~(n)&1)*pow(2,i);
//             i = i + 1;
//             n= n>>1;
//         }
//          return (answer);
//     }