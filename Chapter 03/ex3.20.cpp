#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num{0};
    vector<int> num_list;
    while (cin>>num)
    {
        num_list.push_back(num);
    }
    decltype(num_list.size()) count;
    if (num_list.size() % 2 == 0)
    {
        count = num_list.size() / 2;
    }else{
        count = num_list.size() / 2 + 1;
    }
    
    for (auto i = 0; i < count; i++)
    {
        if(2*i != num_list.size()-1)
        {
            cout<< num_list[i] + num_list[num_list.size()-i-1]<<endl;
        }else{
            cout<< num_list[i]<<endl;
        }
    }
    return 0;
}