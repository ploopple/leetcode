#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
   vector<int> r;
   
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                r.push_back(i);
                r.push_back(j);
                break;
            }
        }
        if(r.size() == 2) {
            break;
        }
    }

    if(r.size() == 0) {
        vector<int> s;
        s.push_back(0);
        s.push_back(0);
        return s;
    }
    
    return r;
}

int main() {
    int t = 6;
    vector<int> q;
    q.push_back(3);
    q.push_back(2);
    q.push_back(4);

    vector<int> result = twoSum(q,t);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}