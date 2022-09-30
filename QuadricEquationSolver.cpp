#include <stdio.h>

void PRINT_WELCOME();
void PRINT_NUM_OF_ROOTS(int x);
void PRINT_ABC(int a, int b, int c);
void INPUT_ABC(int* a, int* b, int* c);
void PRINT_EQUATION(int a, int b, int c);


#define EPS 0.000001


int main ()
    {
            //int Num_roots = 2;
            int A = 0;
            int B = 0;
            int C = 0;

            PRINT_WELCOME();
            INPUT_ABC(&A, &B, &C);
            PRINT_ABC(A, B, C);
            PRINT_EQUATION(A, B, C);
            //NUM_OF_ROOTS(A, B, C);
            //PRINT_NUM_OF_ROOTS(Num_roots);
            return 0;
    }



void PRINT_WELCOME()
    {
           printf("##########################\n");
           printf("######Done by Andrey######\n");
           printf("##########################\n");
    }



void PRINT_EQUATION(int a, int b, int c)
    {
           printf("Your equation is: (%d)*x^2+(%d)*x+(%d)=0", a, b, c);
    }

void PRINT_ABC(int a, int b, int c)
    {
        printf("A:%d\n", a);
        printf("B:%d\n", b);
        printf("C:%d\n", c);
    }

void INPUT_ABC(int* a, int* b, int* c)
    {
           scanf("%d%d%d", a, b, c);
    }






