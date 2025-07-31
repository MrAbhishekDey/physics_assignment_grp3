#include <stdio.h>
#include <math.h>

int main() {

    int m1 = 3;

    double lambda1_nm = 530;  
    double lambda1_m = lambda1_nm * 1e-9; // Convert nm to meters

    double degree = 65.0;
    double radian = degree * (3.1416 / 180.0);  // Convert degrees to radians

    double sinTheta = sin(radian);   // Correct: use sin() function

    double d = (m1 * lambda1_m) / sinTheta;

    printf("d = %.10lf meters\n", d);





    
    return 0;
}
