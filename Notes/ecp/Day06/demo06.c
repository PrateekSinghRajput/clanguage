#include<stdio.h>

// Write a function to print msg on console.

// declaration  / prototype / signature
//  <return type> <function name>([List of types of arguments]);
// declaration is done at start of your program

// defination
//  <return type> <function name>([List of arguments])
//  {
//      // body
//  }
//  definitions are written below main() function

// function call
//  <function name>([list of arguments]);

// declaration
void print_msg(void);
// return type - any data type (primitive/derived/user defined)
// if you do not want to return any thing from function , then mention return type as void
// function name - it is any valid identifier
// Arguments - inputs to the function

int main(void)
{
    // function call
    print_msg();    // skip all data types
    return 0;
}

// definition
void print_msg(void)
{
    // body
    printf("This is my first function\n");
}