#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack() { // Constructs Stack setting the first index (the top) to 0 
	this->top = 0;
}

void Stack::push(int num) { // Pushes number to the top as long as there is space left 
	if (top == ARRSIZE) {
		cout << "Error: stack is full, cannot push " << num << endl;
		return;
	}
	cout << "Pushing: " << num << endl;
	this->arr[top++] = num; // Post-increments top after we add the num for next push call 
}

int Stack::pop() { // Pops top-most number and returns it as long as top is != 0 
	if (this->isEmpty()) {
		cout << "Error: stack is empty, cannot pop" << endl;
		return NULL;
	}
	cout << "Popping: " << arr[top - 1] << endl;
	return this->arr[--top]; // Decrements top before returning so we don't get an empty index 
}

bool Stack::isEmpty() { // Checks if the stack is empty (top = 0) 
	return this->top == 0;
}


bool Stack::isFull() { // Checks if the stack is full (top = ARRSIZE) 
	return this->top == ARRSIZE;
}

//void Stack::printStack() { // Prints the stack from bottom-most to top-most element 
//	for (int i = 0; i < this->top; i++) {
//		cout << this->arr[i] << " ";
//	}
//	cout << endl;
//}
