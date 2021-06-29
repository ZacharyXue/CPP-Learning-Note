#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int isVowel(char c);
int main()
{
    string str;
    cout<< " Please enter a string:" << endl;
    getline(cin,str);
    int cnt = 0;
    for (auto c : str)
    {
        if(isVowel(tolower(c)))
        {
            ++cnt;
        }
    }
    cout << "The number of vowel is " << cnt << endl;
}

int isVowel(char c)
{
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}