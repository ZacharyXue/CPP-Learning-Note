#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    for (int i = 0; i < 10; ++i)
    {
        vec.push_back(i);
    }
    int j;
    cin >> j;
    for ( auto p = vec.begin(); p < vec.end(); ++p)
    {
        if (*p == j)
        {
            cout << "find it!!!" << endl;
            return 0;
        }
    }
    cout << "failed to find the number" << endl;
    return 0;
}