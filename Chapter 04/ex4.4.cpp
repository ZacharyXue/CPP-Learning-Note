#include <iostream>

using namespace std;

int main()
{
    int a = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    int b = (12 / 3) * 4 + 5 * 15 + (24 % 4) / 2;
    cout<<"The original result is " << a <<endl;
    cout<<"The result after modification is "<< b << endl;
    return 0;
}
