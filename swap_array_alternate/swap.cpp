//Just trying to understand arrays better

#include <iostream>

int main()
{
    int arr[6] = {1,2,3,4,5,6};

    int start = 0;
    int alt = 1;

    while (alt < 6)
    {
        std::swap (arr[start],arr[alt]);
        start = start + 2;
        alt = alt + 2;

    }
    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i];
    }

}