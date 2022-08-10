#include <stdio.h>

int main(){
    
    printf("PLease choose an option: \n");
    printf("1.Employeer\n");
    printf("2.Not Employeer\n");

    int option, salary= 25000, bonus, newSalary;;
    scanf("%d", &option);

    if(option == 1){
        printf("Please select gender: \n");
        printf("1. Male\n");
        printf("2. Female\n");
        int gender;
        scanf("%d", &gender);
       if(gender == 1){
           bonus = (salary*10)/100; // 10% bonus
           newSalary = salary + bonus;
           printf("Your new salary is= %d\n", newSalary);
       } else if(gender == 2){
           bonus = (salary*15)/100; // 15% bonus
           newSalary = salary + bonus;
           printf("Your new salary is= %d\n", newSalary);
       } else {
           printf("Please choose right option!");
       }
    }
    else if(option == 2){
        printf("Thank you\n");
    }
    else {
        printf("please choose right option!\n");
    }

    return 0;
}
