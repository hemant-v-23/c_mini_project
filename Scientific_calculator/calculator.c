#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#define PI 3.14159265

struct vals{

    int x;

    int y;

    int n;

};

enum num {num1=1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,num16};

int h=0.0;

typedef struct vals val;

int addition(int x, int y);

int subtraction(int x, int y);

int multiplication(int x,int y);

int division(int x, int y);

int power(int x,int y);

int square(int x);

int cube(int x);

int sine(int  x);

int cosine(int x);

int tangent(int x);

int sineh(int x);

int cosineh(int x);

int tangenth(int x);

int logten(int x);

int squareroot(int x);

int main_call()

{

    val val;

    int *answer;

    answer=(int*) malloc(sizeof(int));

    printf("*   *   *   *   *   *   SCIENTIFIC  CALCULATOR  ON  *   *   *   *   *   *\n");

    while (1)

    {

        printf("What do you want to do?\n");

        printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.x ^ y\n6.x ^ 2\n7.x ^ 3\n8.sin\n9.cos\n10.tan\n11.sinh\n12.cosh\n13.tanh\n14.1og10\n15.square root\n16.exit\n");

        scanf("%d",&val.n);

        switch (val.n)

        {

            case num1: printf("enter the value of x and y\n");

                    scanf ("%d%d",&val.x,&val.y);

                    int (*add_ptr)(int,int) = &addition;

                    *answer = (*add_ptr)(val.x,val.y);

                    printf("%d\n",*answer);     

                    break;

            case num2: printf("enter the value of x and y\n");

                    scanf ("%d%d",&val.x,&val.y);

                    int (*sub_ptr)(int,int) = &subtraction;

                    *answer = (*sub_ptr)(val.x,val.y);

                    printf("%d\n",*answer);     

                    break;

            case num3: printf("enter the value of x and y\n");

                    scanf ("%d%d",&val.x,&val.y);

                    int (*mul_ptr)(int,int) = &multiplication;

                    *answer = (*mul_ptr)(val.x,val.y);

                    printf("%d\n",*answer);     

                    break;

            case num4: printf("enter the value of x and y\n");

                    scanf ("%d%d",&val.x,&val.y);

                    int (*div_ptr)(int,int) = &division;

                    *answer = (*div_ptr)(val.x,val.y);

                    printf("%d\n",*answer);     

                    break;

            case num5: printf("enter the value of x and y\n");

                    scanf ("%d%d",&val.x,&val.y);

                    *answer = power(val.x,val.y);

                    printf("%d\n",*answer);     

                    break;

            case num6: printf("enter the value of x\n");

                    scanf ("%d",&val.x);

                    *answer = square(val.x);

                    printf("%d\n",*answer);     

                    break;

            case num7: printf("enter the value of x\n");

                    scanf ("%d",&val.x);

                    *answer = cube(val.x);   

                    printf("%d\n",*answer);  

                    break;

            case num8: printf("enter the value of x\n");

                    scanf ("%d",&val.x);

                    *answer = sine(val.x);

                    printf("%d\n",*answer);     

                    break;

            case num9: printf("enter the value of x\n");

                    scanf ("%d",&val.x);

                    *answer = cosine(val.x);

                    printf("%d\n",*answer);     

                    break;

            case num10: printf("enter the value of x\n");

                    scanf ("%d",&val.x);

                    *answer = tangent(val.x);

                    printf("%d\n",*answer);     

                    break;

            case num11: printf("enter the value of x\n");

                    scanf ("%d",&val.x);

                    *answer = sineh(val.x);

                    printf("%d\n",*answer);     

                    break;

            case num12: printf("enter the value of x\n");

                    scanf ("%d",&val.x);

                    *answer = cosineh(val.x);

                    printf("%d\n",*answer);     

                    break;

            case num13: printf("enter the value of x\n");

                    scanf ("%d",&val.x);

                    *answer = tangenth(val.x);

                    printf("%d\n",*answer);     

                    break;

            case num14: printf("enter the value of x\n");

                    scanf ("%d",&val.x);

                    *answer = logten(val.x);

                    printf("%d\n",*answer);     

                    break;

            case num15: printf("enter the value of x\n");

                    scanf ("%d",&val.x);

                    *answer = squareroot(val.x);

                    printf("%d\n",*answer);     

                    break;

            case num16: printf("*   *   *   *   *   *   SCIENTIFIC  CALCULATOR  OFF  *   *   *   *   *   *\n"); free(answer); exit(0);

            default: printf("enter a valid input\n");

                     break;

        }

    }

}

int sine(int x)

{

    h=sin (x*PI/180);

    return h;

}

int cosine(int x)

{

    h=cos (x*PI/180);

    return h;

}

int tangent(int x)

{

    h=tan(x*PI/180);

    return h;

}

int sineh(int x)

{

    h=sinh(x);

    return h;

}

int cosineh(int x)

{

    h=cosh(x);

    return h;

}

int tangenth(int x)

{

    h=tanh(x);

    return h;

}

int logten(int x)

{

    h=log10(x);

    return h;

}

int squareroot(int x)

{

    h=sqrt(x); return h;

}

int addition(int x, int y)

{

    h=x+y; return h;

}

int subtraction(int x, int y)

{

    h=x-y; return h;

}

int multiplication(int x,int y)

{

    h=x*y; return h;

}

int division(int x, int y)

{

    int h=0;

    if (x==0 || y==0)

    {

        return h;

    }

    h=x/y; return h;

}

int power(int x,int y)

{

    h=pow(x,y); return h;

}

int square(int x)

{

    h=x*x; return h;

}

int cube(int x)

{

    h=x*x*x; return h;

}