#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main(int argc, char ** argv)
{
    vector<string> str_vec;
    string str;
    
    ifstream input(argv[1]);
    if (input)
    {
        while(input >> str)
        {
            cout << str << endl;
            str_vec.push_back(str);        
        }
    }
    input.close();
    for (auto &s : str_vec)
    {
        cout << s << endl;
    }
    return 0;
}