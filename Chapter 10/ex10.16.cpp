#include <iostream>
#include <string>   
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<string> words { "hello", "my name is","today is"};
    vector<string>::size_type sz = 8;
    stable_sort(words.begin(),words.end(),
        [](const string &a,const string &b)
        {
            return a.size() < b.size();
        });
    auto wc = find_if(words.begin(),words.end(),
        [sz](const string &str)
        {
            return str.size() >= sz;
        });
    for_each(wc,words.end(),
        [](const string &str)
        {
            cout << str << endl;
        });
    return 0;
}