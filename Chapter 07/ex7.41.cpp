#include <iostream>
#include <string>

using namespace std;

class Sales_data
{
    public:
        Sales_data(string str, unsigned cnt, double price):
            bookNo(str), units_sold(cnt), revenue(cnt * price) 
        {
            cout << "1: " << bookNo << endl;
        }
        Sales_data(): Sales_data("000",0,0) 
        {
            cout << "2: " << bookNo << endl;
        }
        Sales_data(string str): Sales_data(str,0,0) 
        {
            cout << "3: " <<bookNo << endl;
        } 
    private:
        string bookNo;
        unsigned units_sold;
        double revenue;
};

int main()
{
    Sales_data s1;
    Sales_data s2("001");
    Sales_data s3("003",10,10);
    return 0;
}