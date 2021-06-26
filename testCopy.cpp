#include<iostream>

int main()
{
    #ifdef DEBUG
        std::cout<<"test for linux!"<<std::endl;
    #endif
    return 0;
}
