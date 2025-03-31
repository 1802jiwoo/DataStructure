#include<iostream>
using namespace std;

class Stack {
    private:
        int arr[8];
        int topIndex;
        int capacity;
    public:
        Stack() {
            topIndex = -1; // 없는공간이지만 탑을 찾을땐 있는거부터 해야해서 -1임
            capacity = 8;
        }
        void push(int x) {
            if(isFull()) {
                cout<<"full"<<endl;
            } arr[++topIndex] = x;
        }
        void pop() {
            if(isEmpty()) {
                cout<<"empty"<<endl;
            } topIndex--;
        }
        int top() {
            return arr[topIndex];
        }
        bool isFull() {
            return topIndex == capacity - 1;
        }
        bool isEmpty() {
            return topIndex == -1;
        }
};

int main() {
    
    Stack s;
    
    for(int i = 1; i <= 8; i++) {
        s.push(i);
    }

    s.push(9);
    
    return 0;
}