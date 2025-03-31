#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st;
    int num, allNum = 0;
    int temp;
    cin>>num;

    for(int i = 0; i < num; i++) {
        cin>>temp;
        st.push(temp);
    }

    while (!st.empty()) {
        int temp2 = st.top();
        st.pop();
        if(temp2 % 2 == 0) allNum += temp2;
    }

    cout<<allNum<<endl;
    
    return 0;
}