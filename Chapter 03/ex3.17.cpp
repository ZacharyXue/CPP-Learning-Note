#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> str_list;
    string s("hello");
    for (int i = 0; i < 5; i++)
    {
        cin>>s;
        str_list.push_back(s);
    }
    for(auto &i:str_list){
        i[0] = toupper(i[0]);
    }
    for(auto i:str_list){
        cout<<i<<endl;
    }
    return 0;
}