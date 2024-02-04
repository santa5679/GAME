#include <stdio.h>
#include "f.h"
#define rows 12
#define column 31
char area[rows][column]={
        "//////////////////////////////",
        "/                            /",
        "/                            /",
        "/                            /",
        "/                            /",
        "/                            /",
        "/                            /",
        "/                            /",
        "/                            /",
        "/                            /",
        "/                            /",
        "//////////////////////////////"
};
// функція для виведення ігрового поля
void space() {
    for (int i = 0; i < rows; i++) {
        printf("%s\n", area[i]);
    }
}
// функція для переміщення гравця
void move(struct Point *p) {
    // оновлення похиції гравця
    char a;
    scanf("%c",&a);
    switch (a) {
        case 'w':
            if ((p->y) > 1) {
                area[p->y--][p->x] = ' ';
                area[p->y][p->x]     = 'x';
            }
            break;
        case 'a':
            if ((p->x) > 1) {
                area[p->y][p->x--] = ' ';
                area[p->y][p->x]     = 'x';
            }
            break;
        case 's':
            if ((p->y) < rows - 1){
                area[p->y++][p->x] = ' ';
                area[p->y][p->x]     = 'x';
            }
            break;
        case 'd':
            if ((p->x) < column - 1) {
                area[p->y][p->x++] = ' ';
                area[p->y][p->x]     = 'x';
            }
            break;
    }
}