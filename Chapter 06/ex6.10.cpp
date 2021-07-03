#include <iostream>

using namespace std;

void swap(int * i, int * j);

int main()
{
    int a = 1, b = 2;
    cout << "before swaping, a = " << a << ", b = " << b << "." << endl;
    swap(&a,&b);
    cout << "after swaping, a = " << a << ", b = " << b << "." << endl;
    return 0;
}

void swap(int * i, int * j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}