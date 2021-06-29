#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int a,b;
    cout << "Please enter values of a and b:(a/b)" << endl;
    cin >> a >> b;
    // cout << a << " / " << b << " = " << a /b << endl;
    try
    {
        if(b == 0)
        {
            throw invalid_argument("0 couldn't be used as division");
        }
    }catch(invalid_argument err)
    {
        cout << err.what() << endl;
    }
    return 0;
}