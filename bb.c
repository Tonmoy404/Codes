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

void display(struct patient leoma[50], int n){
    printf("Showing Corona patients name: \n");
    int cnt=0;
    for(int i=0; i<n; i++){
        if(leoma[i].corona==1) printf("%s\n", leoma[i].name), cnt++;
    }

    if(cnt==0) printf("\nNO CORONA PATIENT WAS FOUND\n");
}

void modify(struct patient leoma[50], int n){
    printf("Enter registration number to modify INFO: \n");
    int x;
    scanf("%d", &x);

    for(int i=0; i<n; i++){
        if(leoma[i].reg_num==x){
            printf("Enter new contact number: ");
            int num; scanf("%d", &num);
            leoma[i].con_num=num;
            printf("Enter new address: ");
            scanf("%s", leoma[i].add);
        }
    }
}

void dlt(struct patient leoma[50], int n){
    printf("Enter name to delete INFO: \n");
    char name[20]; scanf("%s", name);
    int idx;
    for(int i=0; i<n; i++){
        if(!strcmp(name,leoma[i].name)){
            idx = i;
            puts("Name was found and deleted INFO successfully.\n");
        }
    }

    for(int i=idx;i<n-1;i++) {
        strcpy(leoma[i+1].name,leoma[i].name);
        strcpy(leoma[i+1].gender,leoma[i].gender);
        strcpy(leoma[i+1].add,leoma[i].add);
        leoma[i+1].age = leoma[i].age;
        leoma[i+1].reg_num = leoma[i].reg_num;
        leoma[i+1].con_num = leoma[i].con_num;
        leoma[i+1].corona = leoma[i].corona;
    }
    n--;
}


int main(){
    struct patient leoma[50];

    puts("Enter patients number: ");
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Enter name: ");

        scanf("%s", leoma[i].name);
        puts("Enter age: ");
        scanf("%d", &leoma[i].age);
        puts("Enter gender: ");
        scanf("%s", leoma[i].gender);
        puts("Enter Registration number: ");
        scanf("%d", &leoma[i].reg_num);
        puts("Enter Contact number: ");
        scanf("%d", &leoma[i].con_num);
        puts("Enter Corona Status: ");
        char arr[4];
        scanf("%s", arr);

        if(arr[0] == 'Y' || arr[0] == 'y') leoma[i].corona = true;
        else leoma[i].corona = false;

        puts("Enter Address: ");
        scanf("%s", leoma[i].add);
    }
    display(leoma, n);
    //modify(leoma, n);
    dlt(leoma, n);
    n--;
    display(leoma, n);

    return 0;
}
