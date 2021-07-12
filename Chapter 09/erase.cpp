#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lst{1,2,3,4,5,6};
    auto it = lst.begin();
    while (it != lst.end())
    {
        if((*it) % 2)
        {
            it = lst.erase(it);
        }
        else
        {
            ++it;
        }
    }
    for (auto &i:lst)
    {
        cout << i << endl;
    }
    return 0;
}