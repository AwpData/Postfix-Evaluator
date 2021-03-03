#ifndef Stack_h

#pragma once

#define ARRSIZE 5 // Change if you want to adjust stack size 
class Stack {
private:
	int top;
	int arr[ARRSIZE];
public:
	Stack();
	void push(int num);
	int pop();

	bool isEmpty();
	bool isFull();

	void printStack();
};

#endif
