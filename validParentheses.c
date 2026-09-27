#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>



bool check(char* s){
    char stack[1000];
    int top = -1;
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
            stack[++top] = s[i];
        }
        i++;
    }

    int j = 0;
    while(s[j] != '\0'){
       if(s[j] == ']' || s[j] == '}' || s[j] == ')'){
      char c = stack[top--];
      if((s[j] == ')' && c != '(') || (s[j] == '}' && c != '{') || (s[j] == ']' && c != '[')) return false;
      
    }
    j++;
}
    return true;
}

int main(){
    char str[] = "{[()]}";
    printf("%d\n", check(str));
}