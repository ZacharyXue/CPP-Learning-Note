#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,4,5,1,2,3,4};
    cout << "Before sort: " << endl;
    for (const auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    
    sort(vec.begin(),vec.end());
    cout << "After sort: " << endl;
    for (const auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    auto end_unique = unique(vec.begin(),vec.end());
    cout << "After unique: " << endl;
    for (const auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    vec.erase(end_unique,vec.end());
    cout << "After erase: " << endl;
    for (const auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}