#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main ()
{
    //Hard coded values in 2D array 
    //Data from Texas from 2015/2019
    float rainfall[YEARS][MONTHS] = {
                                {6.05, 2.71, 9.66, 6.93, 13.99, 6.42, 0.13, 4.81, 0.65, 7.64, 10.05, 8.33},
                                {1.78, 2.64, 11.38, 2.63, 5.30, 0.22, 0.23, 9.62, 2.40, 1.14, 3.22, 4.12},
                                {5.58, 3.09, 2.72, 4.39, 5.87, 5.55, 2.86, 7.17, 0.61, 2.11, 1.53, 7.21},
                                {2.97, 8.94, 4.86, 3.16, 0.80, 1.44, 2.03, 1.77, 7.04, 8.44, 7.46, 9.74},
                                {3.34, 2.17, 2.44, 9.88, 9.87, 7.12, 0.73, 1.07, 3.60, 4.05, 0.53, 1.13}
                            };

    int year, month;
    float subtotal, total;

    printf("YEAR\t\tRAINFALL  (inches)\n");

    //Count total for each year
    for (year = 0, total = 0; year < YEARS; year++)
    {

        for (month = 0, subtotal = 0; month < MONTHS; month++)
        {
            subtotal += rainfall[year][month];
        }
        printf("%5d \t\t%15.1f\n", 2015 + year, subtotal);
        total += subtotal;
    }

}