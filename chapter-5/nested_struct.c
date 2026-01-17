#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 30
#define MAX_JOB_LEN 30

typedef struct {
  char company_name[50];
} Company;

typedef struct {
  int age;
  char job_title[MAX_JOB_LEN];
  char name[MAX_NAME_LEN];
  Company company;
} Teacher;

int main()
{
  Teacher susan = {
    .name = "Susan",
    .age = 25,
    .job_title = "english_teacher",
    .company = {.company_name = "Amazon"}
  };

  printf("We have an english teacher named %s and she works at %s\n",
         susan.name, susan.company.company_name);

  return 0;
}
