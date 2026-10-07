#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    char student[1001], doctor[1001];
    scanf("%s %s", student, doctor);
    int lenStudent = strlen(student), lenDoctor = strlen(doctor), a;
    if (lenStudent >= lenDoctor) printf("go");
    else printf("no");
    return 0;
}