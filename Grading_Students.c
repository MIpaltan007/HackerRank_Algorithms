/*HackerLand University has the following grading policy:

Every student receives a  in the inclusive range from  to .
Any  less than  is a failing grade.
Sam is a professor at the university and likes to round each student's  according to these rules:

If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
If the value of  is less than , no rounding occurs as the result will still be a failing grade.
Examples

 round to  (85 - 84 is less than 3)
 do not round (result is less than 40)
 do not round (60 - 57 is 3 or higher)
Given the initial value of  for each of Sam's  students, write code to automate the rounding process.

Function Description

Complete the function gradingStudents in the editor below.

gradingStudents has the following parameter(s):

int grades[n]: the grades before rounding
Returns

int[n]: the grades after rounding as appropriate
Input Format

The first line contains a single integer, , the number of students.
Each line  of the  subsequent lines contains a single integer, .

Constraints

Sample Input 0

4
73
67
38
33
Sample Output 0

75
67
40
33
*/
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    int i;
    int a[60];
    for(i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }
    for(i=0;i<n;i++){
    switch(a[i]/10){
        case 3:
        if(a[i]>=38){
            a[i]=40;
        }
        break;
        case 4:
        if(45-a[i]<3 && a[i]<45){
            a[i]=45;
        }
        else if(50-n<3 && n<50){
            a[i]=50;
        }
        break;
        case 5:
        if(55-a[i]<3 && a[i]<55){
            a[i]=55;
        }
        else if(60-a[i]<3 && a[i]<60){
            a[i]=60;
        }
        break;
        case 6:
        if(65-a[i]<3 && a[i]<65){
            a[i]=65;
        }
        else if(70-a[i]<3 && a[i]<70){
            a[i]=70;
        }
        break;
        case 7:
        if(75-a[i]<3 && a[i]<75){
            a[i]=75;
        }
        else if(80-a[i]<3 && a[i]<80){
            a[i]=80;
        }
        break;
        case 8:
        if(85-a[i]<3 && a[i]<85){
            a[i]=85;
        }
        else if(90-a[i]<3 && a[i]<90){
            a[i]=90;
        }
        break;
        case 9:
        if(95-a[i]<3 && a[i]<95){
            a[i]=95;
        }
        else if(100-a[i]<3 && a[i]<100){
            a[i]=100;
        }
        break;
    }
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
    }
