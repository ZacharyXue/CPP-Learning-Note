#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    for(int i = 1; i < argc; ++i)
    {
        cout << argv[i] << endl;
    }
    return 0;
}
// 当使用argv中的实参时，一定要记得可选的实参从argv[1]开始；
// argv[0]保存程序的名字，而非用户输入。