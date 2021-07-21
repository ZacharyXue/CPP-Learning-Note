#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<int> lst {1,2,3,4};
    list<int> lst1{5}, lst2{5};

    copy(lst.cbegin(),lst.cend(),front_inserter(lst1));
    copy(lst.cbegin(),lst.cend(),inserter(lst2,lst2.begin()));

    auto it1 = lst1.begin();
    auto it2 = lst2.begin();
    for (size_t i = 0; i < lst1.size(); ++i )
    {
        cout << "1: " << *(it1 ++) << ", 2: " <<*(it2 ++) << endl;
    }
    return 0;
}