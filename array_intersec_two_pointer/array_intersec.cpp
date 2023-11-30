#include <iostream>
#include <vector>
int main()
{
    int arr1[3] = {1, 2, 3};
    int arr2[2] = {3,4};
    std::vector<int> arr;
    int i = 0;
    int j = 0;
    while (i<3 && j <2)
    {
        if (arr1[i]==arr2[j])
        {
            arr.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for (int elem : arr)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}