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

// Print the initial value of K
printf(" K Value Is : 0 \n");

// Prompt the user to enter a string
printf("Enter The Value Of Exploit : "); // Enter A Long Chain Of Numbers In Value Of Exploit

// Read user input into the buffer
scanf("%s" , user_name_input);            

// Print the value of K after input
printf("Exploit Success / K Value Changed To : %d \n" , K);  // Simple Messege To Let You Know The Exploit Is Working And To Showing K Value


// Wait for user input to keep the console open
int D;
printf("Buffer OverFlow Vulnerability Is Working And Exploitable \n");
scanf("%d" , D);

}
