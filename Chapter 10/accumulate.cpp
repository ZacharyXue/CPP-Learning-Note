#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int main()
{
    vector<int> vec {1,2,3,4,5,6};
    cout << accumulate(vec.cbegin(),vec.cend(),0) << endl;
    vector<string> str {"hello ", "world","!!!"};
    cout << accumulate(str.cbegin(),str.cend(),string("")) << endl;
    return 0;
}