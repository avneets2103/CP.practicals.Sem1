/*
A start-up owner is interested to maintain the dataset of the newly recruited employees. She is interested
in storing the Emp_Name (Str),Emp_Age (int), Emp_Degree (Str),Emp_Exp (Float), Emp_add(Structure). Emp_add need one user
defined data to store street no, city,district and state for the employeeaddress. You have to design a database
where we can store all the informationfor at least 20 employees.
*/

#include<stdio.h>
#include<string.h>

struct employee_data
{
    char Emp_name[50];
    int Emp_age;
    char Emp_degree[50];
    float Emp_exp;
    struct Emp_add
    {
        char street_name[50];
        char city[50];
        char district[50];
        char state[50];
     } address;
};


