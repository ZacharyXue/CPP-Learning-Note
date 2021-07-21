#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    ifstream in_stream(argv[1]);
    istream_iterator<string> in_iter(in_stream), eof;
    vector<string> strs(in_iter,eof);
    ostream_iterator<string> out_iter(cout," \n");
    copy(strs.begin(),strs.end(),out_iter);
    cout << endl;
    return 0;
}