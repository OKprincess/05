//
//  main.c
//  05_P4
//
//  Created by ok sojoung on 2023/10/05.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum = 0;
    int num,i;
    
    printf("input a number :");
    scanf("%d", &num);
    
    for(i=0; i<=num; i++)
    {
        sum = sum + i;
    }
    
    printf("The result is %d.\n", sum);
    
    return 0;
}
