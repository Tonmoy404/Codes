#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct patient{
    char name[20];
    int age;
    char gender[6];
    int reg_num;
    int con_num;
    bool corona;
    char add[20];
};




int main(){
    patient leoma[50];

    puts("Enter patients number: ");
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Enter name: ");

        scanf("%s", &leoma[i].name);
        puts("Enter age: ");
        scanf("%d", &leoma[i].age);
        puts("Enter gender: ");
        scanf("%d", &leoma[i].gender);
        puts("Enter Registration number: ");
        scanf("%d", &leoma[i].reg_num);
        puts("Enter Contact number: ");
        scanf("%d", &leoma[i].con_num);
        puts("Enter Corona Status: ");
        char arr[4]; gets(arr);
        if(arr[0]=='Y' || arr[0]=='y') leoma[i].corona = true;
        else leoma[i].corona = false;
        puts("Enter Address: ");
        scanf("%c", &leoma[i].add);
    }

    puts("Printing Data: \n");

    for(int i=0; i<n; i++){
        printf("Data of Patient: %d\n\n", i);
        printf("Name               : %c\n", leoma[i].name);
        printf("Age                : %d\n", leoma[i].age);
        printf("Gender             : %c\n", leoma[i].gender);
        printf("Registration Number: %d\n", leoma[i].reg_num);
        printf("Contact            : %d\n", leoma[i].con_num);
        printf("Corona Status      :");
        if(leoma[i].corona==1) puts("YES\n");
        else puts("NO\n");
        printf("Address            : %c\n", leoma[i].add);

        puts("\n");
    }






    return 0;
}
