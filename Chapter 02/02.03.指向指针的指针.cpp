# include <iostream>

int main()
{
    int i = 1;
    int *pi = &i;
    int **ppi_0 = &pi;
    // int *ppi_1 = &pi;
    // a value of type "int **" cannot be used to 
    // initialize an entity of type "int *"
    std::cout<<"**ppi_0 = " << **ppi_0 << std::endl;
    // std::cout <<"**ppi_1 = " << *ppi_1 << std::endl;
    return 0;
}