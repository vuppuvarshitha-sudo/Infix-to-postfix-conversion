#include<stdio.h>
#include<ctype.h>
#include"header.h"
char stack[100];
int top=-1;
int main(void)
{
        char str[50],postfix[50];
        int i=0,j=0;
        char ch;
        printf("enter infix expression");
        scanf("%s",str);
        while(str[i]!='\0')
        {
                ch=str[i];
                if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
                {
                        postfix[j++]=ch;
                }
                else if(ch=='('||ch=='[')
                {
                        push(ch);
                }
                else if(ch==')'||ch==']')
                {
                        while(stack[top]!&&stack[top]!='('&&stack[top]!='[')
                        {
                                postfix[j++]=pop();
                        }
                        pop();
                }
                else
                {
                        while(top!=-1&&priority(stack[top])>=priority(ch))
                        {
                                postfix[j++]=pop();
                        }
                        push(ch);
                }
                i++;
        }
        while(top!=-1)
        {
                postfix[j++]=pop();
        }
        postfix[j]='\0';
        printf("postfix expression:%s\n",postfix);
        return 0;
}
