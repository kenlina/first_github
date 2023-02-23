#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void get_info(double *num,char *width,char *u_bit){
    printf("Enter value: ");
    scanf("%lf",num);
    printf("Set total width: ");
    scanf("%s",width);
    printf("Set decimal places: ");
    scanf("%s",u_bit);
}

void set_char(char *arr,char *width,char *u_bit){
    strcat(arr,width);
    strcat(arr,".");
    strcat(arr,u_bit);
    strcat(arr,"lf");
}

int main(){
    double num,*np;
    np=&num;
    char arr[50]="Value is %";
    char width[10],u_bit[10];
    
    get_info(np,width,u_bit);
    //set "Value is %寬度.小數位lf"
    set_char(arr,width,u_bit);
    //printf 出字串
    printf(arr,num);
    printf("\n");
    //printf("fucking off\n");
    return 0;
}