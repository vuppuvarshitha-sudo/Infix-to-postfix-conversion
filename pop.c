#include"header.h"
char pop()
{
        char ch;
        ch=stack[top];
        top--;
        return ch;
}
