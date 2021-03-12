# ifndef SALES_DATA_H
# define SALES_DATA_H
# include <string>
struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
# endif
// 使用 ifndef 可在预编译没有包含时顺序执行至 endif
// define 为定义预处理变量