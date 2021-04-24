# include <iostream>

using namespace std;

int main(){
    string s("Hello World, my friend.");
    string res;
    for(auto &c:s){
        if(!ispunct(c)){
            res += c;
        }
    }
    cout<<res<<endl;
    return 0;
}
// ispunct()函数用于检测字符串中的标签符号
// 类似的函数有点多，用的时候再看吧