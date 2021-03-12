# include <iostream>

int main()
{
    int a = 3, b  = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    std::cout<<"c = "<<c<<std::endl;
    ++c;
    std::cout<<"c = "<<c<<std::endl;

    std::cout<<"d = "<<d<<std::endl;
    ++d;
    std::cout<<"d = "<<d<<std::endl;
    return 0;
}
// decltype（（variable））（注意是双层括号）的结果永远是引用，
// 而decltype（variable）结果只有当variable本身就是一个引用时才是引用。
// 
// 如果decltype使用的是一个不加括号的变量，则得到的结果就是该变量的类型；
// 如果给变量加上了一层或多层括号，编译器就会把它当成是一个表达式