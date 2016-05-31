/* Topic 3 and Topic 4 - Assignment 2 Pt2                                       	*/
/* Programmer: Leann Deen                                                        */
/* Date: June 16, 2015				                                                */
/*                                                                               */
/*********************************************************************************/   
/*                             Program Description                               */
/*********************************************************************************/
/* Create a program that prompts a user for numbers and determines the total     */
/* car revenue, using the following formula:								               */                
/* 		Total Car Revenue = Price * Quantity of Cars Sold                       */                         
/*********************************************************************************/
/*                 			     Header Files					                        */
/*********************************************************************************/
#include <stdio.h>
/*********************************************************************************/
/*                                Declare Variables                              */
/*********************************************************************************/
float price; /* use float to accept decimal price if entered */
int cars;
float totalRevenue; /* use float for decimal value of revenue */
/*********************************************************************************/
/*                                Main Function                                  */
/*********************************************************************************/
int main (void)
{
/*********************************************************************************/
/*                       Prompt User & Read/Store Input                          */
/*********************************************************************************/
printf("Pretend you own a car dealership. \n");
printf("Let's calculate your revenue based on the price of a car and how many you sell. \n");
printf("\n Enter the price of a car (without commas): ");
scanf("%f", &price);
printf("Enter how many cars sold: ");
scanf("%d", &cars);
/*********************************************************************************/
/*                            Calculate totalRevenue                             */
/*********************************************************************************/
totalRevenue = price * cars;
/*********************************************************************************/
/*                                 Print Results                                 */
/*********************************************************************************/
printf("Your total revenue would be %.2f!", totalRevenue); /* only allows two decimal places */
/*********************************************************************************/
/*                                 End Program                                   */
/*********************************************************************************/
return(0);
}

