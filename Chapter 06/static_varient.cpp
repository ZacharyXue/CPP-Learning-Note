#include <iostream>

using namespace std;

int count_call()
{
    static int cnt = 0;
    ++ cnt;
    return cnt;
}

int main()
{
    for(int i = 0; i < 10; ++i)
    {
        cout << "i = " << i << ", count_call() = " << count_call()
        << "." << endl;
    }
    return 0;
}