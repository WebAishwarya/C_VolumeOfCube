#include <stdio.h>

int main() {
    float side = 4.05;
    float VolumeOfCube;
    
    VolumeOfCube = side * side * side;
    
    printf("Value of length of the side of cube : %.3f\n\n", side);
    printf("Volume of the cube : %.2f\n", VolumeOfCube);
    
    return 0;
}
