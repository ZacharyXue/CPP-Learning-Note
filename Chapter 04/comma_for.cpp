#include <iostream>

using namespace std;

int main()
{
    int num_list[10];
    int cnt = 9;
    for (int i = 0; i < 10; --cnt, ++i)
    {
        num_list[i] = cnt;
    }
    for (int i : num_list)
    {
        cout << i << endl;
    }
    return 0;
}