#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> num_vec(10,1);
    for(auto i = num_vec.begin();i != num_vec.end();++i)
    {
        (*i) = 2*(*i);
    }
    for(auto i = num_vec.cbegin();i != num_vec.cend();i++)
    {
        cout<<(*i)<<endl;
    }
    return 0;
}