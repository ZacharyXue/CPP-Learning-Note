#include <iostream>
#include <string>

using namespace std;

const string & shorterString(const string & str1, const string & str2)
{
    return str1.size() > str2.size() ? str1 : str2;
}

string & shorterString(string & str1, string & str2)
{
    const string & str = shorterString(const_cast<const string&>(str1),const_cast<const string&>(str2));
    return const_cast<string &>(str);
}

int main()
{
    string str1("hello");
    string str2("waseda");
    cout << shorterString(str1,str2) << endl;
    return 0;
}