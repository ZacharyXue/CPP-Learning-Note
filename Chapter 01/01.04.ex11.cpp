# include <iostream>

int main()
{
    std::cout<<"Please enter two numbers:"<<std::endl;
    int v1 = 0,v2 = 0;
    bool flag;
    std::cin>>v1>>v2;
    if (v1>v2)
    {
        flag = true;
    }else
    {
        flag = false;
    }
    int v = v1;
    while(v != v2)
    {
        if(flag)
        {
            --v;
        }else
        {
            ++v;
        }
        std::cout<<v<<std::endl;
    }
    return 0;
}