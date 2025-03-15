# include <stdio.h>
int getchoice(void);
int print_square(int size, int symbol);
int getsize(void);
int print_rhombus(int size, int symbol);
int print_right_triangle(int size, int symbol);
int print_triangle(int size, int symbol);
int printtimes_(int times);
int printtimes_char(int times, int symbol);
int print_next_line(void);
int main () {
    int choice;
    int size;
    char symbol;
    for (; choice != -1;) {
        choice = getchoice();
        if (choice > -1) {
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

//sxhmata
int print_square(int size, int symbol) {
    printtimes_char(size, symbol=1);
    print_next_line();
    int j;
    for (j=0; j<(size-2); j++) {
        printtimes_char(1,(j+2));
        printtimes_(size-2);
        printtimes_char(1,(j+2));
        print_next_line();
    }
    printtimes_char(size, size);
    print_next_line();
       
    return 0;
}
int print_rhombus(int size, int symbol) {
    int i;
    int center;
    center = size/2;
    printtimes_(center);
    printtimes_char(1, symbol=1);
    print_next_line();

    for (i=1; i<(center +1); i++) {   //mexri th mesaia grammh
        printtimes_(center -i);
        printtimes_char(1, (i+1));
        printtimes_(2*i -1);
        printtimes_char(1, (i+1));
        print_next_line();
    }

    for (i=(size - center -1); i>1; i--) {   //katv apo th mesaia grammh
        printtimes_(center +1 -i);
        printtimes_char(1, (size +1 -i));
        printtimes_(2*i -3);
        printtimes_char(1, (size +1 -i));
        print_next_line();
    }

    printtimes_(center);
    printtimes_char(1, size);
    print_next_line();
    return 0;
}
   


int print_right_triangle(int size, int symbol) {
    printtimes_char(1, symbol=1);
    print_next_line();
    int i;
    for (i=1; i<(size-1); i++) {
        printtimes_char(1, (i+1));
        printtimes_(i-1);
        printtimes_char(1, (i+1));
        print_next_line();
    }
    printtimes_char(size, size);
    print_next_line();
    return 0;
}
   

int print_triangle(int size, int symbol) {
    int i;
    for (i=0; i<1; i++) {
        int k;
        for (k=size; k>0; k--) {
            printf(" ");
        }
        printtimes_char(1,symbol=1);
        print_next_line();
    }
    for (i=1; i<(size-1); i++) {
        int j;
        for (j=(size - i); j>0; j--) {
            printf(" ");
        }
        printtimes_char(1,(i+1));
        printtimes_(2*i-1);
        printtimes_char(1,(i+1));
        print_next_line();
    }
    printf(" ");
    printtimes_char((2*size -1), size);
    print_next_line();
    
    return 0;
}
//koines diergasies
int printtimes_(int times) {
    int i;
    for (i=0; i<times; i++) {
        printf("-");
    }
    return 0;
}
int printtimes_char(int times, int line) {
    int k;
    for (k=0; k<times; k++) {
        printf("%d", line);
    }
    return 0;
}
int print_next_line(void) {
    printf("\n");
    return 0;
}