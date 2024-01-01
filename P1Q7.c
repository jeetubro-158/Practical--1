#include <stdio.h>
#include <math.h>
void main(){
    int l,vol;
    // volume of cube
    l = 4;
    vol = pow(l,3);
    printf("Volume of Cube = %d\n", vol);
    // volume of Sphare
    float r=5,volume;
    printf("volume of Sphare = %f\n", (4/3*3.14*pow(r,2)));
    // Volume of Cylinder
    int radius,h;
    double cylvol;
    r=10, h=8;
    printf("The volume of Cylinder = %lf\n", (3.14*pow(r,2)*h));

}