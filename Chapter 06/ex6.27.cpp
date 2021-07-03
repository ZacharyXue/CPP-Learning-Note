#include <iostream>
#include <initializer_list>

using namespace std;
int sum(initializer_list<int> arg);
int main()
{
    cout << sum({1,2,3,4,5}) << endl;
    return 0;
}
int sum(initializer_list<int> arg)
{
    int res = 0;
    for(auto i : arg)
    {
        res += i;
    }
    return res;
}