 /*
  ****************************************************************
  *** Project #3:  Statistics                                  ***
  *** Program:     statistics.c                                ***
  *** Author:      Juliana Vega (juliana.r.vega-1@ou.edu)      ***
  *** Class:       CS 1313 010 Computer Programming Fall 2025  ***
  *** Lab:         Sec 013 Fridays 12:00pm                     ***
  *** Description: Calculates the correlation coefficients for ***
  ***    a list of values of x and y.                          ***
  ****************************************************************
  */

#include <stdio.h>
#include <math.h>
int main ()
{ /* main */
    /*
     ***************************
     *** Declaration section ***
     ***************************
     *
     ******************************
     * Named Constants Subsection *
     ******************************
     */
    const int number_of_values = 5;
    /*
     *****************************
          * Named Variable Subsection *
     *****************************
     *
     * List values
     *
     * x value (list one)
     */
    float x_one;
    float x_two;
    float x_three;
    float x_four;
    float x_five;
    /*
     *y value (list two)
     */
    float y_one;
    float y_two;
    float y_three;
    float y_four;
    float y_five;
    /*
     * List Statistics
     */
    float x_mean, y_mean;
    /*
     * Variance Named Variables
     */
    float x_variance, y_variance;
    /*
     * Standard Deviation Named Variables
     */
    float x_deviation, y_deviation;
    /*
     * Standard error Named variables
     */
    float x_error, y_error;
    /*
     * Correlation value
     */
    float correlation;
    float sum_x_values;
    float sum_y_values;
    float sum_xy_values;
    float sum_x_sq_values;
    float sum_y_sq_values;

    /*
     ***********************
     * Greeting Subsection *
     ***********************
     */
    printf("I will calculate the mean, variance, standard deviation,\n");
    printf(" standard error, and correlation between two lists of \n");
    printf("5 values per list.\n");
    /*
     ********************
     * Input Subsection *
     ********************
     */
    printf("Please enter 5 values, each separated by a space.\n");
    scanf("%f %f %f %f %f", &x_one, &x_two, &x_three, &x_four, &x_five);
    printf("Please enter another five values, separated by spaces.\n");
    scanf("%f %f %f %f %f", &y_one, &y_two, &y_three, &y_four, &y_five);
    /*
     **************************
     * Calculation Subsection *
     **************************
     *
     ****************
     * X-value List *
     ****************
     * Mean
     */
    x_mean =
        (x_one + x_two + x_three + x_four + x_five)/
        number_of_values;
    /*
     * Varience
     */
    x_variance =
        ((x_one - x_mean) * (x_one - x_mean) +
        (x_two - x_mean) * (x_two - x_mean) +
        (x_three - x_mean) * (x_three - x_mean) +
        (x_four - x_mean) * (x_four - x_mean) +
        (x_five - x_mean) * (x_five - x_mean)) /
        (number_of_values - 1);
    /*
     * Standard Deviation
     */
    x_deviation = sqrt (x_variance);
    /*
     * Standard Error
     */
    x_error = x_deviation /
        (sqrt (number_of_values));
    /*
     ****************
     * Y-Value List *
     ****************
     *
     * Mean
     */
    y_mean =
        (y_one + y_two + y_three + y_four + y_five)/
        number_of_values;
    /*
     * Variance
     */
    y_variance =
        ((y_one - y_mean) * (y_one - y_mean) +
        (y_two - y_mean) * (y_two - y_mean) +
        (y_three - y_mean) * (y_three - y_mean) +
        (y_four - y_mean) * (y_four - y_mean) +
        (y_five - y_mean) * (y_five - y_mean)) /
        (number_of_values - 1);
    /*
     * Standard Deviation
     */
    y_deviation = sqrt(y_variance);
    /*
     * Standard Error
     */

    y_error = y_deviation /
        (sqrt (number_of_values));
    /*
     ***************************
     * Correlation Coefficient *
     ***************************
     *
     * Summation Values
     */
    sum_x_values =
        (x_one + x_two + x_three + x_four + x_five);
    sum_y_values =
        (y_one + y_two + y_three + y_four + y_five);
    sum_xy_values =
        ((x_one * y_one) + (x_two * y_two) + (x_three * y_three) +
        (x_four * y_four) + (x_five * y_five));
    sum_x_sq_values =
        ((x_one * x_one) + (x_two * x_two) + (x_three * x_three) +
        (x_four * x_four) + (x_five * x_five));
    sum_y_sq_values =
        ((y_one * y_one) + (y_two * y_two) + (y_three * y_three) +
         (y_four * y_four) + (y_five * y_five));
    /*
     * Correlation Formula
     */
    correlation =
        ((number_of_values * sum_xy_values) - (sum_x_values * sum_y_values)) /
        sqrt((number_of_values * sum_x_sq_values) - (sum_x_values *
            sum_x_values)) * squrt((number_of_values * sum_y_sq_values) -
            (sum_y_values * sum_y_values));

    /*
     *********************

     * Output Subsection *
     *********************
     */
    printf("Your first list: %f, %f, %f, %f, %f\n", x_one, x_two, x_three,
        x_four, x_five);
    printf("Your second list: %f, %f, %f, %f, %f\n", y_one, y_two, y_three,
        y_four, y_five);
    printf("The mean of the first list is:              %f \n", x_mean);
    printf("The variance of the first list is:          %f \n", x_variance);
    printf("The Standard Deviation of the firt list is: %f \n", x_deviation);
    printf("The standard error of the first list is:    %f \n", x_error);
    printf("\n");
    printf("The mean of the second list is:               %f \n", y_mean);
    printf("The variance of the second list is:           %f \n", y_variance);
    printf("The standard deviation of the second list is: %f \n", y_deviation);
    printf("The standard error of the second list is:     %f \n", y_error);
    printf("\n");
    printf("The correlation coefficient of the two lists is: %f\n",
        correlation);

}/* main*/
