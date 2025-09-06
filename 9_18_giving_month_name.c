#include <stdio.h>

char* getMonthName(int m) {
    switch(m) {
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";
        default: return "Invalid month";
    }
}

int main() {
    int m;
    printf("Enter month number (1-12): ");
    scanf("%d", &m);
    
    printf("The month is: %s\n", getMonthName(m));
    
    return 0;
}