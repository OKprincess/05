//
//  main.c
//  05_P6
//
//  Created by ok sojoung on 2023/10/05.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int answer = 59;
    int a;
    int trial = 0;
    
    do
    {
        printf("Guess a number :");
        scanf("%d", &a);
        
        if (a > answer)
        {
            printf("High!\n");
        }
        else if (a < answer)
        {
            printf("Low!\n");
        }
        else
        {}
        trial = trial + 1;
    }
        while ( a != answer );
    
    printf("Congratulation! Trial : %d\n", trial);
    
    return 0;
}
