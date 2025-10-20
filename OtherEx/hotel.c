#include <stdio.h>

void sayHotel(){
//     Vad kostar hotellet per natt? 2200
// Hur många nätter?3 
// Det blir 6600kr
    float pricePerNight = 0.0f;
    int nights = 0;

    printf("How much does it cost per night? ");
    scanf("%f", &pricePerNight);
    printf("How many nights? ");
    scanf("%d", &nights);
    printf("It becomes %.2f\n", pricePerNight * nights);
}