#include <iostream>
#include <stack>

int main()
{
// create a stack of floats
std::stack <float> FloatStack;
// push some values on the stack
FloatStack.push(3.0);
FloatStack.push(2.0);
// get the size of the stack
std::cout <<"Stack Size = "<<FloatStack.size()<<std::endl;
// print the top value
std::cout <<"top "<<FloatStack.top()<<std::endl;
// pop the value from the top of the stack
FloatStack.pop();
std::cout <<"top "<<FloatStack.top()<<std::endl;
}