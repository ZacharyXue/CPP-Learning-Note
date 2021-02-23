# include <iostream>

int main()
{
    // 声明是让程序知道名字
    // 定义负责创建和名字关联的实体
    // 变量可以多次声明，但是只能定义一次

    // extern关键字可以声明一个变量但是不定义他
    extern int i;
    int j;
    // 当尝试输出i的时候报错：
    // undefined reference to `i'
    // std::cout<<"i: "<<i<<std::endl;
    std::cout<<", j: "<<j<<std::endl;
    return 0;
}