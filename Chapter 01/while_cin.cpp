#include <iostream>

using namespace std;

int main(void)
{
    int sum = 0, value = 0;
    while(cin>>value)
    {
        sum += value;
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}
