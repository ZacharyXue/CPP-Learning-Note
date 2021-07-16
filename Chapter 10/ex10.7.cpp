#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<int> l_i;
    vector<int> v_i;
    int i;

    while(cin >> i)
    {
        l_i.push_back(i);
    }

    cout << "done" << endl;

    auto it = back_inserter(v_i);

    copy(l_i.cbegin(),l_i.cend(),it);
    // 这一步官方给的原代码是直接使用vector，但是因为vector为空，拷贝操作不能完成
    // 这又回到书中一直强调的一个注意事项：
    // 泛型算法并不会检查查写是否安全，所以不会在vector为空的时候去使用push_back，
    // 所以这里修改便要使用到插入迭代器，这里我使用的是back_inserter()
    
    for (const auto j : v_i)
    {
        cout << j << endl;
    }
    return 0;
}