//
//  main.c
//  05_P3
//
//  Created by ok sojoung on 2023/10/05.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c, num; //char로 선언해도 괜찮
    num = 0;
    printf("input a string :");
    
    while ( (c = getchar()) != '\n')    //문자를 하나씩 가져오는 함수
    {
        if ( ( c >= '0') && ( c <= '9') )
        {
            num = num+1;
        }
    }
    
    printf("the number of digits is %d.\n", num);
    
    return 0;
}
