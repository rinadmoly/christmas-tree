#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av){
    if(ac != 2) return 0;
    int x = atoi(av[1]);


    int space, finalStar, star =1, row = 4, counter = 2;

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < row; j++)
        {
            star = star + 2;
        }
        if(i>0 && i%2 == 0) counter += 2;

        finalStar = star;
        star = star -2 - counter;
        row++;
    }
  
    space = finalStar/2 -1;
    row = 4;
    star = 1;
    counter = 2;
    for(int i = 0; i < x; i++)
    {
        for(int l = 0; l< row;l++)
        {
            for(int j = 0; j < space; j++)
            {
                printf(" ");
            }
            for(int k = 0; k < star; k++)
            {
                printf("*");
            }
            star = star + 2;
            space -=1;
            printf("\n");
        }
        if(i>0 && i%2 == 0) counter += 2;
        star = star-2 - counter;
        space = space + 1 + counter/2;
        row++;
    }

    if(x%2 == 0){
        space = (finalStar - x)/2;
    }
    else{
        space = (finalStar - x)/2-1;
    }
    for(int  i = 0; i<x; i++)
    {    
        for(int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for(int j = 0; j<x; j++)
        {
            printf("|");
        }
        printf("\n");
    }
}