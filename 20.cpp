/*************************************************************************
	> File Name: 20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 14时26分52秒
 ************************************************************************/

//有效的括号

bool isValid(char * s){
    int len = strlen(s);
    char *stack = (char *)malloc(sizeof(char) * len);
    int top = -1, flag = 1;
    while (s[0]) {
        switch (s[0]) {
        case '(' :
        case '[' :
        case '{' :stack[++top] = s[0];break;
        case ')' :flag = (top != -1 && stack[top--] == '(');break;
        case ']' :flag = (top != -1 && stack[top--] == '[');break;
        case '}' :flag = (top != -1 && stack[top--] == '{');break;
        
        }
        if (!flag) break;
        s++;
    }
    free(stack);
    return (flag && top == -1);
}
