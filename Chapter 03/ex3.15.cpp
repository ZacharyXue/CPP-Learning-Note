# include <iostream>
# include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> string_list;
    string s("hello");
    for (int i = 0; i < 5; i++)
    {
        cin>>s;
        string_list.push_back(s);
    }
    cout<<"The 3rd element of the vector is "<< string_list[2]<<endl;
    return 0;
}