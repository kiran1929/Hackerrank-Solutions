#include <stdio.h>

int main() {
    int left=1,middle=2,right=3,input;
    int choice,bridge,final_choice;
    scanf("%d",&input);
    if (input==left)
    {
        printf("Player chooses the Left path.\n");
        scanf("%d",&choice);
        if (choice==1)
        {
            printf("Poor choice, Game Over!\n");
        }
        else
        {
            printf("Player found a bridge.\n");
            scanf("%d",&bridge);
            if (bridge==1)
            {
                printf("Player crosses the bridge safely.\n");
                scanf("%d",&final_choice);
                if(final_choice==1)
                {
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(final_choice==2)
                {
                    printf( "All your efforts were for nothing, Game Over!\n");
                }
                else if(final_choice==3)
                {
                    printf("Congratulations!! You won the treasure.\n");
                }
                
            }
            else{
                printf("Poor luck, Game Over!\n");
            }
        }
    }
    else if ( input == middle ) {
        int num5;
        printf("Player chooses the Middle path.\n");
        scanf("%d",&num5);
        int C = num5 % 10;
        int B = (num5 / 10) % 10;
        int A = num5 / 100;

        if (B == 4*C && A == B - 3 && A + B + C == 15) {
            printf("Player solved the puzzle.\n");
            scanf("%d",&final_choice);
                if(final_choice==1)
                {
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(final_choice==2)
                {
                    printf( "All your efforts were for nothing, Game Over!\n");
                }
                else if(final_choice==3)
                {
                    printf("Congratulations!! You won the treasure.\n");
                }
        }
        else {
            printf("Foolish player, Game Over!\n");
            //break;
            return 0;
        }
    }
    else if(input==right)
    {
        int num6;
        printf("Player chooses the Right path.\n");
        scanf("%d",&num6);
        if(num6==30)
        {
            printf("Player solved the puzzle.\n");
            scanf("%d",&final_choice);
                if(final_choice==1)
                {
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(final_choice==2)
                {
                    printf( "All your efforts were for nothing, Game Over!\n");
                }
                else if(final_choice==3)
                {
                    printf("Congratulations!! You won the treasure.\n");
                }
            
        }
        else{
            printf("Foolish player, Game Over!\n");
        }
    }
    return 0;
}
