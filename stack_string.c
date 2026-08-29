#include<stdio.h>
#include<string.h>
int isvalid( char *s ){
    char stack[100];
    int top=-1;
    for(int i=0;i<strlen(s);i++){
        char ch=s[i];
        if (ch=='('||ch=='{'||ch=='['){
            top =top+1;
            stack[top]=ch;
        }
        else{
            if (top==-1){
                return 0;

            }
            char topElement=stack[top];
            top=top-1;
            if (ch==')'&& topElement !='('){
                return 0;
            }
            else if (ch=='}'&& topElement !='{'){
                return 0;
            }
            else if (ch==']'&& topElement !='['){
                return 0;

            }
        }

    }
    if(top==-1){
        return 1;
    }
    else {
        return 0;
    }
}
void main(){
    char s[]="({[]})";
    int result=isvalid(s);
    if (result==1){
        printf("Valid\n");
    }
    else{
        printf("Invalid\n");    
    }
}