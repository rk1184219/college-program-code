#include<stdio.h>
#include<conio.h>
#include<math.h>

int c = 0,numa[8] ={0},numb[8]={0},diff[8]={0},sum[8]={0};
void add();
void sub();
void main()
{
    int ch,i;
    do{
        for(i=0; i<8; i++){
            numa[i]=0;
            numb[i]=0;
            diff[i]=0;
            sum[i]=0;
        }
        c=0;
        printf("\tADDITION-SUBTRACTION USING TWO'S COMPLEMENT");
        printf("\n1.ADD\nEntre your choice");
        scanf("%d",&ch);
        switch(ch){
            case1:add();
            break;
            case2:sub();
            break;
            default:printf("\ninvalid choice :");
        }
        printf("\npress1 to continue....");
        scanf("%d",&ch);
    }
    while(ch==1);
}
void add()
{
    int i;
    printf("\nEntre two 8-bit binary number\n");
    printf("\nEntre the first number :");
    for(i=0; i<=8; i++){
        scanf("%d",&numa[i]);
    }
    printf("\nEntre second number");
    for(i=0; i<8; i++){
        scanf("%d",&numb[i]);
    }
    for(i=7; i>=0; i--){
        sum[i]=numa[i]+numb[i]+c;
        if(sum[i]>=2){
            c=1;
        }
        else
        c=0;
        sum[i]= sum[i]%2;
    }
    printf("\nSum is");
    for(i=0; i<8; i++){
     printf("%d",sum[i]);   
    }
    void sub()
    {
        int i;
        printf("\nEntre two 8-bit binary number\n");
        printf("\nEntre the first number :");
        for(i=0; i<8; i++){
            scanf("%d",&numa[i]);
        }
        printf("\nEntre second number :");
        for(i=0; i<8; i++){
             scanf("%d",&numb[i]);
        }
        for(i=7; i<8; i++){
            diff[i]=numa[i]-numb[i];
            if(diff[i]<0){
                numa[i-1]=numa[i-1]-1;
            }
            diff[i]=fabs(diff[i]%2);
        }
        printf("\nDifference is :");
        for(i=0; i<8; i++){
            printf("%d",diff[i]);
        }
    }
}
