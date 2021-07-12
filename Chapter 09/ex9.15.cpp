#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1;
    vector<int> vec2;
    for (int i = 0; i < 10; ++i)
    {
        vec1.push_back(i);
        vec2.push_back(i);
    }
    if (vec1 == vec2)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    vec2[2] = 3;
    if (vec1 == vec2)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}