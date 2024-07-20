# include <stdio.h>

int main() {
    int day;
    int month;
    printf("Enter day(1-7):");
    scanf("%d",&day);
    switch(day) {
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: 
           printf("Enter month please:");  // it shows the concept of nested switch statement
           scanf("%d",&month); 
        switch(month) {
            case 1: printf("January");
            break;
            case 2: printf("February");
            break;
            case 3: printf("March");
            break;
            case 4: printf("April");
            break;
            case 5: printf("May");
            break;
            case 6: printf("June");
            break;
            case 7: printf("July");
            break;
            case 8: printf("August");
            break;
            case 9: printf("September");
            break;
            case 10: printf("October");
            break;
            case 11: printf("November");
            break;
            case 12: printf("December");
            break;
        }
        break;
        case 7: printf("Sunday");
        break;
        default : printf("Enter a valid day");
    }
}