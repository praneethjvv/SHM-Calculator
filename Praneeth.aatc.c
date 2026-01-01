#include <stdio.h>
#include<math.h>
#define pi 3.142
int main() {
   double mass, spring_constant, displacement;
    double angular_frequency, frequency, period, restoring_force;
    printf("Enter The mass(kg)");
    scanf("%lf",&mass);
    printf("Enter the Displacement from equlibrium(m)");
    scanf("%lf",&displacement);
     printf("Enter the spring constant (N/m): ");
    scanf("%lf", &spring_constant);
    angular_frequency = sqrt(spring_constant / mass);
 frequency = angular_frequency / (2 * pi);
period = 1 / frequency;
restoring_force = -spring_constant * displacement;
  printf("\n--- SHM Calculation Results ---\n");
    printf("Angular Frequency of SHM  (rad/s): %.4f\n", angular_frequency);
    printf("Frequency of SHM  (Hz): %.4f\n", frequency);
    printf("Time Period of The SHM (s): %.4f\n", period);
    printf("Restoring Force (N) at given displacement: %.4f\n", restoring_force);

    return 0;
}
