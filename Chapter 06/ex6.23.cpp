#include <iostream>

using namespace std;

void print1(const int i,const int * beg, const int * end);
void print2(const int i, int (&arr)[2]);
void print3(const int i, int * arr, int len);

int main()
{
    int i = 0;
    int arr[] = {1,2};
    print1(i,begin(arr),end(arr));
    print2(i,arr);
    print3(i,arr,2);
    return 0;
}

void print1(const int i,const int * beg, const int * end)
{
    cout << "Print1:" << endl;
    cout << i << endl;
    for (auto p = beg; p < end; ++p)
    {
        cout << *p << endl;
    }
}
void print2(const int i, int (&arr)[2])
{
    cout << "Print2:" << endl;
    cout << i << endl;
    for(int j : arr)
    {
        cout << j << endl;
    }
}
void print3(const int i, int * arr, int len)
{
    cout << "Print3:" << endl;
    cout << i << endl;
    for(int j = 0; j < len; ++j)
    {
        cout << *(arr + j) << endl;
    }
}