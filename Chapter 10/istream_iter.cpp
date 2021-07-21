#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    istream_iterator<int> in_iter(cin), eof;
    vector<int> vec(in_iter,eof);
    cout << "the value of the vector is :" << endl;
    for_each(vec.cbegin(),vec.cend(),
        [](int i)
        {
            cout << i << " ";
        });
    cout << endl;
    return 0;
}