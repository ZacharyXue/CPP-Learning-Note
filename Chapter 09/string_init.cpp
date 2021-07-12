#include <iostream>
#include <string>

#define PRINT(X) cout << #X << ": " << X << endl

using namespace std;

int main()
{
    const char *cp = "Hello world!!!";
    string str1(cp);
    PRINT(str1);

    char noNull[] = {'H','i'};
    string str2(noNull,2);
    PRINT(str2);

    string str3(str1,6,5);
    PRINT(str3);

    string str4(cp+6,5);
    PRINT(str3);

    str2 = str1.substr(0,5);
    PRINT(str2);
    str2 = str1.substr(6);
    PRINT(str2);

    return 0;
}