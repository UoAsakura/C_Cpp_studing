// #include <stdio.h>

// int main(void)
// {
//     unsigned char b, not_b;
//     scanf("%hhu", &b);

//     // здесь продолжайте программу
//     not_b = ~b;
//     printf("%u\n", not_b);

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     unsigned char bits;
//     scanf("%hhu", &bits);
    

//     // здесь продолжайте программу
//     char check_var = 40;
//     char total = 40;
//     check_var = check_var & bits ;
//     if (check_var != (char) (40)) {
//         printf("%d\n", -1);
//     } else {
//         printf("%u\n", bits);
//     };
    
//     return 0;
// }



#include <stdio.h>

int main(void)
{

    unsigned int var_1, var_2;
    scanf("%u %u", &var_1, &var_2);

    printf( (var_2  & var_1) != 0 ? "yes\n" : "no\n");


    return 0;
}















