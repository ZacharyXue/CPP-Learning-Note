// 练习2.18：编写代码分别更改指针的值以及指针所指对象的值。

# include <iostream>

int main()
{
    int a = 3, b = 4;
    int *p = &a;
    std::cout<<"The value of *p = "<<*p<<std::endl;
    *p = 5;
    std::cout<<"The value of *p = "<<*p<<std::endl;
    p = &b;
    std::cout<<"The value of *p = "<<*p<<std::endl;
    return 0;
}