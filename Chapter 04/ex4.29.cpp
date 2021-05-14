#include <iostream>

using namespace std;

int main()
{
    int x[10];
    int *p = x;
    cout<< "sizeof(x)/sizeof(*x) = " << sizeof(x)/sizeof(*x) << endl;
    cout<< "sizeof(p)/sizeof(*p) = " << sizeof(p)/sizeof(*p) << endl;
    return 0;
}
// 输出结果第一个为10，第二个为1
// 第一个为10是因为x为数组类型，*x为int类型
// 第二个为一是因为p是指针类型，*p指向x，
// 这里也可以理解为指针，故输出为1.

