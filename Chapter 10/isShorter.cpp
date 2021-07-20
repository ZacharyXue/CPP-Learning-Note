#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isShorter(const string &s1, const string &s2);

int main()
{
    vector<string> str {"hello","!!!", "my","name", "is"};
    for ( const string &s : str)
    {
        cout << s << " ";
    }
    cout << endl;
    sort(str.begin(),str.end(),isShorter);
    for ( const string &s : str)
    {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}