# include <stdio.h>
int getchoice(void);
int print_square(int size, char symbol);
void getsymbol(char *symbol_ptr);
int getsize(void);
int print_rhombus(int size, char symbol);
int print_right_triangle(int size, char symbol);
int print_triangle(int size, char symbol);

int main () {
    int choice;
    int size;
    char symbol;
    for (; choice != -1;) {
        choice = getchoice();
        if (choice > -1) {
            getsymbol(&symbol);
            size = getsize();
            if (choice==0) print_square(size ,symbol);
            if (choice==1) print_rhombus(size, symbol);
            if (choice==2) print_right_triangle(size, symbol);
            if (choice==3) print_triangle(size, symbol);
        }
    }
    return 0;
}

//epilogh xrhsth
int getchoice(void) {
    printf("choose shape\n0 : square\n1 : rhombus\n2 : right trianlge\n3 : triangle\n-1 : exit\n");
    int choice;
    scanf("%d",&choice);
    return choice;
}

int getsize(void) {
    printf("Choose size\n");
    int size;
    scanf("%d",&size);
    return size;
}

void getsymbol(char *symbol_ptr) {
    printf("Choose symbol\n");
    scanf(" %c",symbol_ptr);
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