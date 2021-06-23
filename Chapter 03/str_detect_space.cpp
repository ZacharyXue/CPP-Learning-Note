#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void)
{
    string line;
    while(getline(cin,line))
    {
        int flag = 1;
        if (!line.empty())
        {
            for(auto c : line)
            {
                if(isspace(c) && flag)
                {
                    cout<<"The string contains space."<<endl;
                    flag = 0;
                }
            }
            if(flag)
            {
                cout<<"The string doesn't contain space."<<endl;
            }
        }
        
    }
    cout<<"exit."<<endl;
    return 0;
}