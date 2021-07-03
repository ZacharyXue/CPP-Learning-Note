#include <iostream>
#include "ex6.8.h"

using namespace std;

int main()
{
    for(int i = 0; i < 10; ++i)
    {
        cout << count() << endl;
    }
    return 0;
}

int count()
{
    static int i = 0;
    return i ++;
}