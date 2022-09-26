#include <iostream>
#include <vector>

using namespace std;

vector<int> func(vector<int>& nums) {
    vector<int> res = nums;
    // cout << sizeof(nums) << " / " << sizeof(nums[0]) << " = " << sizeof(nums) / sizeof(nums[0]) << endl;
    for(int i = 0; i < nums.size(); i++) {
        res.push_back(nums[i]);
    }
    return res;
}

int main() {
    vector<int> q;
    q.push_back(1);
    q.push_back(2);
    q.push_back(1);
    q.push_back(2);

    vector<int> ans = func(q);
    
    for(int i = 0; i < ans.size() ; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}