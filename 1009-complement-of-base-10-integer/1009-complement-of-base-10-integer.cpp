class Solution {
public:
    int bitwiseComplement(int n) {
        int answer = 0;
        int i = 0;
        if (n==0)
            return 1;
        while (n!=0)
        {
            answer = answer + (~(n)&1)*pow(2,i);
            i = i + 1;
            n= n>>1;
        }
         return (answer);
    }
};

// This was my previous solution. It did not worked out as 127 cases passed but 128 case was what if the number is 0. I can make a if condition but it will just increase the time complexity or memory consumption.

// int answer = 0;
//         int i = 0;
//         while (n!=0)
//         {
//             answer = answer + (~(n)&1)*pow(2,i);
//             i = i + 1;
//             n= n>>1;
//         }
//          return (answer);
//     }