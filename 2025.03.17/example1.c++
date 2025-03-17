#include<iostream>
#include<string>
using namespace std;

template <typename T>
T sum(T a, T b) {
    return a + b;
}

int main() {
    cout<<sum<int>(3, 5)<<endl;
    cout<<sum<float>(2.2, 3.5)<<endl;
    cout<<sum<string>("2.2", "3.5");
}