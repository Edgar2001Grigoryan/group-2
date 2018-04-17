#include <iostream>
using namespace std;


class Stack {
    private:
	unsigned int top = 0; 
	unsigned int n = 0;
	int *arr;
    public:
        Stack(unsigned int n) {
	    (*this).n = n;
            (*this).arr = new int[n];
	}
        ~Stack(){
            delete arr;
        }
 	void push(int k) {
	    if (top == n) {
		cout << "Stack is full!\n"; 
            } else {
	        arr[top++] = k;
            }
        }
	int pop() {
            if (top == 0) {
                cout << "Stack is empty!\n";
	    } else {
                return arr[top--];
	    }
 	}
	bool isEmpty() {
	    return (top == 0);
	}
	int size() {
	    return top;
	}
	
};


int main() {
    int n;
    cin >> n;
    Stack stack(n);
    for (int i=0; i < n+1; i++) {
        stack.push(i);
    }
    Stack stack1(n);
    stack1.pop();

    return 0;
}
