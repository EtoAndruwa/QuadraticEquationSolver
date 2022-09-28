#include <stdio.h>   
#include <math.h>

void INFO();
double INPUT(double * A, double * B, double * C);
void PRINT(int NumOfRoots, double A, double B, double C, double DiscrValue, double x1, double x2);
int NUM_OF_ROOTS(double A, double B, double C);
double ROOTS_CALCULATE(double B, double A, double  DiscrValue, double * x1, double * x2);

int main()
    {   
        double A = 0.0;
        double B = 0.0;
        double C = 0.0;
        double x1 = 0.0;
        double x2 = 0.0;
        double DiscrValue = 0.0;
        int NumOfRoots = 0;
        1
        INFO(); 
        INPUT(&A, &B, &C);
        DiscrValue = B*B-4.0*A*C;
        NumOfRoots = NUM_OF_ROOTS(A, B, C);
        ROOTS_CALCULATE(A, B, DiscrValue, &x1, &x2);

        PRINT(A, B, C, DiscrValue, NumOfRoots, x1, x2);
        getchar();
        getchar();
    }

void INFO(void)
    {
        printf("#######################################################\n");
        printf("EquationSolver - program for solving quadratic equation\n");
        printf("#######################################################\n\n");
    }
double INPUT(double * A, double * B, double * C)
    {   
        printf("Equation A*x^2+B*x+C=0\n\n");
        int check;

        for (int char_number = 'A'; char_number <= 'C'; char_number++)
        {
            do
            {
                printf("Enter %c: ", char_number);
                if(char_number==65)
                    {
                        check=scanf("%lf", A);
                    } 
                else if(char_number==66)
                    {
                        check=scanf("%lf", B);
                    }
                else 
                    {
                        check=scanf("%lf", C);
                    }
                while(getchar()!='\n');
            }
            while(check != 1); 
        }
        printf("Your equation: %lf*x^2+%lf*x+%lf=0\n\n", *A, *B, *C);
    }
void PRINT(int NumOfRoots, double A, double B, double C, double DiscrValue, double x1, double x2)
    {
        printf("DiscrValue: %lf \n", DiscrValue);
        printf("Number of roots: %d \n", NumOfRoots);
        printf("x1: %lf \n", x1);
        printf("x2: %lf \n", x2);

    }
int NUM_OF_ROOTS(double A, double B, double C)
    {  
        if(A==0)
            {
                if(B==0)
                    {
                        if(C==0)
                            {
                               return 1;
                            }
                        else
                            {
                                return 0;
                            }
                    }
                else
                    {
                        if(C==0)
                            {
                                return 1;
                            }
                        else
                            {
                                return 0;
                            }
                    }
            }
            else
            {
                if(B==0)
                    {
                        if(C==0)
                            {
                               return 1;
                            }
                        else
                            {
                                return 0;
                            }
                    }
                else
                    {
                        if(C==0)
                            {
                                return 1;
                            }
                        else
                            {
                               
return 1;
                            }
                    }
            }
    }
double ROOTS_CALCULATE(double B, double A, double  DiscrValue, double * x1, double * x2)
    {   printf("A%lf\n", A);
        printf("B%lf\n", B);
        printf("Disce%lf\n", DiscrValue);
        printf("x2%lf\n", x2);
        printf("x1%lf\n", x1);
        *x1=(-B-DiscrValue)/(2.0*A);
        *x2=(-B+DiscrValue)/(2.0*A);
    }
