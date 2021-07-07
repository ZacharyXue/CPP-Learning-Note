#include <iostream>

using namespace std;
class Y;

class X
{
    public:
        Y* p;
};

class Y
{
    public:
        X x;
};

int main()
{
    X x;
    cout << x.p << endl;
    return 0;
}