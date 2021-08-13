#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void Addition()
{
    printf("  Enter the numbers for Addition: ");
    float a,b;
    scanf("%f%f",&a,&b);
    printf("  %.3f + %.3f = %.3f",a,b,a+b);
}
void Subtraction()
{
    printf("  Enter the numbers for Subtraction: ");
    float a,b;
    scanf("%f%f",&a,&b);
    printf("  %.3f - %.3f = %.3f",a,b,a-b);
}
void Multiplication()
{
    printf("  Enter the numbers for Multiplication: ");
    float a,b;
    scanf("%f%f",&a,&b);
    printf("  %.3f * %.3f = %.3f",a,b,a*b);
}
void Division()
{
    printf("  Enter the numbers for Division: ");
    float a,b;
    scanf("%f%f",&a,&b);
    printf("  %.3f / %.3f = %.3f",a,b,a/b);
}
void Modulus()
{
    int a,b;
    printf("  Enter the numbers for Modulus: ");
    scanf("%d%d",&a,&b);
    printf("  %d Modulus of %d = %d",a,b,a%b);
}
void Power()
{
    float b,p,e;
    printf("  Enter the Base and the Power: ");
    scanf("%f%f",&b,&p);
    e = pow(b,p);
    printf("  (%.3f)^%.3f = %.3f",b,p,e);
}
void Factorial()
{
    float n,Factorial;
    printf("  Enter the numbers for Factorial: ");
    scanf("%f",&n);
    Factorial=1;
    for(int i=1;i<=n;i++)
        {
            Factorial=Factorial*i;
        }
    printf("  %.4f! = %.4f",n,Factorial);
}
void Square()
{
    float b,p;
    printf("  Enter the number for Squaring: ");
    scanf("%f",&b);
    p = pow(b,2);
    printf("  (%.3f)^2 = %.3f",b,p);
}
void Cube()
{
    float b,p;
    printf("  Enter the number for Cubing: ");
    scanf("%f",&b);
    p = pow(b,3);
    printf("  (%.3f)^3 = %.3f",b,p);
}
void Square_Root()
{
    float b,s;
    printf("  Enter the number for Square Rooting: ");
    scanf("%f",&b);
    s = sqrt(b);
    printf("  (%.3f)^0.5 = %.3f",b,s);
}
void Trigonometric_valuesinDegree()
{
    float n,r,a,b,c;
    printf("  Enter the value of angle: ");
    scanf("%f",&n);
    r = (3.14/180)*n;                 /// converting angle from Radian to DEGREE because math.h takes angle in RADIANS
    a = sin(r);
    b = cos(r);
    c = tan(r);

    printf("  sin(%.3f): %.3f\n",r,a);
    printf("  cos(%.3f): %.3f\n",r,b);
    printf("  tan(%.3f): %.3f",r,c);
}
void Trigonometric_valuesinRadian()
{
    float n,a,b,c;
    printf("  Enter the value of angle: ");
    scanf("%f",&n);
    a = sin(n);
    b = cos(n);
    c = tan(n);

    printf("  sin(%.3f): %.3f\n",n,a);
    printf("  cos(%.3f): %.3f\n",n,b);
    printf("  tan(%.3f): %.3f",n,c);
}
void Inverse_sin_values()
{
    float num,result;
    printf("  Enter the value: ");
    scanf("%f",&num);
    result = asin(num);
    printf("  Radian sin(%.3f) = %.3f\n",num,result);

    result = (result*180)/3.14;    /// here we need to find the angle so pi/180 goes to the opposite side and get multiplied by the result of sin inverse
    printf("  Degree sin(%.3f) = %.3f\n",num,result);
}
void Inverse_cos_values()
{
    float num,result;
    printf("  Enter the value: ");
    scanf("%f",&num);
    result = acos(num);
    printf("  Radian cos(%.3f) = %.3f\n",num,result);

    result = (result*180)/3.14;
    printf("  Degree cos(%.3f) = %.3f\n",num,result);
}
void Inverse_tan_values()
{
    float num,result;
    printf("  Enter the value: ");
    scanf("%f",&num);
    result = atan(num);
    printf("  Radian tan(%.3f) = %.3f\n",num,result);

    result = (result*180)/3.14;
    printf("  Degree tan(%.3f) = %.3f\n",num,result);
}
void Logarithm_values()
{
    float num,result;
    printf("  Enter the value: ");
    scanf("%f",&num);
    result = log(num);
    printf("  ln(%.3f) = %.3f\n",num,result);  /// Natural Logarithm(ln) = 2.303 log(x)
    result = result/2.303;
    printf("  log(%.3f) = %.3f",num,result);  /// Common Logarithm(log)
}


int main()
{
    system("Color B5");


    printf("\n\t\t\t******* SCIENTIFIC CALCULATOR *******\n\n");

    int choice;

    printf("  Press 0 to quit the program       \n");
    printf("  Enter 1 for Addition               \n");
    printf("  Enter 2 for Subtraction            \n");
    printf("  Enter 3 for Multiplication         \n");
    printf("  Enter 4 for Division               \n");
    printf("  Enter 5 for Modulus                \n");
    printf("  Enter 6 for Power                  \n");
    printf("  Enter 7 for Factorial              \n");
    printf("  Enter 8 for Square                 \n");
    printf("  Enter 9 for Cube                   \n");
    printf("  Enter 10 for Square Root           \n");
    printf("  Enter 11 for Trigonometric values in Degree  \n");
    printf("  Enter 12 for Trigonometric values in Radian  \n");
    printf("  Enter 13 for Inverse sin values    \n");
    printf("  Enter 14 for Inverse cos values    \n");
    printf("  Enter 15 for Inverse tan values    \n");
    printf("  Enter 16 for Logarithm values      \n");

    while(1){
        printf("\n\n  Enter the operation you want to operate: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                Addition();
                break;
            case 2:
                Subtraction();
                break;
            case 3:
                Multiplication();
                break;
            case 4:
                Division();
                break;
            case 5:
                Modulus();
                break;
            case 6:
                Power();
                break;
            case 7:
                Factorial();
                break;
            case 8:
                Square();
                break;
            case 9:
                Cube();
                break;
            case 10:
                Square_Root();
                break;
            case 11:
                Trigonometric_valuesinDegree();
                break;
            case 12:
                Trigonometric_valuesinRadian();
                break;
            case 13:
                Inverse_sin_values();
                break;
            case 14:
                Inverse_cos_values();
                break;
            case 15:
                Inverse_tan_values();
                break;
            case 16:
                Logarithm_values();
                break;
            case 0:
                exit(0);
            default:
                printf("\n  Enter Valid Operation\n");
        }
    }
    return 0;
}
