#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vec1;
    for (int i = 0; i < 10; ++i)
    {
        vec1.push_back(i);
    }
    vector<int> vec2(vec1.begin(),vec1.begin()+5);
    for ( auto i : vec2)
    {
        cout << i <<endl;
    }
    return 0;
}