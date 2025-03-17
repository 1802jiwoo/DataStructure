#include<iostream>
#include<string>
using namespace std;

template <typename T>
void sum(T &a, T &b) {
    T c = a;
    a = b;
    b = c;
}

int main() {
    string v1 = "std", v2 = "abc";
    sum<string>(v1, v2);
    cout<<v1<<" "<<v2<<endl;
}