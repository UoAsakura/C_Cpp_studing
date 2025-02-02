// # include <stdio.h>

// int main (void) {
//     char menu_item;
//     short menu_number = 0;

//     printf("a) learning english\n\
// b) learning C/C++\n\
// c) learning mathematic\n\
// d) learning Python\n");

//     if(scanf("%c", &menu_item) != 1) {
//         printf("Input error.");
//         return 0;
//     }
//     if (menu_item < 97) {
//         menu_item += 32;
//     }
//     menu_number = menu_item - 96;
//     if (menu_number < 1 || menu_number > 4) {
//         menu_number = -1;
//     }
//     printf("%d\n", menu_number);

    // switch(var) {B
    //     case 'c': printf("Hello");
    //     default: printf("Hello");
    //     case 'd': printf("Hello");
    // }
    // for (int i = 0; i < 127; i++) {
    //     printf("%d %c\n", i, i);
    // };
//     return 0;

// }


// #include <stdio.h>

// int show_menu(void)
// {
//     char menu_item;

//     printf("a) learning english\n\
// b) learning C/C++\n\
// c) learning mathematic\n\
// d) learning Python\n");

//     // здесь прописывайте функцию scanf() и оператор switch
//     if(scanf("%c", &menu_item) != 1) {
//         printf("Input error.");
//         return 0;}
//     if (menu_item < 97) {
//         menu_item += 32;
//     }
//     menu_item -= 96;
//     if (menu_item < 1 || menu_item > 4) {
//         menu_item = -1;
//     }
//     return menu_item;
// }


// int main(void)
// {
//     int item = show_menu();

//     // здесь выводите значение переменной item
//     printf("%d\n", item);

//     return 0;
// }


# include <stdio.h>

int main (void) {
    char var;
    scanf("%c", &var);
    // printf(var == '3' ? "yes\n" : "no\n");
    switch (var){
        case '3': 
            printf("yes\n");
            return 0;
        default : 
            printf("no\n");
    }
    return 0;
}
