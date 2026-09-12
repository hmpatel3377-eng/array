/* Name = Hetkumar Maheshbhai Patel

write a program to count the number of students belonging to each of following groups of marks 0-9,10-19,20-29,.....,100
  */

#include<stdio.h>
#define MAXVAL 50
#define COUNTER 11

int main()
{
    float value[MAXVAL];
    int i,low,high;
    int group[COUNTER] = {0,0,0,0,0,0,0,0,0,0,0};


    for ( i = 0; i < MAXVAL; i++)
    {
        scanf("%f",&value[i]);
        ++ group[(int) (value[i])/10];  /* count kare ne kiae liyae ++ ka use hota hae kii hamne group mae 0 0 0 0 0 0 0 0 0 0 
        value too dae di par vaha voo ++ ki madaad sae 1 add kar daga is liye vaha 1 count hoga */
    }
    printf("\n");
    printf("GROUP   RANGE   FREQUENCY\n\n");

    for ( i = 0; i < COUNTER ; i++)
    {
        low = i * 10;
        if (i == 10)
        {
            high = 100;

        }

        else
        {
            high = low + 9;
            printf("%2d %3d to %3d %d\n ",i+1,low,high,group[i]);
                
        }
        
    }
    
    

    
    return 0;

}