#include<stdio.h>
int main(void)
{
    int grade[3];
    int i;
    for(i=0;i<3;i++){
        printf("enter quiz grade%d:",i+1);
        scanf("%d",&grade[i]);
    }
    
    

    printf("here are the grades that were entered\n");

    for(i=0;i<3;++i){
        printf("grade %d %d\n",i+1,grade[i]);
    }
    

    return 0;
}