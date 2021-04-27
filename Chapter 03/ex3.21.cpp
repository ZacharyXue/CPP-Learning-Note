# include <iostream>
# include <vector>
# include <string>

using namespace std;

int main()
{
    // vector<int> num_list(10,1);
    vector<string> str_list{"Hello","World","","My","name"};
    // for(auto it = num_list.cbegin();it != num_list.cend();++it)
    for(auto it = str_list.cbegin();it != str_list.cend() && !it-> empty(); ++it)
    {
        cout << *it <<endl;
    }
    return 0;
}