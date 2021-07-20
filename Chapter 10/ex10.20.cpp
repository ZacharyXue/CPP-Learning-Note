#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec_int {1,2,3,4,5,6,6,3,6,7,10};
    int thr = 5;
    auto i = count_if(vec_int.begin(),vec_int.end(),
        [thr](const int i) -> bool
        {
            if (i > thr)
            {
                return true;
            }
            else
            {
                return false;
            }
        });
    for ( auto i : vec_int)
    {
        cout << i << endl;
    }
    cout << endl;
    cout << "the count equal to " << i << endl;
    return 0;
}