#include<stdio.h>

void main(){
    FILE*fptr;
    char name[20],usn[20],dep[20];
    printf("enter student name:");
    scanf("%s",name);
    printf("enter student usn:");
    scanf("%s",usn);
    printf("enter student department:");
    scanf("%s",dep);
    fptr=fopen("student.txt","w");
    if(fptr==NULL)
    {
        printf("error opening file!\n");
        return;
    }
    fprintf(fptr,"name:%s\n",name);
    fprintf(fptr,"USN:%s\n",usn);
    fprintf(fptr,"department:%s\n",dep);
    fclose(fptr);
    printf("student details saved successfully\n");


}    

