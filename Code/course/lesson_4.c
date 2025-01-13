#include <stdio.h>

// int main(void)
// {
//     // здесь продолжайте программу
//     // double result = ;
//     int a, b, h;
//     int ar =6;
//     double cher = 0.;
//     scanf("%d, %d, %d", &a, &b, &h);
//     float result = (a + b) * h / (float) 2;
//     printf("%.1f\n", result);
// }

// int main (void)
// {
//     int c, d;
//     int a = 34; int b = 56;
//     scanf("%d%d", &c, &d);
//     printf("%d,%d\n", c, d);
//     printf("%d,%d\n", a, b);
//     printf("%d, %d\n", a, b);
//     return 0;
// }

// #include <math.h>

// int main (void)
// {
//     double a = 14.5, b = 65.3;
//     int c = fabs(-65);
//     double max_ab = (a > b) ? a : b;
//     printf("%.2lf\n", max_ab);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int k, m;
//     if(scanf("%d, %d", &k, &m) != 2) {
//         printf("Input error.");
//         return 0;
//     }

//     // здесь продолжайте программу
//     printf("%d\n", (k < m) ? k * k : m * m);
//     return 0;
// }

int main(void)
{
    short type = 0;
    double w, h;
    double result;
    if(scanf("%hd %lf %lf", &type, &w, &h) != 3) {
        printf("Input error.");
        return 0;
    }

    // здесь продолжайте программу
    result = (1 <= type && type <= 2) ? ((type == 1) ? w * h : (w + h) * 2) : 0;
    if (result)
        printf("%.1lf\n", result);
    else
        printf("%d\n", -1);
    return 0;
}