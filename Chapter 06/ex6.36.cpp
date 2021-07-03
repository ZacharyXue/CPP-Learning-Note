#include <iostream>

using namespace std;

int arr[3][2] = {6,7,8,9,10,11};
// typedef int arrInt[2];
using arrInt = int[3][2];

int (*func1())[2]
{
    return arr;
}

arrInt * func2()
{
    return &arr;
}

int main()
{
    // int (*p)[2] = func1();

    // arrInt * p = func1();

    arrInt * p = func2();
    for(int i = 0 ;i < 3; ++i)
	{
		cout<< *(*(*p + i)+1) <<" "<<endl;
	}
	return 0;
}
