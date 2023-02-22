#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void get_info(char *arr,int *width,int *u_bit){
    printf("Enter value: ");
    scanf("%s",arr);
    printf("Set total width: ");
    scanf("%d",width);
    printf("Set decimal places: ");
    scanf("%d",u_bit);
}

void Output(char *arr,int start,int point,int u_bit){
    printf("Value is ");
    for(int i = start ; i <= (point+u_bit) ; i++)
        printf("%c",arr[i]);
    
    printf("\n");
}

int main(){
    char arr[50];
    int width,u_bit;
    int *wp = &width;
    int *up = &u_bit;
    
    get_info(arr,wp,up);

    int point;//紀錄小數點在char[]裡的index
    
    for(int i=0;i<50;i++)
    {   
        if(arr[i]=='.'){ 
            point = i;
            break; }
    }
  
    int start= point - (width - u_bit);
    if(start < 0) start = 0;

    Output(arr,start,point,u_bit);

    return 0;
}