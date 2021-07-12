#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec1;
    vector<string> vec2;
    string str;
    for(int i = 0; i < 10; ++i)
    {
        str = "id: " + to_string(i);
        vec1.push_back(str);
    }
    for(int i = 10; i < 20; ++i)
    {
        str = "id: " + to_string(i);
        vec2.push_back(str);
    }
    swap(vec1,vec2);
    for (auto &s:vec1)
    {
        cout << s << endl;
    }
    return 0;
}