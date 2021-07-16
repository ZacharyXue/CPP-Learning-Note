#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec {1,2,3,3,1,4,5,4};
    cout << count(vec.cbegin(),vec.cend(),3) << endl;
    return 0;
}