#include "Stack.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	Stack s;

	int op2;
	int op1;

	char c;
	cout << "Please enter in a post-fix equation; type the character 'q' to quit" << endl;
	while ((c = cin.get()) != 'q') {
		switch (c) {
		case '\n':
			cout << "= " << s.pop() << endl << endl;
			break;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			s.push(c - 48); // Subtract 48 (char '0' = 48) to get the actual int value of each char int value 
			break;
		case '+':
			/*cout << "Adding next two numbers" << endl;*/
			op2 = s.pop();
			op1 = s.pop();
			/*cout << "Done" << endl;*/
			s.push(op1 + op2);
			break;
		case '-':
			/*cout << "Subtracting next two numbers" << endl;*/
			op2 = s.pop();
			op1 = s.pop();
			/*cout << "Done" << endl;*/
			s.push(op1 - op2);
			break;
		case '*':
			/*cout << "Multiplying next two numbers" << endl;*/
			op2 = s.pop();
			op1 = s.pop();
			/*cout << "Done" << endl;*/
			s.push(op1 * op2);
			break;
		case '/':
			/*cout << "Dividing next two numbers" << endl;*/
			op2 = s.pop();
			op1 = s.pop();
			/*cout << "Done" << endl;*/
			s.push(op1 / op2);
			break;
		}
	}
}
