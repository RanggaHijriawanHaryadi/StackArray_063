#include<iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//construcktor
	StackArray() {
		top = -1;
	}

	void push() {
		int element;
		cout << "masukkan element : " ;
		cin >> element;
		if (top == 4) {
			cout << "Number of data execend the limit" << endl;
			return ;

		}

		top++; //step2
		stack_array[top] = element; // step 3
		cout << endl;
		cout << element << " ditambahkan(pushed)  "<< endl;

	}
	void pop() {
		if (empty()) { //step 1
			cout << "\nStack is empty. Cannot pop." << endl; //1.a
		}

		cout << "\nThe popped element is :" << stack_array[top] << endl; //step 2
		top--;// step 3 decrement
	}
	// method for check if data is mepty
	bool empty() {
		return(top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; top--) {
				cout << stack_array[top] << endl;
			}
		}
	}
};
int main() {
	StackArray s;
	char ch;
	char ch;
	while (true) {
		
	}

}
	