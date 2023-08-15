#include<stdio.h>
#include<string.h>

typedef struct
{
	int month;
	int day;
	int year;
	//TIME time_var;
} DATE;

struct EMPLOYEE{
    char name[20];
    int* salary;
    int scores[3];
    DATE joining;
    DATE promotion, resigning;
    struct EMPLOYEE* manager;
};

int main(){
    struct EMPLOYEE emp_array[5];
    struct EMPLOYEE e1 = {"John",1000,{8,9,7},{6,30,2021}};
    printf("%d %d %d\n", e1.joining.month, e1.joining.day, e1.joining.year);
    int temp = 101;
    e1.salary = &temp;
    //reading names
    for(int i=0; i<5; i++)
    {
       scanf("%s",emp_array[i].name);
       scanf("%d",&emp_array[i].salary);
      for(int j =0;j<3;j++)
               scanf("%d",&emp_array[i].scores[j]);
    }
    for(int i=0; i<5; i++)
    {
       printf("%s ",emp_array[i].name);
       printf("%d ",emp_array[i].salary);
       printf("%d %d %d \n",emp_array[i].scores[0],emp_array[i].scores[1],emp_array[i].scores[2]); 
    }
    
}
