#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char ** argv)
{
    ifstream input(argv[1]);
    vector<string> str_list;
    string str;
    while (getline(input,str))
    {
        str_list.push_back(str);
    }
    input.close();
    for(auto &s : str_list)
    {
        cout << s << endl;
    }
    return 0;
}