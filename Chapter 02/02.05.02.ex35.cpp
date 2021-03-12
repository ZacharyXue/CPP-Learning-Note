# include <iostream>

int main()
{
    const int i = 5;
    auto j = i;
    j = 6;
    std::cout<<"auto j = i; j = "<<j<<std::endl;
    const auto &k = i;
    // k = 2;
    std::cout<<"const auto &k = i; k = "<<k<<std::endl;
    auto *p = &i;
    std::cout<<"auto *p = i;p = "<<p<<std::endl;
    return 0;
}
// 编译器推断出来的auto类型有时候和初始值的类型并不完全一样，
// 编译器会适当地改变结果类型使其更符合初始化规则.
// auto一般会忽略掉顶层const，同时底层const则会保留下来