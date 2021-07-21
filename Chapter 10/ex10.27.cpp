#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vec {1,2,3,4,3,1};
    list<int> lst;

    sort(vec.begin(),vec.end());
    unique_copy(vec.begin(),vec.end(),back_inserter(lst));
    for (const auto i : lst)
    {
        cout << i << endl;
    }
    return 0;
}