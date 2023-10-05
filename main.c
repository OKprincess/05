//
//  main.c
//  05_P2
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
    
    if ( input < 0 )
    {
        input = -input;
    }
    
    printf("절댓값은 %d 입니다.\n", input);
    
    return 0;
}
