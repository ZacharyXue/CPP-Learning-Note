#include <iostream>

using namespace std;

int main()
{
    int i = 2;
    double j = 3.14;
    int k = i + static_cast<double>(j);
    cout<< "i+static_cast<int>(j)= "<< k<<endl;
    cout << "i+j= " << i+j << endl;
    return 0;
}
