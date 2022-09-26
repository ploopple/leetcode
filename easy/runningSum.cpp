#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> res;        

    for(int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for(int j = i; j >= 0; j--) {
            sum += nums[j];
        }
        res.push_back(sum);
    }

    return res;
}

int main() {
    vector<int> q;
    q.push_back(1);
    q.push_back(2);
    q.push_back(3);
    q.push_back(4);

    vector<int> result = runningSum(q);

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return 0;
}