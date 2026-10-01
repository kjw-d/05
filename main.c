#include <stdio.h>

int main(void) {
    int num;
    int sum = 0;        // 초기화 코드!!
    int i;                  

    printf("Input a integer: ");
    scanf("%i", &num);

    for (i = 0; i < num; i++) 
    {
        sum = sum + i +1;
    }

    printf("The result is %i\n", sum);

    return 0;
}