#include <stdio.h>

int main() {
    int budget,numguests,foodcost,decoration,musiccost,extraexpenses,total,thirty,fifty,totalfoodcost;
    scanf("%d",&budget);
    scanf("%d",&numguests);
    scanf("%d",&foodcost);
    scanf("%d",&decoration);
    scanf("%d",&musiccost);
    scanf("%d",&extraexpenses);
    totalfoodcost=foodcost*numguests;
    total=totalfoodcost+decoration+extraexpenses+musiccost;
    thirty=(budget*30)/100;
    fifty=(budget*50)/100;
        if ( numguests > 5 && numguests <=25)
        {
            if ( total <= budget )
            {
                if ( decoration < thirty || totalfoodcost < fifty )
                    {
                        printf("Celebration Approved");
                    }
                else
                    {
                        printf("Celebration Denied");
                    }
            }
            else 
            {
                printf("Celebration Denied");
            }
            
        }
        else if ( numguests > 25 && musiccost!=0)
        {
            
            if (total <= budget )
            {
                if ( decoration < thirty || totalfoodcost < fifty )
                    {
                        printf("Celebration Approved");
                    }
                else
                    {
                        printf("Celebration Denied");
                    }
            }
            else 
            {
                printf("Celebration Denied");
            }
        }
        else 
            {
                printf("Celebration Denied");
            }
    
        
    
    return 0;
}
