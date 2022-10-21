#include <iostream>
#include <vector>

std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums)
{
    std::vector<int> res;
    for(int i = 0; i < nums.size(); i++)
    {
        int cout = 0;
        for(int j = 0; j < nums.size(); j++)
        {
            if(nums[i] > nums[j]) cout++;
        }
        res.push_back(cout);
    }
    return res;
}

int main(void)
{
    std::vector<int> arr;
    arr.push_back(8);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);

    std::vector<int> result = smallerNumbersThanCurrent(arr);

    for(int k = 0; k < result.size(); k++)
    {
        std::cout << result[k] << std::endl;
    }

    return 0;
}