#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct PersonInfo
{
    string name;
    vector<string> phones;
};


int main()
{
    string line, word;
    vector<PersonInfo> people;

    while (getline(cin,line))
    {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while(record >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    
    for (auto &info : people)
    {
        cout << info.name << ": " << info.phones[0] << endl;
    }
    return 0;
}