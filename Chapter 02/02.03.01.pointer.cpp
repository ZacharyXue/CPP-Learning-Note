# include <iostream>

int main()
{
    int val = 12;
    int *p = &val;  //一定一定要记住在指针赋值的时候要的到底是对象的字面值还是其地址值
    std::cout << *p << std::endl;
    *p = 10;  // * 在这里叫解引用符，可以用于访问指针指向的对象
    std::cout << *p << std::endl;
    int &rval = *p;
    std::cout << rval << std::endl;

    void *pv = &val;
    // void *指针可以存放任意对象的地址，
    // 但是不能直接操作该指针所指的对象。
    // std::cout << *pv << std::endl;
    double val2 = 3.14;
    pv = &val2;
    return 0;
}
// 作者建议在使用时要初始化所有指针，
// 尽量在定义对象后再定义指向他的指针，
// 如果实在不知道指针指向的话定义为0或者nullptr.