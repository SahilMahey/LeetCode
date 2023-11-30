//This question is from code studio

// I learnt here that xoring two similar inputs will give 0 while xoring an input with 0 will give you the input.

#include <iostream>

int main() {
    // Write C++ code here
  
    int arr[7] = {1,2,8,5,1,2,8};
    int ans = 0;
    for (int i = 0; i < 7; i ++ )
    {
        ans = ans ^ arr[i];
        
    }
     std::cout<< ans;
    return 0;
}