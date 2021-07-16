#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    list<string> str {"Hello world", "Hello world","hello world","helloworld"};
    cout << count(str.cbegin(),str.cend(),"Hello world")<< endl;
    return 0;
}