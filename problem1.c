#include <stdio.h>
#include <math.h>

double calculateTheta(double wavelength_nm, int m, double a_um) {

    double wavelength_m = wavelength_nm * 1e-9;  // Convert nm to meters
    double a_m = a_um * 1e-6;                    // Convert µm to meters

    double sinTheta = (m * wavelength_m) / a_m;

    if (sinTheta > 1.0)
        return -1;

    double radians = asin(sinTheta);

    return radians * (180.0 / 3.1416);  // degree conversion
}
int main() {

    double lambda;        
    int m;
    double a[4];          
    double theta[4];

    printf("Enter wavelength (380nm - 750nm): ");
    scanf("%lf", &lambda);

    if (lambda < 380 || lambda > 750) {
        printf("Out of range. Please enter a valid number.\n");
        return 0;
    }

    printf("Enter order of diffraction (m): ");
    scanf("%d", &m);

    printf("Enter 3 values of slit width,a (in micrometer): \n");
    for (int i = 1; i < 4; i++) {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);}
    
    for (int i = 1; i < 4; i++) {
        theta[i] = calculateTheta(lambda, m, a[i]);

        if (theta[i] == -1) {
            printf("Invalid diffraction angle for a[%d]. sin(theta) > 1\n", i);
        } 
        else {
            printf("Theta[%d] = %.2f degrees\n", i, theta[i]);
        }
    }
    


    return 0;
}
