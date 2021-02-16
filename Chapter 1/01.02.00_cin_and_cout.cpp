# include <iostream>

int main()
{
    std::cout<<"Enter two numbers:"<<std::endl;
    int v1 = 0, v2 = 0;
    std::cin>>v1>>v2;
    std::cout<<"The sum of "<<v1<<" and "<<v2
    <<" is " << v1 + v2<<std::endl;

    return 0;
}
/*
 * 好久不用C++忘了很多，在Linux中使用时可以用"g++ 01.02.input_and_output.cpp"获得相应
 * 的可执行文件，然后执行a.out(因为这里没有指定文件名)便可以运行程序编译结果了。
 *
 * 标准输入输出除了常用的cin、cout，还有cerr和clog。
 * 
 * "<<"是输出运算符，其接受两个运算对象，左侧为一个ostream对象，右侧为需要打印的值。该运算符的作用
 * 就是将左侧的值写到右侧的ostream对象中。
 * 在第五行中使用了两个<<，第一个的运算结果时第二个运算符的左侧对象。
 * 
 * 与输出运算符相对应的，">>"（输入运算符）是将istream作为左侧运算对象，然后istream中的数据读入到
 * 右侧运算对象中。
 * 
 * 简单理解上面两个运算符，<<是将右侧对象值传入到ostream，>>是将istream存储值传入右侧变量。
 */
// 像上面使用多行注释是作者不提倡的，因为在多行注释中再出现相应的符号可能会造成bug，而单行注释则没有这个问题