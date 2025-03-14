# include <stdio.h>
int getchoice(void);
int print_square(int size, char symbol);
int getsymbol(void);
int getsize(void);
int print_rhombus(int size, char symbol);
int print_right_triangle(int size, char symbol);
int print_triangle(int size, char symbol);


int main () {
    int choice = 3; // dinw tyxaia timh gia na elegxw an leitourgei
    int size;
    char symbol;
    for (; choice != -1;) {
        choice = getchoice();
        if (choice > -1) {
            size = getsize();
            symbol = getsymbol();
            if (choice==0) print_square(size= 5 ,symbol= '@');
            if (choice==1) print_rhombus(size= 5, symbol= '@');
            if (choice==2) print_right_triangle(size= 5, symbol= '@');
            if (choice==3) print_triangle(size= 5, symbol= '@');
        }
    }
    return 0;
}

//epilogh xrhsth
int getchoice(void) {
    printf("getchoice\n");
    return 3;        // dinw tyxaia timh gia na elegxw an leitourgei
}

int getsize(void) {
    printf("getsize\n");
    return 0;
}

int getsymbol(void) {
    printf("getsymbol\n");
    return 0;

}

//sxhmata
int print_square(int size, char symbol) {
    printf("printsquare\n");
    printf("%d %c\n",size, symbol);
    return 0;
}
int print_rhombus(int size, char symbol) {
    printf("printrhombus\n");
    printf("%d %c\n",size, symbol);
    return 0;
}
int print_right_triangle(int size, char symbol) {
    printf("printrighttriangle\n");
    printf("%d %c\n",size, symbol);
    return 0;
}
int print_triangle(int size, char symbol) {
    printf("printtriangle\n");
    printf("%d %c\n",size, symbol);
    return 0;
}