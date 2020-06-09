#include <stdio.h>
#include <string.h>

int main()
{
    char pass[8];
    char correct[4] = "sky";
    int i = 0;
    int flag = 0;
    int flag2 = 3;
    char* pass_ptr = NULL;
    pass_ptr = pass;
    while(flag2 > 0){
    fgets(pass, 6, stdin);
    for(i; i<3;i++){
        if(*pass_ptr == correct[i]){
            pass_ptr++;
            flag += 1;
        }
        else{
            break;
        }
    }
    if(flag == 3){
        printf("Password Is Correct");
        flag2 = 0;
    }
    else{
        printf("Password Is Wrong\n");
        flag2 -= 1;
    }
    }
    return  0;
}
