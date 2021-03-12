# include <iostream>
# include <string>
#include "02.06.01.Sales_data.h"

int main()
{
    
    // 很多人会忘记在类定义的最后加上分号
    Sales_data data1,data2;

    // 读入数据
    double price = 0;
    std::cin >> data1.bookNo >> data1.units_sold >> price; //用换行或者空格都可以
    data1.revenue = data1.units_sold * price;
    std::cout << "book number: " << data1.bookNo << 
    " price: " << price << std::endl;

    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::cout << "book number: " << data2.bookNo << 
    " price: " << price << std::endl;

    // 检查ISBN码是否重合
    if (data1.bookNo == data2.bookNo)
    {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;

        std::cout << data1.bookNo << ' ' << totalCnt << ' ' 
        << totalRevenue << ' ';
        if (totalCnt != 0)
        {
            std::cout << totalRevenue / totalCnt <<std::endl;
        }else
        {
            std::cout << "(no sales)" << std::endl; 
        }
        return 0;   
    }else
    {
        std::cerr << "data must refer to the same ISBN." << std::endl;
        return -1;
    }
    
    
}