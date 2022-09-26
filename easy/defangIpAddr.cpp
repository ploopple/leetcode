#include <iostream>

using namespace std;

int main() {
    string q = "1.1.1.1";
    string a = "";
    for(int i = 0; i < q.size(); i++) {
        cout << typeid(q[i]).name()  << endl;
        if(q[i] == '.') {
            a += "[.]";
        } else {
            a += q[i];
        }
    }

    cout << a << endl;
    return 0;
}