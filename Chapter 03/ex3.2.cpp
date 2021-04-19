# include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main(){
    string line;
    // 读取一整行
    // getline(cin,line);
    // 读取一个词
    while (cin>>line)
    {
        cout<<line<<endl;
    }
    
    cout<<line<<endl;
    return 0;
}