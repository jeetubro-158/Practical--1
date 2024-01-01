#include <stdio.h>
void main(){
    int a=10,b=5,temp;
    printf("Befroe swapping: \n a = %d & b = %d\n", a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: \n a = %d & b = %d\n", a,b);

}