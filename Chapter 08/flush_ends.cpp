#include <iostream>

using namespace std;

int main()
{
    cout << "1. hello!" << endl;
    cout << "2. hello!" << flush;
    cout << "3. hello!" << ends;
    return 0;
}
// endl: 换行并刷新缓冲区
// flush: 刷新缓冲区，但不输出任何额外的字符
// ends: 向缓冲区插入一个空字符，然后刷新缓冲区