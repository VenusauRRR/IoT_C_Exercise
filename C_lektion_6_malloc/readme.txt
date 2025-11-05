Todays fun -- Git + malloc/calloc/realloc

Dessa övningar kommer bestå av att ni först individuellt försöker lösa övningen för att sedan hamna i par/grupp 
och kommer då behöva bjuda in varandra så att ni kan se varandras kod. Ni ska då under några minuter kolla igenom 
den/de andras lösningar genom att klona projektet till er egna dator. Ni ska därefter göra en brach med erat namn och skriva kommentarer i koden på de saker ni inte förstår. Om ni förstår allt så skriver ni en kommentar som säger det! Sedan blir det kort diskussion!

[Övning 1]

Skapa ett git-repo med namnet C_lektion_6_malloc

Lägg till en makefile + skapa en main.c

I main.c lägger ni till följande kod och komplementerar det som behövs:

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char type;
    size_t n;

    printf("Do you want to enter (i)nteger or (f)loat values? ");
    if (scanf(" %c", &type) != 1 || (type != 'i' && type != 'I' && type != 'f' && type != 'F')) {
        fprintf(stderr, "Invalid choice. Exiting.\n");
        return 1;
    }

    printf("How many values do you want to enter? ");
    if (scanf("%zu", &n) != 1) {
        fprintf(stderr, "Invalid number.\n");
        return 1;
    }
    if (n == 0) {
        printf("Nothing to do (n = 0).\n");
        return 0;
    }

    //TODO
    //Implement so that the user can enter the amount of specified values of specified type! Only positve values are allowed! --> valuse > 0
    //Print out the array of values after the user is done on the same row!
    

    return 0;
}


[Övning 2]
Modifiera Övning 1 så att vi istället använder calloc för att allokera utrymmet! Implementera också så att varje gång som användaren skriver in ett tal skriver vi ut hela arrayen! 


[Övning 3]
Time for next level! Fortsätt från övning 2 och implementera så att vi allokerar 10% extra utrymme initialt för vår sekvens. Vi gör som tidigare, skriver ut alla talen. Därefter ska användaren få möjlighet att välja att lägga till ett nytt antal av tal. Om det rymms i den tidigare sekvensen fyller vi bara på. Annars om-allokerar, dvs vi använder realloc, för att utöka vår nuvarande sekvens av tal så att alla tal rymms i samma sekvens. Skriv ut allt i slutet.


