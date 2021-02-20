# include <iostream>
# include "Sales_item.h"

int main()
{
    Sales_item item1,item2;
    std::cin >> item1 >> item2;
    std::cout<< item1 + item2 << std::endl;
    return 0;
}
// 在这里主要是调用官方给的Sales_item.h来实现类的初始化。
// 在这一篇作者介绍了利用文件重定向来代替使用键盘反复输入。
// 
// 在相应的shell文件中使用了“./a.out<01.05.ex20.txt >01.05.ex20_res.txt“
// 来进行重定向，注意格式，开始的时候自己就输错了。