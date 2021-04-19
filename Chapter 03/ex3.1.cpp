# include <iostream>

using std::cout;
using std::endl;

int main(){
    int i = 50;
    int sum = 0;
    while (i < 101)
    {
        sum += i;
        i ++;
    }
    cout<<" The result is "<< sum << endl;
    cout<<" The i is "<< i <<endl;
    return 0;
}