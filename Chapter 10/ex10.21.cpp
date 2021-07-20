#include <iostream>

using namespace std;

int main()
{
    int i;
    cin >> i;
    auto j = [i]() mutable -> int 
            {
                while ( i > 0)
                {
                    i -= 2;
                }
                return i;
            };
    cout << i << ": " << j() << endl;
    return 0;
}