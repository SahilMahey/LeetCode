class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int mid = (start + end )/2;
        bool found = true;
        while (found){
        if ((arr[mid-1] < arr[mid]) && (arr[mid+1] < arr[mid]))
            {
                found = false;
            }
        else
            {
                if (arr[mid+1] > arr[mid]  )
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid;
                }
            }
        mid = (start + end )/2;
        }
        return mid;
        
    }
};