#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int main()
{
    using FP = int(*)(int, int);
    vector<FP> v_fp;
    v_fp.push_back(add);
    v_fp.push_back(sub);
    int a = 2, b = 1;
    cout << "a = 2, b = 1" << endl;
    for(auto f : v_fp)
    {
        cout << f << ": " << f(a,b) << endl;
    }
    return 0;
}