#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5};
    fill_n(vec.begin(),vec.size(),1);
    for(const auto i : vec)
    {
        cout << i << endl;
    }
    return 0;
}