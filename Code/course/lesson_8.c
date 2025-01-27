// #include <stdio.h>
 
// #define FIVE    5
// #define TEN     2 * FIVE
// #define TEXT    "Text message in one line"
// #define TEXT2   "Text message in \
// two line"
// #define PRINT_D  printf("digit = %d\n", digit)
// #define FORMAT  "digit = %d\n"
 
// int main(void)
// {
//     int digit = FIVE;
//     PRINT_D;

//     digit = TEN;
//     printf(FORMAT, digit);
//     printf(TEXT "\n");
//     printf(TEXT2 "\n");
    
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// // здесь определяйте макрос PI
// #define PI      3.1415
// #define GRAD    180 / PI  // здесь формула перевода из радиан в градусы

// int main(void)
// {
//     double rad;
//     scanf("%lf", &rad);
//     printf("%.2lf\n", rad * GRAD);
//     // здесь продолжайте программу

//     return 0;
// }


// #include <stdio.h>

// #define MAX_WIDTH   256
// #define MAX_HEIGHT  500

// int main (void) {

//     double width, height;
//     scanf("%lf %lf", &width, &height);
//     if (width > MAX_WIDTH) {
//         width = 256.;
//     }
//     if (height > MAX_HEIGHT) {
//         height = 500.;
//     }
//     printf("%.1lf %.1lf\n", width, height);
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// #define MAX_LENGTH  100

// int main (void) {

//     int width, height;
//     scanf("%d %d", &width, &height);
//     double tmp = sqrt((double) ( (width * width ) + (height * height) ) );
//     MAX_LENGTH < tmp ? 
//     printf("Radius length exceeds value of MAX_LENGTH") :
//     printf("%.2lf", tmp);

//     return 0;
// }

#include <stdio.h>

#define MAX_BUFF_SIZE  1024

int main (void) {

    int buff_size;
    scanf("%d",&buff_size);
    printf("%d\n", buff_size > MAX_BUFF_SIZE ? MAX_BUFF_SIZE : buff_size);

    return 0;
}














