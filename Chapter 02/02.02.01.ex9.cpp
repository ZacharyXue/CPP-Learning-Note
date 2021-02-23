#include <iostream>

int main()
{
    // cin将键盘读入值赋给还未定义的变量
    // std::cin >> int value;

    // 当使用列表初始化时初始值存在丢失信息的风险时
    // 编译器将报错，下面这种情况便会报错，但是传统方法便不会
    // int value = {3.14};
    // int value{3.14};
    // int value = 3.14;
    int value(3.14);
    std::cout << value <<std::endl;

    // 这里初始化a的时候b已经被当作已经初始化
    // 在Python中这是允许的
    // double a = b =3.14;

    // 在不同情况下变量的默认初始化结果不同，
    // 所以书中建议初始化每一个内置类型的变量。
    return 0;
}