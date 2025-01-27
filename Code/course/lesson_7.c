// # include <stdio.h>
// # include <stdlib.h>
// # include <time.h>

// int main (void) {
//     // time_t t = time(NULL);

//     srand(time(NULL));

//     int range = 10;
//     int r_1 = rand() % range;

//     double range_float = (double)rand() / (double)RAND_MAX;

//     // printf("%d %d %.2f\n", r_1, rand(), range_float);
//     printf("%d %d %d %d\n", rand(),rand(),rand(),rand());
    
//     return 0;
// }


// # include <stdio.h>
// # include <stdlib.h>
// # include <time.h>

// int main (void) {

//     int N;
//     // scanf("%d", &N);
//     N = 5;
//     int num1, num2, num3, num4, num5, num6, num7;
//     num1 = rand() % (N + 1);
//     num2 = rand() % (N + 1);
//     num3 = rand() % (N + 1);
//     num4 = rand() % (N + 1);
//     num5 = rand() % (N + 1);
//     num6 = rand() % (N + 1);
//     num7 = rand() % (N + 1);

//     printf("%d %d %d %d %d %d %d\n", num1, num2, num3, num4, num5, num6, num7);
//     return 0;
// }


#include <stdio.h>

int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

    // здесь продолжайте программу
    int count_days = 7, count_bags = 100;
    printf("%d \n", N / count_bags);


    return 0;
}

















