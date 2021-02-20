# include <iostream>

int main()
{
    int sum = 0;
    std::cout<<"Please input the number"<<std::endl;
    int value;
    while(std::cin>>value)
    {
        sum += value;
    }
    std::cout<< " The sum of inputs is " << sum <<std::endl;
    return 0;
}
// 在while的循环条件中，使用istream对象作为条件，
// 当输入流是有效的时候继续循环，遇到失败后循环结束。
// 而输入流的结束要么是输入文件结束符要么时输入无效（如当cin输入对象为int但输入不为整数）
// 
// 关于在键盘中输入文件结束符不同系统之间有所差别，
// 自己实验在Linux中输入 Crl + D 或者 Esc都是可以的。