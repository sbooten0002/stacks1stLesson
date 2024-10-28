#pragma once
#include <iostream>
template <class Type>

class stackADT
{
public:
	
	// Method to initialize the stackto an empty state.
	// Postconditions: Stack is 
	virtual void initializeStack() = 0;

	// Fucntion to determine whether the stack is empty.
	// Postconditions: Returns true if the stack is empty, otherwise returns false.
	virtual bool isEmptyStack() const = 0;
	
	// Function to determine whether the stack is full.
	// Postconditions: Returns true if the stack is full, otherwise returns false.
	virtual bool isFullStack() const = 0;

	// Function to add newItem to the stack.
	// Precondition: The stack exists and is not full.
	// Postconditions: The stack is changed and newItem is added to the top of the stack.
	virtual void push(const Type& newItem) = 0;
	
	// Function to return the top element of the stack.
	// Precondition: The stack exists and is not empty.
	// Postconditions: If the stack is empty, the program terminates; otherwise, the top element of the stack is returned.
	virtual Type top() const = 0;

	// Function to remove the top element of the stack.
	// Precondition: The stack exists and is not empty.
	// Postconditions: The stack is changed and the top element is removed from the stack.
	virtual void pop() = 0;
};