
// #include "stdio.h"

// int main (void) {
//     int n, fibb_0 = 1, fibb_1 = 1;
//     scanf("%d", &n);
//     while(n > 1) {
//         printf("%d ", fibb_1);
//         fibb_1 += fibb_0;
//         fibb_0 = fibb_1 - fibb_0;
//         n--;
//     }
    
//     return 0;
// }



// #include "stdio.h"

// int main (void) {
//     int start, stop, i;
//     scanf("%d %d", &start, &stop);
//     i = start;
//     while(i < stop+1) {
//         if (i % 3 == 0 ) {
//             printf("%d ", i);
//         }        
//         i++;
//     }
//     return 0;
// }


// #include <stdio.h>

// int main (void) {
//     int var;
//     scanf("%d", &var);
//     while(1) {
//         if (var < 10) {
//             printf("yes");
//             return 0;
//         }        
//         if (var % 10 == var )
//             {printf("Hello!");}
//     }
//     return 0;
// }


// #include <stdio.h>

// int main (void) {
//     int start, size, count;
//     scanf("%d; %d; %d", &start, &size, &count);
//     for (int i = start; count > 0; count--) {
//         printf("%d ", i);
//         i += size;
//     }
//     return 0;
// }



// #include <stdio.h>

// int main (void) {
//     int count;
//     scanf("%d", &count);
//     for (int i = 0; i < count; i++, printf("=")) {
//     }
//     return 0;
// }




// #include <stdio.h>

// int main (void) {
//     int start, stop;
//     scanf("%d %d", &start, &stop);
//     for (int i = start; i < stop + 1; i % 2 == 0 ? printf("%d ", i++) : i++) {
//     }
//     return 0;
// }

// #include <stdio.h>

// int main (void) {
//     int var;
//     scanf("%d", &var);
//     for (int i = 1; i < var; var % i == 0 ? printf("%d ", i++) : i++);
//     printf("%d\n", var);
//     return 0;
// }

// #include <stdio.h>

// int main (void) {
//     int var, sum=0;
//     scanf("%d", &var);
//     for (int i = 3; i < var; (i % 3 == 0) || (i % 5 == 0) ? sum+=i++ : i++);
//     printf("%d\n", sum);
//     return 0;
// }

// #include <stdio.h>

// int main (void) {
//     char var;
//     scanf("%u", &var);
//     if (!var) {return 0;} else {printf("%u", var);}; 
//     for (char i = 1; i; i++) {
//         if (scanf("%u", &var) != 1) {
//             return 0;
//         };
//         if (var) {
//             printf("%u", var);
//         }
//     }

//     return 0;
// }



// #include <stdio.h>

// int main (void) {
//     int var;
//     scanf("%d", &var);
//     for (int i = 0; var; i++) {
//         printf("%d", var%10);
//         var /= 10;
//     }
//     return 0;

// }


// #include <stdio.h>

// int main (void) {
//     int var;
//     scanf("%d", &var);
//     short pre_half = var / 1000;
//     short post_half = var % 1000;
//     char sum_pre_half=0, sum_post_half=0;
//     for (int i=0; i < 3; i++) {
//         sum_pre_half += pre_half % 10;
//         pre_half /= 10;
//         sum_post_half += post_half % 10;
//         post_half /= 10;
//     }

//     printf(sum_pre_half==sum_post_half ? "yes" : "no");
//     return 0;
// }


// #include <stdio.h>

// int main (void) {
//     // Инициализируем стартовую и завершающую переменные i, stop.
//     // При помощи тернарного оператора выводим все чётные числа в заданом диапазоне.
//     for (int i = 1, stop = 20; i < stop + 1; i % 2 == 0 ? printf("%d ", i++) : i++);
//     return 0;
// }



// #include "stdio.h"

// int main (void) {
//     int var, sum = 0;
//     do {
//         scanf("%d", &var);
//         var > 0 ? sum += var : NULL;
//         } while (var != 13);
//     printf("%d", sum);
//     return 0;
// }


// #include "stdio.h"

// int main (void) {
//     int var, i = 1;
//     double sum = 0.;
//     scanf("%d", &var);
//     do {
//             sum += 1. / i++;
//         } while (i < var + 1);
//     printf("%.2lf", sum);
//     return 0;
// }


// #include "stdio.h"

// int main (void) {
//     int var, i = 1, res = 1;
//     scanf("%d", &var);
//     do {
//         printf("%d ", i++);
//         res = i * i;
//         } while (res < var);
//     return 0;
// }


#include "stdio.h"

int main (void) {
    int var, i = 1;
    scanf("%d", &var);
    // yes: printf("no");
    while(1) {
        i++;
        if (var == i) {
            printf("yes");
            break;
        }
        if (var % i == 0) {
            printf("no");
            break;
        }
    }
    
    return 0;
}


















