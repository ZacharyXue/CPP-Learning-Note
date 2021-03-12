// 引用为对象起了另一个名字。
// 事实上这里说的引用是左引用。
// 
// 引用类型初始化后便一直和初始值对象绑定，
// 因为无法令引用重新绑定到另一个对象，
// 因此引用必须初始化。
// 
// 引用只能绑定在对象上，不能与字面值或者某个表达式的计算结果绑定。

# include <iostream>

int main()
{
    // int value = 2;
    // int &refValue = value;
    int value = 2,&refValue = value;
    ++refValue;
    std::cout<<refValue<<std::endl;
    return 0;
}