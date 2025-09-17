#include <stdio.h>
int main(){
char op;
printf("enter the operation(+,-,*,/): ");
scanf("%c",&op);
int a,b;
printf("enter value for a: ");
scanf("%d",&a);
printf("enter value for b: ");
scanf("%d",&b);
if (op=='+'){
    int c =a+b;
    printf("%d",c);
}
else if (op=='-'){
    int c=a-b;
    printf("%d",c);
}
else if (op=='*'){
    int c=a*b;
    printf("%d",c);
}
else{
    int c=a/b;
    printf("%d",c);
}
}

