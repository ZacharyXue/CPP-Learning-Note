# include <iostream>

int main()
{
    // 现在使用类别别名有两种方式：
    // 传统的使用 typedef
    // C++11中引入using（别名声明）
    // typedef double wages;
    using wages = double;
    wages a = 1.5;
    std::cout<< a <<std::endl;
    return 0;
}