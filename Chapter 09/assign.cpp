#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
    char c1[]("hello");
    char c2[] (" world");
    list<const char*> lst;
    lst.push_back(c1);
    lst.push_back(c2);
    vector<string> vec;
    vec.assign(lst.begin(),lst.end());

    for (auto & s : vec)
    {
        cout << s;
    }
    cout << endl;
    return 0;
}