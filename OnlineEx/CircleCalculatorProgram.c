#include <stdio.h>
#include <math.h>

int main()
{
    double radius = 0.0;
    double area = 0.0;
    double surface = 0.0;
    double volume = 0.0;
    const double pi = 3.14159;

    // printf("%lf", radius);
    // printf("%lf", area);
    // printf("%lf", surface);
    // printf("%lf", volume);
    // printf("%lf", pi);


    printf("Enter the radius: ");
    scanf("%lf", &radius);

    
    area = pi * pow(radius,2);
    surface = 4 * pi * pow(radius,2);
    volume = pi * pow(radius, 3) * 4 / 3;

    printf("Area: %.2lf\n", area);
    printf("Surface: %.2lf\n", surface);
    printf("Volume: %.2lf\n", volume);

    return 0;
}