# include <iostream>

int main()
{
    int i = 2;
    const int &r1 = i;
    std::cout<<"r1 = "<<r1<<std::endl;
    // 在初始化常量引用时允许用任意表达式作为初始值，
    // 只要该表达式的结果能转换成引用的类型即可.
    const int &r2 = 3;
    std::cout<<"r2 = "<<r2<<std::endl;
    const int &r3 = r1 * 2;
    std::cout<<"r3 = "<<r3<<std::endl;
    // int &r4 = r1 * 2;
    return 0;
}