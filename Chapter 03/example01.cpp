# include <iostream>

using namespace std;

int main(){
    string s("Hello world!!!");
    decltype(s.size()) punct_cnt = 0; //这里使用decltype是为了初始化变量为size()对应类型
    for(auto c : s){
        if(ispunct(c)){
            ++ punct_cnt;
        }
    }
    cout<<punct_cnt<<" punctuation characters in "<<s<<endl;
    return 0;
}