/*

This Is The BufferOverFlow Vulnerability Proof Of Concept

Coded By Karf5

*/


#include <stdio.h>

int main()

{

char username[] = "Karf";
char user_name_input[10];                      // Vulnerability Is Here In The [10] Value 
int K = 0;                 // K Value It's 0 After The Exploit The K Value Will Changed

printf(" K Value Is : 0 \n");

printf("Enter The Value Of Exploit : ");      // Enter A Long Chain Of Numbers In Value Of Exploit
scanf("%s" , user_name_input);            

printf("Exploit Success / K Value Changed To : %d \n" , K);  // Simple Messege To Let You Know The Exploit Is Working And To Showing K Value

int D;
printf("Buffer OverFlow Vulnerability Is Working And Exploitable \n");  // We Use This Messega To Let The app.exe Stop The CMD Window , Without It The app.exe Will Start And Exit In The Same Time, Too Lazy I Know #_#
scanf("%d" , D);

}