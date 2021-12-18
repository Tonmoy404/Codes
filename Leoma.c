#include <stdio.h>
int main(){
    int cnt=0;
    while(1){
        if(cnt>0){
            printf("Calculate another grade?\n Insert Y to continue or N to stop the program\n");

            char x;
            scanf("%s", &x);
            if(x=='N') break;

        }
        int per=0;
        printf("Enter class performance: ");
        scanf("%d", &per);

        int assign1=0;
        printf("Enter Assignment 1 marks: ");
        scanf("%d", &assign1);

        int assign2=0;
        printf("Enter Assignment 2 marks: ");
        scanf("%d", &assign2);


        int quiz1=0;
        printf("Enter Quiz 1 marks: ");
        scanf("%d", &quiz1);

        int quiz2=0;
        printf("Enter quiz 2 marks: ");
        scanf("%d", &quiz2);


        int mid1=0;
        printf("Enter Midterm 1 marks: ");
        scanf("%d", &mid1);
        int mid2=0;
        printf("Enter Midterm 1 marks: ");
        scanf("%d", &mid2);

        int finall;
        printf("Enter Final exam marks: ");
        scanf("%d", &finall);

        int AssignSum = assign1+assign2;
        int avg1 = AssignSum/2;

        int quizSum=0;
        if(quiz1>quiz2) quizSum = quiz1;
        else quizSum = quiz2;

        int midSum = mid1+mid2;

        int total = avg1+ per+ quizSum+ midSum+ finall;
        printf("Total marks obtained: %d \n", total);

        if(total>=90 &&total <=100) printf("Obtained Grade A\n");
        else if(total>=80 &&total <=89) printf("Obtained Grade B\n");
        else if(total>=70 &&total <=79) printf("Obtained Grade C\n");
        else if(total>=60 &&total <=69) printf("Obtained Grade D\n");
        else if(total>=50 &&total <=59) printf("Obtained Grade E\n");
        else printf("Obtained Grade F\n");


        ++cnt;
    }

    return 0;
}
