#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define LEN 5

using namespace std;

bool isLonger(const string &str)
{
    return str.size() > LEN;
}

int main()
{
    vector<string> vec_str{"hello??","hello","hell"};
    auto end = partition(vec_str.begin(),vec_str.end(),isLonger);
    for(auto curr = vec_str.cbegin();curr < end ; ++curr )
    {
        cout << *curr << endl;
        ++curr;
    }

    return 0;
}