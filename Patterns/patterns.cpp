#include<iostream>
int main()
{
    std::cout<<"Pattern 1"<<std::endl;
    std::cout<<std::endl;
     int i;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <=4; j++ )
        {
            std::cout<<j;
        }
        std::cout<<std::endl;
     }
     std::cout<<std::endl;
     
     std::cout<<"Pattern 2"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <=4; j++ )
        {
            std::cout<< 4 - j +1;
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;
     
     std::cout<<"Pattern 3"<<std::endl;
     std::cout<<std::endl;
     int count = 1;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <=4; j++ )
        {
            std::cout<< count;
            count++;
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 4"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <=i; j++ )
        {
            std::cout<< "*";
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 5"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <=i; j++ )
        {
            std::cout<< i;
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 6"<<std::endl;
     std::cout<<std::endl;
     count = 1;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <=i; j++ )
        {
            std::cout<< count;
            count++;
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 7"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <=i; j++ )
        {
            std::cout<<i+j-1;
            count++;
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 8"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <=i; j++ )
        {
            std::cout<<i+1-j;
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 9"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <=i; j++ )
        {
            char ch = 'A' + i - 1;
            std::cout<<ch;
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 10"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <=i; j++ )
        {
            char ch = 'A' + i + j - 2;
            std::cout<<ch;
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 10"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <=i; j++ )
        {
            char ch = 'A' + 4 - i + j - 1;
            std::cout<<ch;
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 11"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <=i; j++ )
        {
            char ch = 'A' + 4 - i + j - 1;
            std::cout<<ch;
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 12"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int spaces = 1; spaces <= 4 - i; spaces++)
        {
            std::cout << " ";
        }


        for (int j = 1 ; j <=i; j++ )
        {
            
            std::cout<<"*";
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 13"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1 ; j <= 4 - i + 1; j++ )
        {
            
            std::cout<<"*";
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 14"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int spaces = 1; spaces <= i - 1; spaces++)
        {
            std::cout << " ";
        }
        for (int j = 1 ; j <= 4 - i + 1; j++ )
        {
            
            std::cout<<"*";
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 15"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int spaces = 1; spaces <= i - 1; spaces++)
        {
            std::cout << " ";
        }
        for (int j = 1 ; j <= 4 - i + 1; j++ )
        {
            
            std::cout<<i + j - 1;
            
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 16"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 4; i++)
     {
        for (int spaces = 1; spaces <= 4 - i; spaces++)
        {
            std::cout << " ";
        }
        for (int j = 1 ; j <= i; j++ )
        {
            
            std::cout<<j;
            
        }
        for (int k = 1; k <= i - 1; k ++)
        {
            std::cout << i  - k;
        }
        std::cout<<std::endl;

     }
     std::cout<<std::endl;

     std::cout<<"Pattern 17"<<std::endl;
     std::cout<<std::endl;
     for (int i = 1; i <= 5; i++)
     {
        for (int j = 1 ; j <= 5 - i + 1; j++ )
        {
            
            std::cout<<j;
            
        }
        for (int k = 1; k <= i - 1; k ++)
        {
            std::cout << "*";
        }
        for (int m = 1 ; m <= i - 1; m++ )
        {
            
            std::cout<<"*";
            
        }
        for (int n = i ; n <= 5; n++ )
        {
            
            std::cout<<5- n + 1;
            
        }

        std::cout<<std::endl;

     }
     std::cout<<std::endl;
    return 0;

}