#include<stdio.h>

void clap_or_count(int num_in){
    if(num_in > 9){
        clap_or_count(num_in / 10);
        clap_or_count(num_in % 10);
    } else if (num_in % 3 != 0){
        printf("%d", num_in);
    } else {
        printf("Clap! ");
    }
}

void clap_count(int count_to_num){
    printf("Counting to %d.\n", count_to_num);
    int i;
    for(i = 1; i <= count_to_num; i++){
        printf("%d = ", i);
        clap_or_count(i);
        printf("\n");
    }
}

int get_int_from_user(){
    int return_int;
    printf("How high would you to count to? : ");
    scanf("%d", &return_int);
    return return_int;
}
main()
{
    clap_count(get_int_from_user());
}