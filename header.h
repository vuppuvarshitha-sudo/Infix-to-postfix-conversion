#ifndef HEADER_H
#define HEADER_H
extern char stack[100];
extern int top;
void push(char ch);
char pop(void);
char peek(void);
int priority(char ch);
#endif
