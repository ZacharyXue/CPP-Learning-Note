#include <iostream>

using namespace std;

int main(void)
{
    int a[2][2] = {
        {1,2},
        {3,4}
    };
    cout << "use \"for\" to visit the array elements." <<endl;
    for(const auto &row : a)
    {
        for(auto col : row)
        {
            cout<< col << endl;
        }
    }
    int (*p)[2];
    p = a;
    cout << "use the pointer to vist the array elements." <<endl;
    // pay attention: *(p+1) is also a pointer!!!
    cout << "*(p + 1) = " << *(p + 1) << endl;
    cout <<"**(p + 1) = " << **(p + 1) << endl;
    return 0;
}