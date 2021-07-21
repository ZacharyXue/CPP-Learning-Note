#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    istream_iterator<int> in_iter(cin),eof;
    vector<int> vec_int(in_iter,eof);
    sort(vec_int.begin(),vec_int.end());
    ostream_iterator<int> out_iter(cout," ");
    copy(vec_int.begin(),vec_int.end(),out_iter);
    cout << endl;
    return 0;
}