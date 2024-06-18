#include<stdio.h>
int main()
{
    int matchstick=21,user_choice1,user_choice2;
    while(matchstick>=1)
    {
       
        printf("\nEnter the 1 to 4 for choosing the no. of matchstick for user 1\n");
        scanf("%d",&user_choice1);
        if(matchstick>1)
        {
         if(matchstick-user_choice2==user_choice1)
        {
        printf("User 1 lost");
        }
        }
        else if(matchstick==1){
        printf("User 1 lost");
        break;
        }
        printf("Enter the 1 to 4 for choosing the no. of matchstick for user 2\n");
        scanf("%d",&user_choice2);
        if(matchstick>1)
        {
         if(matchstick-user_choice1==user_choice2){
            printf("User 2 lost");
            break;
        }
        }
        else if(matchstick==1){
        printf("User 1 lost");
        break;
        }
        if(user_choice1>4||user_choice2>4)
        {
            printf("\nInvalid choice");
            break;
        }
        matchstick=matchstick-user_choice1-user_choice2;
        printf("\nThe remaining matchstick is %d",matchstick);
        
    }
    return 0;
}