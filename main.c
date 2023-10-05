//
//  main.c
//  05_P1
//
//  Created by ok sojoung on 2023/10/05.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int input;
    printf("정수 하나를 입력하시오 :");
    scanf("%d", &input);
    
    if ( input > 0 )
    {
        printf("양수입니다.\n");
    }
    else if ( input < 0 )
    {
        printf("음수입니다.\n");
    }
    else
    {
        printf("0 입니다.\n");
    }
    
    return 0;
}
