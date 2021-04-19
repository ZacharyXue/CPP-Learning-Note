# include <iostream>

using std::getline;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main(){
    string res;
    string input = "start";
    while (!input.empty())
    {       
        getline(cin,input);
        res += ' ' + input;
    }
    cout<<res<<endl;
    return 0;
}