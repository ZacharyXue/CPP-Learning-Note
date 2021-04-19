# include <iostream>

using std::getline;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    string s1;
    string s2;
    cout<<"Please input the s1: ";
    getline(cin,s1);
    cout<<"Please input the s2: ";
    getline(cin,s2);
    if (s1>s2)
    {
        cout<<" The longer string is: "<<s1<<endl;
    }else
    {
        cout<<" The longer string is: "<<s2<<endl;
    }

    return 0;
}