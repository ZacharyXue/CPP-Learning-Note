#include <deque>
#include <list>
#include <iostream>

using namespace std;

int main()
{
    deque<int> dq;
    list<deque<int>> dq_list;
    for (int i = 1; i < 51; ++ i)
    {
        dq.push_front(i);
        if ( i % 10 == 0)
        {
            dq_list.push_back(dq);
            dq.clear();
        }
    }
    for ( auto &d : dq_list)
    {
        for (auto num : d)
        {
            cout << num << ' ';
        }
        cout << endl;
    }
    return 0;
}