#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    vector<int> num_list;
    while(cin>>num)
    {
        num_list.push_back(num);
    }
    cout << "The primary vector is: " <<endl;
    for(auto i = num_list.begin(); i != num_list.end(); ++i )
    {
        cout << *i << endl;
    }
    cout << " The array after operation: " << endl;
    for(auto i : num_list)
    {
        int temp = (i % 2) ? ( 2 * i ) : i;
        cout << temp << endl; 
    }
    return 0;
}
// 注意vector的几种遍历方式