// 用for循环替换字符串中元素
# include <iostream>

using namespace std;

int main(){
    string s("Hello world!");
    for (auto &c:s)
    {
        c = 'X';
    }
    cout<<s<<endl;
    return 0;
}
// 这里自己掌握的不是很好，假如是`char c:s`时候，
// c为一个const char *,指针指向对象可以变，但是指向对象是const
// 后来按照书中改为`auto &c:s`后就可以使用，
// 这里使用引用来进行字符串值的修改