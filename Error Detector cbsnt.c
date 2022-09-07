#include<stdio.h>
#include<math.h>
void roundnum()
{
    int num,temp,check,roundoff;
    printf("Enter the number: "); scanf("%d",&num); printf("\n");
    if(num>0) {
        temp = num*10;
        check = temp%10;
        if(check>=5) {
            roundoff = num;
            roundoff++;
        }
        else {
            roundoff = num;
        }
        printf("Round off is: %d\n",roundoff);
    }
    else if(num<0) {
        num = -(num);
        temp = num*10;
        check = temp%10;
        if(check>=5) {
            roundoff = num;
            roundoff--;
        }
        else {
            roundoff = num;
        }
        printf("Round off is: -%d\n",roundoff);
    }
    else {
        printf("Number is 0 ...");
    }
}

void truncate()
{
    double ep,er,ea,x,y,x1;
    x = 1.7643923;
    x1 = 1.7644;
    ea = fabs(x-x1);
    er = ea/x;
    ep = er*100;
    printf("Absolute error is: %f\n",ea); printf("Relative error is: %f\n",ea); printf("Percentage error is: %f\n",ea);
}

int main()
{
    int choice,n=3;
    printf("Enter the choice: 1-Roundoff, 2-Truncate\n"); scanf("%d",&choice);
    while(n!=0)
    {
        switch(choice)
        {
            case 1: { roundnum(); break; }
            case 2: { truncate(); break; }
            default:{ printf("Invalid Choice!\n"); break; }
        }
    }
    return 0;
}
