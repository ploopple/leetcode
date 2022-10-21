#include <iostream>

int subtractProductAndSum(int n)
{
    int multN = 1;
    int minN = 0;
    std::string ns = std::to_string(n);

    for(int i = 0; i < ns.length(); i++)
    {
        multN *= int(ns[i]) - 48;
        minN += int(ns[i]) - 48; 
    }
    return multN - minN;
}

int main(void)
{
    std::cout << subtractProductAndSum(234) << std::endl;

    return 0;
}
