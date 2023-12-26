class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        int mid  = (start + end)/2;
        
        while (start<= end)
        {
            if (mid != 0 && (mid == x/mid))
            {
                return mid;
            }
            else if (mid != 0 && mid > x/mid) 
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
            mid  = start + ((end-start)/2);
        }
        
        return start-1;
    }
};