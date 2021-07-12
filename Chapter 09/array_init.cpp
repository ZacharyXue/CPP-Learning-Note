#include <array>
#include <iostream>

using namespace std;

void print(array<int,5> &T)
{
    for (auto i : T)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    array<int,5> A;
    print(A);
    for ( auto i = A.begin(); i < A.end(); ++i)
    {
        *i = 5;
    }
    print(A);
    return 0;
}