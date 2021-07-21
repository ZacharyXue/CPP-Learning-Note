#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str{"hello, my name is , and ..."};
    auto rcomma = find(str.crbegin(),str.crend(),',');
    cout << string(rcomma.base(),str.cend()) << endl;
    return 0;
}