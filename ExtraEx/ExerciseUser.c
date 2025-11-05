// [USERS!!!!!!!!!]

// - Skapa en strängliteral anonymous_name "Jon Doe"
// - Skapa en int age som är lika med 0
// - Skapa en strängliteral anonymous_email "jon.doe@anonymous.com"
// - skapa en struct user som ska ha variablerna int age, char name[30], char email[50]. 
// - Skapa en array med 10 user:s där vi fyller arrayen med 10 user:s som har ovanstående standardvärden
// - Skapa också en int number_of_users med startvärde 0

// - Vi ska ha en meny där vi ska ha möjlighet att skapa en user och lägga till den i vår array (om det finns plats vill säga!) Kontrollera följande:
// # Att det fanns minst ett mellanslag när användaren skrev in namnet
// # Att det fanns ett @ med i email-adressen
// # Att åldern är mellan 0 och 130

// - Vi ska också kunna välja att skriva ut alla users (även våra anonyma nissar!)
// - Vi ska också kunna välja att ändra information om en user givet att vi anger korrekt email

// [BONUS]
// - Vi vill också kunna ta bort en user baserat på om vi anger korrekt namn (tänk på vad som ska hända med arrayen beroende på vart vi behöver ta bort en user!)
// - Utöka en user så att den har en personlig hälsningsfras i sin struct samt ett lösenord
// - Möjliggör så att en användare kan logga in givet att de anger korrekt email + lösenord
// - Det ska finnas ett trevligt välkommstmeddelande till varje enskild user där derans namn nämns i meddelandet! Tex "Welcome dear <user_name>, lovely to see you again!"
// - När vi loggar in så ska vi kunna välja att skriva ut vår hälsningsfras eller logga ut.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[30];
    int age;
    char email[50];
} User;



void addNewUser(User *userList, int *number_of_users);

int main(void)
{
    char *anonymous_name = "Jon Doe";

    int age = 0;

    char *anonymous_email = "jon.doe@anonymous.com";

    User sample = {};
    strcpy(sample.name, anonymous_name);
    sample.age = age;
    strcpy(sample.email, anonymous_email);

    // printf("%s %d %s\n", sample.name, sample.age, sample.email);

    User userList[10] = {};

    for (int i = 0; i < 10; i++)
    {
        userList[i] = sample;
    }

    // printf("%s %d %s\n", userList[1].name, userList[1].age, userList[1].email);

    int number_of_users = 0;

    printf("***Meny***\n");

    addNewUser(userList, &number_of_users);

    printf("***Update an email***\n");

    return 0;
}

void addNewUser(User *userList, int *number_of_users)
{

    char temp_name[50];
    int temp_age;
    char temp_email[50];
    printf("Enter a new user:\n");

    printf("Enter the name:\n");
    fgets(temp_name, 50, stdin);
    temp_name[strcspn(temp_name, "\n")] = '\0';
    // check if input name has space

    //     "Hello World"
    //     ' '
    //  "World"

    //     yes -> char *arr = strchr("Hellow World", '@');
    //     no -> NULL

    if (strchr(temp_name, ' ') != NULL)
    {
        // valid -> continue
    }
    else
    {
        printf("Name should have space.\n");
    }

    printf("Enter the age:\n");
    scanf("%d", &temp_age);
    getchar();
    // check if input age is between 0-130
    if (temp_age >= 0 && temp_age <= 130)
    {
        // valid -> continue
    }
    else
    {
        printf("Age should be between 0-130\n");
    }

    printf("Enter the email:\n");
    fgets(temp_email, 50, stdin);
    // check if input email has @
    if (strchr(temp_email, '@') != NULL)
    {
        temp_email[strcspn(temp_email, "\n")] = '\0';
    }
    else
    {
        printf("Email should have @.\n");
    }

    // Testing: copy temp user to userList at index 0
    strcpy(userList[0].name, temp_name);
    userList[0].age = temp_age;
    strcpy(userList[0].email, temp_email);

    *number_of_users++;
    // printf("number")

    for (int i = 0; i < 10; i++)
    {
        printf("user at index %d: %s %d %s\n", i, userList[i].name, userList[i].age, userList[i].email);
    }
}