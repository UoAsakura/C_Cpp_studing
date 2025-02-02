#include <stdio.h>

// int main(void)
// {
//     int value = getchar(); // Запрашиваем символ из входного потока.
//     int resutl = putchar(value); // Печатаем символ из входного потока.
//     printf("\n%d\n", resutl);
//     return 0;
// }


// int main(void)
// {
//     int value_1 = getchar();
//     int value_2 = getchar();
//     putchar(value_2);
//     // printf("%d = %c \n%d = %c\n", value_1, value_1, value_2, value_2);
//     return 0;
// }


// int main (void)
// {   
//     char var_0 = 'd';
//     short var_1 = 25000;
//     long double var_2 = -10354345.3446345;
//     printf("[%u]\n", var_1);
//     printf("[%10.1Lf]\n", var_2);
//     printf("%c", var_0);
//     return 0;
// }



int main(void)
{
    unsigned char h = 12, m = 3, s = 9;

    // здесь продолжайте программу
    printf("0x%02x:0x%02x:x%02x\n", h, m, s);
    return 0;
}