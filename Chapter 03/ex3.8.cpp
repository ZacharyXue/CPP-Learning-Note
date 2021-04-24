# include <iostream>

using namespace std;

int main(){
    string s("Hello word!!!");

    decltype(s.size()) i = 0;
    while(i < s.size())
    {
        s[i] = 'X';
        ++i;
    }
    cout<<s<<endl;
    return 0;
}