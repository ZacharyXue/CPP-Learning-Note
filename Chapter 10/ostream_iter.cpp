#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ostream_iterator<int> out_iter(cout, ",");
    vector<int> vec{1,2,3,4,5,6};
    copy(vec.begin(),vec.end(),out_iter);
    cout << endl;
    return 0;
}