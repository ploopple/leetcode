#include <iostream>
#include <vector>

using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
        int result = 0;
        for(int i = 0; i < operations.size(); i++) {
            if(operations[i] == "X++" || operations[i] == "++X") result++;
            if(operations[i] == "X--" || operations[i] == "--X") result--;
            // cout << operations[i] << endl;
        }
        return result;
}

int main() {
    vector<string> q;
    q.push_back("X++");
    q.push_back("++X");
    q.push_back("--X");
    q.push_back("X--");

    cout << finalValueAfterOperations(q) << endl;
    return 0;
}