/*
Joshua Byas
*/

// Preprocessor directive 
#include <stdio.h>

//Main function
int main () {
    // Create a variable 
    int CourseID; 
    // Assig the Course ID to variable 
    CourseID = 2271;

    // Create and initialize 
    int StudentID = 19116;  
    // create a variable 
    int dif; 
    dif = CourseID - StudentID; 


    
    printf("Course ID: %d\n",CourseID);
    printf("Student ID: %d\n",StudentID);
    printf("Course ID - Student ID is: %d\n", dif);


    return 0;
}