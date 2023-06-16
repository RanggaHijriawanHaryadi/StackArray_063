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

	int push(int element) {
		if (top == 4) {
			cout << "Number of data execend the limit" << endl;
			return 0;
		}

		top++; //step2
		stack_array[top] = element; // step 3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
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
	
};