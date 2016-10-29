#include <stdio.h>
#include <string.h>

typedef int bool;
#define true 1
#define false 0

bool is_binary(char string_to_check[])
{
    int length, i;
    length = strlen(string_to_check);
    
    for(i = 0; i < length; i++){
        if (string_to_check[i] != '0' && string_to_check[i] != '1')
            return false;
    }
    return true;
}

int two_raised_to(int raising_power){
    
    int return_int, i;
    
    return_int = 1;
    
    for (i = 1; i < raising_power; i++){
        return_int = return_int * 2;
    }
    
    return return_int;
}

int int_from_binary(char binary_string_to_convert[]){
    
    int length, int_to_return, i;
    
    length = strlen(binary_string_to_convert);
    
    int_to_return = 0;
    
    for(i = 0; i < length; i++){
        if (binary_string_to_convert[i] == '1'){
            int_to_return = int_to_return + two_raised_to(length - i);
        }
    }
    return int_to_return;
}

int main()
{
    char users_binary[20];
    int decimal_equivalent;
    printf("Enter binary : ");
    scanf("%s", &users_binary);
    printf("Entered binary is %s\n", users_binary);
    
    
    if(is_binary(users_binary)){
        printf("%s is a binary number.\n", users_binary);
        decimal_equivalent = int_from_binary(users_binary);
        printf("%d is the decimal equivalent.\n", decimal_equivalent);
    } else {
       printf("%s is not a binary number.\n", users_binary); 
    }
}