#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> str_list(10,"hello");
    for (auto i = str_list.begin(); i < str_list.end(); i++)
    {
        if(!i->empty())
        {
            (*i)[0] = toupper((*i)[0]);
        }
        cout << *i << endl;
    }
    return 0;
}
// 开始的时候给i赋值为str_list.cbegin()，
// 然后没法修改字符串首字母还纳闷呢……