#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> vec;
    list<int> lst;
    for(int i = 0; i < 10; ++i)
    {
        vec.push_back(i);
        lst.push_back(i);
    }
    vector<int> vec2;
    vec2.assign(lst.begin(),lst.end());
    if(vec == vec2)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}