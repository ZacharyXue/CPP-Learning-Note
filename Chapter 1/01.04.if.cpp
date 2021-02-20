# include <iostream>

int main()
{
    int currVal = 0, val = 0;
    if(std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if( val == currVal)
            {
                ++cnt;
            }
            else
            {
                std::cout << currVal << " occurs" << cnt 
                << " times "<< std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "<< cnt << " times " << std::endl;
    }
    return 0;
}
// 书上这个统计出现次数的代码因为没有用数组等形式储存出现次数，
// 所以只能统计连续出现的次数。