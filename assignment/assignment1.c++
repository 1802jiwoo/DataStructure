#include<iostream>
#include<stack>
using namespace std;

int main() {
    string str;

    while (true) {
        bool view = true;
        stack<char> st;

        getline(cin, str);
        if(str == ".") break;

        for(char tem : str) {
            if(tem == '(' || tem == '[') {
                st.push(tem);
            } else if (tem == ')') {
                if(st.empty() || st.top() != '(') {
                    view = false;
                    break;
                }
                st.pop();
            } else if(tem == ']') {
                if(st.empty() || st.top() != '[') {
                    view = false;
                    break;
                }
                st.pop();
            }
        }

        view && st.empty() ? cout << "yes" << endl : cout << "no" << endl;
    }

    return 0;
}
