#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec {1,2,3,4,5};
    int bias = 1;
    for_each(vec.begin(),vec.end(),
        [&bias](int &i){ i += bias; });
    for(const auto i: vec)
    {
        cout << i << endl;
    }
    return 0;
}