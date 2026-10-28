#Infix to Postfix Conversion

Project Description
This project converts an infix expression into a postfix expression using the C programming language and a stack data structure.

Objective
To convert infix expressions into postfix expressions by using stack operations and operator precedence.

Programming Language
- C Programming

Concepts Used
- Stack Data Structure
- Push and Pop Operations
- Operator Precedence
- Infix to Postfix Conversion

Sample Input and Output
Input (Infix Expression)
(A+B)*(C-D)^E

Output (Postfix Expression)
AB+CD-E^*

Explanation
- (A+B) becomes AB+
- (C-D) becomes CD-
- (C-D)^E becomes CD-E
- Multiplying both parts gives AB+CD-E^*

Project Files
- main.c - Main program
- header.h - Header file
- push.c - Push operation
- pop.c - Pop operation
- priority.c - Operator precedence functions
- makefile - Compilation instructions

 How to Compile and Run

Compile the project:
make
Run the program:
./a.out

Applications
- Compiler Design
- Expression Processing
- Understanding Stack Operations

Conclusion
This project demonstrates how a stack is used to convert infix expressions into postfix notation using C programming.
This project demonstrates how a stack is used to convert infix expressions into postfix notation using C programming.

