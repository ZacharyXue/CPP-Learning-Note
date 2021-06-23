#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1;
    string s2;
    cout<<"Please input the s1: ";
    getline(cin,s1);
    cout<<"Please input the s2: ";
    getline(cin,s2);
    if ( s1 == s2 )
    {
	cout << "s1 == s2" <<endl;
    }
    else if (s1 > s2)
    {
        cout<<" s1 > s2 "<<endl;
    }
    else
    {
        cout<<" s1 < s2 "<<endl;
    }

    if (s1.size() > s2.size())
    {
	cout << " s1 is longer than s2."<<endl;
    }
    else if (s1.size() < s2.size())
    {
        cout << " s2 is longer than s1." << endl;
    }
    else
    {
	cout <<" the length of s1 is equal to s2."<<endl;
    }
    return 0;
}
