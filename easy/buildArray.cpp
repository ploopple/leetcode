#include <iostream>
#include <vector>

using namespace std;



vector<int> buildArray(vector<int>& nums) {
    vector<int> res;

    for(int i = 0; i < nums.size(); i++) {
        res.push_back(nums[nums[i]]);
    }

    return res; 
}

int main() {
    vector<int> q;
    q.push_back(0);
    q.push_back(2);
    q.push_back(1);
    q.push_back(5);
    q.push_back(3);
    q.push_back(4);

    vector<int> result = buildArray(q);


    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
return 0;
}