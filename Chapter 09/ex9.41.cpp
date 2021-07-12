#include <iostream>
#include <string>
#include <vector>

#define PRINT(X) cout << #X << ": " << X << endl

using namespace std;

int main()
{
    vector<char> vec;
    vec.assign({'h','e','l','l','o'});
    // string str(vec.begin(),vec.size());
    string str1( &vec[0],vec.size());
    PRINT(str1);
    string str2( vec.begin(), vec.end());
    PRINT(str2);
    
    return 0;
}