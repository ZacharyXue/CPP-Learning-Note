# include <iostream>

int main()
{
    int i = 42;
    int *p = &i;
    *p = *p * *p;
    std::cout<<"i = "<<i<<std::endl;
    std::cout<<"*p = "<<*p<<std::endl;
    return 0;
}