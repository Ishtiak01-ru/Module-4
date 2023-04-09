// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

// Note : difference between 'a' and 'A' in ASCII is 32 .

#include<stdio.h>
int main(){
    char X;

    scanf("%c",&X);

    if (X>= 'a' &&  X <= 'z'){
       int ans = X-32;
        printf("%c",ans);
    }
    else{
         int ans = X + 32;
        printf("%c",ans);
    }
    
    return 0;

}