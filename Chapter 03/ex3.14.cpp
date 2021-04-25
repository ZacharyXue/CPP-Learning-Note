# include <iostream>
# include <vector>

using namespace std;

int main(){
    vector<int> num_list;
    int i = 0;
    for (int j = 0; j < 4; j++){
        cin>>i;
        num_list.push_back(i);
    }
    return 0;
}