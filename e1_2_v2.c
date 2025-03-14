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
    int i;
    for (i=0; i<size; i++) {
        if (i==(size -1)) {
            printf("%c\n", symbol);
            break;
        }
        printf("%c", symbol);
    }
    int j;
    for (j=0; j<(size-2); j++) {

        printf("%c", symbol);
        int k;
        for (k=0; k<(size-2); k++) {
            printf("-");
        }
        printf("%c\n", symbol);
    }
    int l;
    for (l=0; l<size; l++) {
        if (l==(size-1)) {
            printf("%c\n", symbol);
            break;
        }
        printf("%c", symbol);
    }
       
    return 0;
}
int print_rhombus(int size, char symbol) {
    int i;
    int center;
    center = size/2;
    for (i=0; i<1; i++) {  //1h grammh
        int k;
        for (k=(center - i); k>0; k--) {
            printf("-");
        }
        for (k=1; k>0; k--) {
            printf("%c\n", symbol);
        }
    }

    for (i=1; i<(center+1); i++) {   //mexri th mesaia grammh
        int j;
        for (j=(center-i); j>0; j--) {
            printf("-");
        }
        for (j=1; j>0; j--) {
            printf("%c", symbol);
        }
        for (j=(2*i -1); j>0; j--) {
            printf("-");
        }
        for (j=1; j>0; j--) {
            printf("%c\n", symbol);
        }
    }

    for (i=(size - center -1); i>1; i--) {   //katv apo th mesaia grammh
        int l;
        for (l=(center + 1 - i); l>0; l--) {
            printf("-");
        }
        for (l=1; l>0; l--) {
            printf("%c", symbol);
        }
        for (l=(2*i - 3); l>0; l--) {
            printf("-");
        }
        for (l=1; l>0; l--) {
            printf("%c\n", symbol);
        }
    }

    for (i=0; i<1; i++) {  //teleutaia grammh
        int k;
        for (k=(center - i); k>0; k--) {
            printf("-");
        }
        for (k=1; k>0; k--) {
            printf("%c\n", symbol);
        }
    }
    return 0;
}


int print_right_triangle(int size, char symbol) {
    int i;
    for (i=0; i<1; i++) {
        printf("%c\n", symbol);
    }
    for (i=1; i<(size-1); i++) {
        printf("%c", symbol);
        int j;
        for (j=(i-1); j>0; j--){
            printf("-");
        }
        printf("%c\n", symbol);
    }
    for (i=0; i<1; i++) {
        int k;
        for (k=0; k<size; k++) {
            printf("%c", symbol);
        }
        printf("\n");
        
    }
    return 0;
}
   

int print_triangle(int size, char symbol) {
    int i;
    for (i=0; i<1; i++) {
        int k;
        for (k=size; k>0; k--) {
            printf(" ");
        }
        printf("%c\n", symbol);
    }
    for (i=1; i<(size-1); i++) {
        int j;
        for (j=(size - i); j>0; j--) {
            printf(" ");
        }
        printf("%c", symbol);
        
        for (j=(2*i -1); j>0; j--) {
            printf("-");
        }
        printf("%c\n", symbol);
    }
    for (i=0; i<1; i++) {
        printf(" ");
        int l;
        for (l=(2*size-1); l>0; l--) {
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}







