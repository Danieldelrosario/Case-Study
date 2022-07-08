/* The program is a record of student's quizes and computes for their
grade average and average score per quiz.*/
#include<stdio.h>
#include<conio.h>
struct record
{
    char std_no[10];
    char name[15];
    int score[5];
};

struct record stud_rec[5]; 
int i, j, q;
float ave, std_ave, std_ave2, std_ave3; // Variables for getting average

main()
{
    // INPUT: To record student's information and score
    for (i=0; i<5; i++)
    {
        printf("Enter student number: ");
        scanf("\n");
        gets(stud_rec[i].std_no);
        printf("Enter student name: ");
        gets(stud_rec[i].name);
        for (j=0; j<3; j++)  // inputs 3 quiz scores per student
        {
            q += 1;
            printf("Enter Quiz %d score: ", q);
            scanf ("%d", &stud_rec[i].score[j]);
        }
        q = 0;
        printf("\n");

    }
    // OUTPUT: Prints the output in table form
    printf("\t\t\t\tPOLYTECHNIC UNIVERSITY OF THE PHILIPPINES\n");
    printf("\t\t\t\t\tQUEZON CITY BRANCH\n\n");
    printf("STUDENT NO.\tSTUDENT NAME\tQUIZ #1\t\tQUIZ #2\t\tQUIZ #3\t\tGRADE AVERAGE\n");

    for (i=0; i<5; i++)
    {
        printf("  %3s\t\t%3s\t", stud_rec[i].std_no, stud_rec[i].name);
        for (j=0; j<3; j++)
        {
            printf ("\t%3d\t", stud_rec[i].score[j]);
            ave += stud_rec[i].score[j];  // Adds all quiz scores per student
        }
        ave = ave/3; // Divides added score to get average
        printf ("\t %.2f", ave);  // Grade average
        printf("\n");
        ave = 0;
        // Adds students' scores per quiz
        std_ave += stud_rec[i].score[0];
        std_ave2 += stud_rec[i].score[1];
        std_ave3 += stud_rec[i].score[2];
    }
    // Divides added scores to get Average score per quiz
    std_ave = std_ave/5;
    std_ave2 = std_ave2/5;
    std_ave3 = std_ave3/5;
    printf ("\nAVERAGE \t\t\t%.2f\t\t%.2f\t\t%.2f", std_ave, std_ave2, std_ave3);  // Average score per quiz
    getch();
    return 0;
}

