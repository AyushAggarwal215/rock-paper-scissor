#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("welcome to rock paper scissor\n");
    printf("Enter your name!\n");
    char name[15];
    scanf("%14s",&name);
    int n = 0, player=0, bot=0;
    srand(time(NULL));
    while (n != 3)
    {
        printf("Enter 1 for rock, 2 for paper and 3 for scissor\n");
        int i;
        scanf("%d",&i);
        switch(i){
            case 1:
            printf("%s chose rock!\n", name);
            break;
            case 2:
            printf("%s chose paper!\n", name);
            break;
            case 3:
            printf("%s chose scissor!\n", name);
            break;
        }
        /*srand(time(NULL));*/
        int j= rand()%3+1;
        //printf("%d\n", j);
        switch(j){
            case 1:
            printf("Bot chose rock!\n");
            break;
            case 2:
            printf("Bot chose paper!\n");
            break;
            case 3:
            printf("Bot chose scissor!\n");
            break;
        }
        
        if ((i == 1 && j == 3) || (i == 2 && j == 1) || (i == 3 && j == 2)) {
            printf("%s wins and gets one score\n", name);
            player += 1;
        } else if (i == j) {
            printf("It's a tie! No points awarded.\n");
        } else {
            printf("Bot wins and gets one point\n");
            bot += 1;
        }
        
        printf("score:\t%s=%d\tBot=%d\n",name, player, bot);

        n++;
    }
    if(player>bot){
        printf("Congratulations! winner is %s", name);
    }else if(player==bot){
        printf("The match is draw");
    }else{
        printf("You lost! Better luck next time");
    }

    return 0;
}