#include <iostream>
#include <string>

using namespace std;

struct Sales_data
{
    // 构造函数
    Sales_data() = default;
    Sales_data(const string &s): bookNo(s){}
    Sales_data(const string &s, unsigned n, double p):
        bookNo(s),units_sold(n),revenue(n*p){ }
    Sales_data(istream &);

    // 成员函数
    string isbn() const {return bookNo;}
    Sales_data & combine(const Sales_data &);
    double avg_price() const;

    // 成员
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &read(istream &, Sales_data &);

int main()
{
    // Sales_data s1;
    // read(cin,s1);
    // print(cout,s1);
    Sales_data s2("01");
    print(cout,s2);
    Sales_data s3("02",10,100);
    print(cout,s3);
    s2.combine(s3);
    s2.combine(s3);
    print(cout,s2);
    return 0;
}

double Sales_data::avg_price() const
{
    if (units_sold)
    {
        return revenue / units_sold;
    }
    else
    {
        return 0;
    }
}
Sales_data & Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;  // 注意这里，返回的的是this指向的地址
                   // 而返回的是引用
}
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;

    sum.combine(rhs);
    return sum;
}
ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price() << endl;
    return os;  
}
istream &read(istream &is, Sales_data &item)
{
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}