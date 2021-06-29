#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin,str);
    int cnt_ab = 0, cnt_ac = 0;
    for(auto c = str.begin(); c < str.end(); ++c)
    {
        if(((*c) == 'a') && (++c != str.end()))
        {
            switch (*c)
            {
            case 'b':
                ++cnt_ab;
                break;
            
            case 'c':
                ++ cnt_ac;
            }
        }
    }
    cout << "cnt_ab = " << cnt_ab << ", cnt_ac = " << cnt_ac << "." <<endl;
    return 0;
}