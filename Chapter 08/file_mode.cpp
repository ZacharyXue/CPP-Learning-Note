#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char ** argv)
{
    ofstream out;
    out.open(argv[1],ios_base::app);

    if (out)
    {
        for(int i = 2; i < argc; ++i)
        {
            out << argv[i] << endl;
        }
    } 
    out.close();

    string str;
    ifstream input(argv[1]);
    if (input)
    {
        while(getline(input,str))
        {
            cout << str << endl;
        }
    }
    input.close();

    return 0;
}