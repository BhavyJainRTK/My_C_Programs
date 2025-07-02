//write a program that will print you mailing address in the correct form :

#include <stdio.h>

int main() {
    char name[100];
    char house[100];
    char street[100];
    char city[100];
    char pincode[20];

    // Input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your door number: ");
    fgets(house, sizeof(house), stdin);

    printf("Enter your street name: ");
    fgets(street, sizeof(street), stdin);

    printf("Enter your city name: ");
    fgets(city, sizeof(city), stdin);

    printf("Enter your pin code: ");
    fgets(pincode, sizeof(pincode), stdin);

    // Output
    printf("\nYour Mailing Address:\n");
    printf("%s", name);
    printf("%s", house);
    printf("%s", street);
    printf("%s%s", city, pincode);
}
