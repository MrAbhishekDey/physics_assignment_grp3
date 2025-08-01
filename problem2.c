#include <stdio.h>
#include <math.h>

int main() {
    int m1 = 3;

    double lambda1_nm = 530;
    double lambda1_m = lambda1_nm * 1e-9; // Convert nm to meters

    double degree = 65.0;
    double radian = degree * (3.1416 / 180.0);  // Convert degrees to radians

    double sinTheta = sin(radian);   // use sin() function

    double d = (m1 * lambda1_m) / sinTheta;

    printf("d = %.10lf meters\n", d);  

  //.....Now.....//

 int m2 = 2;
double lambda2_nm = 700;
double lambda2_m = lambda2_nm * 1e-9; // Convert nm to meters

double sin_Theta2 = (m2 * lambda2_m) / d;

    if (sin_Theta2 > 1.0)
        return -1;

    double radians = asin(sin_Theta2);

    double theta2 =  radians * (180.0 / 3.1416);  // degree conversion

    printf("Theta is : %lf", theta2);

return 0;

}
