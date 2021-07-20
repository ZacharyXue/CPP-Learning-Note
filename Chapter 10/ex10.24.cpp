#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool isLager(int i, size_t len)
{
    if ( i > len)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str;
    getline(cin,str);
    auto str_len = str.size();
    vector <int> vec_int {1,2,5,10,30,50,100};
    auto res = find_if(vec_int.begin(),vec_int.end(),bind(isLager,_1,str_len));
    cout << * res << endl;
    return 0;
}