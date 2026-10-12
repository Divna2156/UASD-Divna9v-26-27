/*Да се
направи структура “student”, която да съдържа данните за даден ученик: име
(до 20 символа), номер в клас и среден успех. Да се създаде един ученик
във функцията main и да се принтират данните за него на екрана.*/
#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int number;
    float avg;
};
int main(){
    struct student s1;
    strcpy(s1.name,"Zack");
    s1.number=23;
    s1.avg=4.84;
    printf("Name %s, number %d, average success %f.",s1.name,s1.number,s1.avg);
    return 0;
}
