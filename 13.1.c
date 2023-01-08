#include <stdio.h>
#include <stdlib.h>
struct course {
char student_name[30]; int age;
char Class;
char Branch_name[30];
};

int main()
{
struct course *ptr; int noOfRecords;
printf("Enter the number of records: "); scanf("%d", &noOfRecords);

ptr = (struct course *)malloc(noOfRecords * sizeof(struct course)); for (int i = 0; i < noOfRecords; ++i) {
printf("Enter name,age,class and branch:\n");
scanf("%s %d %s %s", &(ptr + i)->student_name, &(ptr + i)->age, &(ptr + i)->Class, &(ptr + i)->Branch_name);
}

printf("Student Details is:\n"); printf("name\tage\tclass\tbranch\n");
for (int i = 0; i < noOfRecords; ++i) {
printf("%s\t%d\t%s\t%s\n", (ptr + i)->student_name, (ptr + i)->age, &(ptr + i)->Class, &(ptr + i)->Branch_name);
}
free(ptr);
printf("\nId-22DCE069");
return 0;
}
