/* SOFTWARE DEVELOPMENT FUNDAMENTALS - I (15B17CI171)
MINI-PROJECT

UNITIME
(Batch-B4 Time Table Decoder)

By:
Akash Sharma NBTG13285
Mukund Sarda NBTG13756
Karanjot Singh NBTG13346 */


#include <stdio.h>

#include <stdlib.h>

#include <time.h>


/* Function for printing U in * */
void U(int i);

/* Function for printing N in * */
void N(int i);

/* Function for printing I in * */
void I(int i);

/* Function for printing T in * */
void T(int i);

/* Function for printing M in * */
void M(int i);

/* Function for printing E in * */
void E(int i);

/* Function for finding day of the week */
int dayofweek(int d,int m,int y);

/* Function for reading contents of a text file */
int fileread(char filename[100]);

/* Function for printing time table for Monday */
int monday(int hours);

/* Function for printing time table for Tuesday */
int tuesday(int hours);

/* Function for printing time table for Wednesday */
int wednesday(int hours);

/* Function for printing time table for Thursday */
int thursday(int hours);

/* Function for printing time table for Friday */
int friday(int hours);

/* Function for printing time table for Saturday */
int saturday(int hours);

void U(int i)
{
    int j;

        for(j=1;j<=5;j++)
        {

            if(j==1||j==5||i==9)
                printf("* ");

            else
                printf("  ");

        }
}


void N(int i)
{
    int j;

        for(j=1;j<=9;j++)
        {

            if(j==1||j==9||i==j)
                printf("*");

            else
                printf(" ");

        }
}


void I(int i)
{
    int j;

        for(j=1;j<=5;j++)
        {

            if(j==3||i==1||i==9)
                printf("* ");

            else
                printf("  ");

        }
}


void T(int i)
{
    int j;

        for(j=1;j<=5;j++)
        {

            if(i==1||j==3)
                printf("* ");

            else
                printf("  ");

        }
}


void M(int i)
{
    int j;

        for(j=1;j<=9;j++)
        {

            if(j==1||j==9||(j<=5&&i==j)||(j>=5&&i+j==10))
                printf("*");

            else
                printf(" ");

        }
}


void E(int i)
{
    int j;

        for(j=1;j<=5;j++)
        {

            if(j==1||i==1||(i==5&&j<=4)||i==9)
                printf("* ");

            else
                printf("  ");

        }
}


int dayofweek(int d,int m,int y)
{

    static int t[]={ 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };

    y -= m < 3;

    /* Formula for calculating day of the week */
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;

}


int fileread(char filename[100])
{

    /* Declaring pointer for reading the file */
    FILE *fptr;
    char c;

    /* Opening the file in read only mode */
    fptr = fopen(filename, "r");

    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }

    printf("\n");

    /* Closing the file */
    fclose(fptr);

    return 0;
}


int monday(int hours)
{
    switch(hours)
    {

        case 10: fileread("monday1011.txt");
        break;

        case 11: fileread("monday1112.txt");
        break;

        case 12: printf(" Lunch Break!\n");
        break;

        case 13: fileread("monday1314.txt");
        break;

        case 15: fileread("monday1517.txt");
        break;

        case 16: fileread("monday1517.txt");
        break;

        default: printf(" No Class!\n");
        break;

    }
}


int tuesday(int hours)
{
    switch(hours)
    {

        case 10: fileread("tuesday1011.txt");
        break;

        case 12: printf(" Lunch Break!\n");
        break;

        case 13: fileread("tuesday1315.txt");
        break;

        case 14: fileread("tuesday1315.txt");
        break;

        case 15: fileread("tuesday1516.txt");
        break;

        case 16: fileread("tuesday1617.txt");
        break;

        default: printf(" No Class!\n");
        break;

    }
}


int wednesday(int hours)
{
    switch(hours)
    {

        case 10: fileread("wednesday1011.txt");
        break;

        case 11: fileread("wednesday1112.txt");
        break;

        case 12: printf(" Lunch Break!\n");
        break;

        case 13: fileread("wednesday1314.txt");
        break;

        default: printf(" No Class!\n");
        break;

    }
}


int thursday(int hours)
{
    switch(hours)
    {

        case 9: fileread("thursday0912.txt");
        break;

        case 10: fileread("thursday0912.txt");
        break;

        case 11: fileread("thursday0912.txt");
        break;

        case 12: printf(" Lunch Break!\n");
        break;

        case 13: fileread("thursday1314.txt");
        break;

        case 14: fileread("thursday1415.txt");
        break;

        case 16: fileread("thursday1617.txt");
        break;

        default: printf(" No Class!\n");
        break;

    }
}


int friday(int hours)
{
    switch(hours)
    {

        case 10: fileread("friday1011.txt");
        break;

        case 11: fileread("friday1112.txt");
        break;

        case 12: printf(" Lunch Break!\n");
        break;

        case 13: fileread("friday1314.txt");
        break;

        case 15: fileread("friday1517.txt");
        break;

        case 16: fileread("friday1517.txt");
        break;

        default: printf(" No Class!\n");
        break;

    }
}


int saturday(int hours)
{
    switch(hours)
    {

        case 9: fileread("saturday0911.txt");
        break;

        case 10: fileread("saturday0911.txt");
        break;

        case 11: fileread("saturday1112.txt");
        break;

        case 12: printf(" Lunch Break!\n");
        break;

        default: printf(" No Class!\n");
        break;

    }
}


int main(void)
{

    printf("\n");

    /* Printing UNITIME using * */
    for(int a=1;a<=9;a++)
    {
        printf(" ");
        U(a);

        printf("   ");
        N(a);

        printf("   ");
        I(a);

        printf("   ");
        T(a);

        printf("   ");
        I(a);

        printf("   ");
        M(a);

        printf("   ");
        E(a);

        printf("   ");

        printf("\n");
    }

    printf(" \n -------------------------------");

    printf("\n | Batch-B4 Time Table Decoder |\n");

    printf(" -------------------------------\n\n");

    int z;

    /* Menu of the program */

    printf(" Options Available:\n\n");

    printf(" 1. Find time table as per current day, date and time\n\n");

    printf(" 2. Find time table by entering day and time manually\n\n");

    printf(" Enter your choice: ");

    scanf("%d",&z);

    /* Executing program to print time table as per current parameters */
    if (z==1)
    {
        time_t now;

        time(&now);

        int hours, minutes, seconds, date, month, year, day;

        /* Structure having local time and date information */
        struct tm *local = localtime(&now);

        /* Extracting current hours from the structure */
        hours = local->tm_hour;

        /* Extracting current minutes from the structure */
        minutes = local->tm_min;

        /* Extracting current seconds from the structure */
        seconds = local->tm_sec;

        /* Extracting current date from the structure */
        date = local->tm_mday;

        /* Extracting current month from the structure */
        month = local->tm_mon + 1;

        /* Extracting current year from the structure */
        year = local->tm_year + 1900;

        /* Printing Current Date */
        printf("\n Date is: %d/%d/%d\n\n", date, month, year);

        /* Printing Current Time */
        printf(" Time is: %d:%d:%d\n\n", hours, minutes, seconds);

        /* Finding the day of the week as per the obtained values of date, month, year */
        day = dayofweek(date,month,year);

        /* Printing day and the time table as per the value of variables 'day' & 'hours' */
        switch(day)
        {

            case 1: printf(" Day is: Monday\n\n");

            /* Calling function monday() for printing time table */
            monday(hours);
            break;

            case 2: printf(" Day is: Tuesday\n\n");

             /* Calling function tuesday() for printing time table */
            tuesday(hours);
            break;

            case 3: printf(" Day is: Wednesday\n\n");

             /* Calling function wednesday() for printing time table */
            wednesday(hours);
            break;

            case 4: printf(" Day is: Thursday\n\n");

             /* Calling function thursday() for printing time table */
            thursday(hours);
            break;

            case 5: printf(" Day is: Friday\n\n");

             /* Calling function friday() for printing time table */
            friday(hours);
            break;

            case 6: printf(" Day is: Saturday\n\n");

             /* Calling function saturday() for printing time table */
            saturday(hours);
            break;

            case 7: printf(" Day is: Sunday\n\n");

            printf(" No Class!\n\n");
            break;

        }

    }

    /* Executing program to print time table as per entered parameters */
    else if (z==2)
    {

        int hours, minutes, day;

        printf("\n Enter 1 for Monday\n");

        printf(" Enter 2 for Tuesday\n");

        printf(" Enter 3 for Wednesday\n");

        printf(" Enter 4 for Thursday\n");

        printf(" Enter 5 for Friday\n");

        printf(" Enter 6 for Saturday\n");

        printf(" Enter 7 for Sunday\n\n");

        /* Enter choice for day of the week */
        printf(" Enter your choice: ");

        scanf("%d",&day);

        printf("\n Enter hours in 24 hour format: ");

        scanf("%d",&hours);

        printf(" Enter minutes: ");

        scanf("%d",&minutes);

        printf("\n Time is %d:%d\n\n",hours,minutes);

        /* Printing day and the time table as per the value of variables 'day' & 'hours' */

        switch(day)
        {

            case 1: printf(" Day is: Monday\n\n");

            /* Calling function monday() for printing time table */
            monday(hours);
            break;

            case 2: printf(" Day is: Tuesday\n\n");

             /* Calling function tuesday() for printing time table */
            tuesday(hours);
            break;

            case 3: printf(" Day is: Wednesday\n\n");

             /* Calling function wednesday() for printing time table */
            wednesday(hours);
            break;

            case 4: printf(" Day is: Thursday\n\n");

             /* Calling function thursday() for printing time table */
            thursday(hours);
            break;

            case 5: printf(" Day is: Friday\n\n");

             /* Calling function friday() for printing time table */
            friday(hours);
            break;

            case 6: printf(" Day is: Saturday\n\n");

             /* Calling function saturday() for printing time table */
            saturday(hours);
            break;

            case 7: printf(" Day is: Sunday\n\n");

            printf(" No Class!\n\n");
            break;

        }
    }

    else
    {
        printf("\n Wrong Input!\n\n");
    }

    printf(" Program Executed Successfully!\n\n");

    printf(" ------------------------------\n");

    printf(" | Thanks For Using UNITIME ! |\n");

    printf(" ------------------------------\n");

    return 0;
}
