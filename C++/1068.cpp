#include <iostream>
#include <stack>

using namespace std;
 
int main() {
    stack<char> pi;
    string s; 
    while(cin >> s){
        bool flag = true;
        for (auto x : s) {
            if (x == '(') pi.push(x);
            else if (x == ')') {
                if (pi.size() == 0) {
                    flag = false;
                    break;
                }
                pi.pop();
            }
        }
        if (pi.size() > 0 || !flag) cout <<"incorrect\n";
        else cout << "correct\n";
    }   
    return 0;
}