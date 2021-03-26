/*************************************
* A program to calculate             *
* the value of in quadratic equation *
* created by me                      *
* on march 2021                      *
*************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//2𝑥2+3𝑥+6=0
void quadratic(); //function prototype
void grading();
void menu();

int main()
{
    int choice;
    do {
        printf("\n\tWelcome to quadratc Equation Solver!\n");
        printf("Select one from the menu\n");
        printf("1. Solve a quadratic equation\n");
        printf("2. Grade a mark\n");
        printf("3. Exit\n");
        printf("Enter your choice(1,2 or 3): ");
        scanf("%d", &choice );
        menu(choice);
    } while (choice == 1 || choice == 2);

    return 0;
}

// function to solve quadratic equation
// require 3 arguments
// prints out the value of x

void quadratic(){ //function body
    double x1=0,x2=0;
    int a,b,c;

    printf("Enter the values of a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);

    if(( b * b - 4 * a *c ) == 0) {
        x1 = x2 = (-b + sqrt(b * b - 4 * a * c))/(2*a);
        printf("The roots are %lf and %lf\n",x1,x2);
    }
    else if (( b * b - 4 * a * c) > 0){
        x1 = (-b + sqrt(b * b - 4 * a * c))/(2*a);
        x2 = (-b - sqrt(b * b - 4 * a * c))/(2*a);
        printf("The roots are %lf and %lf\n",x1,x2);
    }
    else {
        printf("The equation has no roots\n");
    }

}

// grading system
// 70 - 100 - A
// 60 - 69 - B
// 50 - 59 - C
// 40 - 49 - D
// 0 - 39 - E

// A function to grade a mark based on above criteria
// requires one argument of type int
// returns a character

void grading(){
    char grade;
    int mark;

    printf("Enter mark to grade: ");
    scanf("%d",&mark);

    if( mark >= 70 ) grade = 'A';
    else if( mark >= 60 ) grade = 'B';
    else if( mark >= 50 ) grade = 'C';
    else if( mark >= 40 ) grade = 'D';
    else if( mark >= 0 ) grade = 'E';
    else grade = 'F';

    printf("Your grade is: %c",grade);
}

// a function for navigation around the program
// requires one argument
// returns nothing

void menu(int choice){

    switch(choice){
    case 1:
        quadratic();
        break;
    case 2:
        grading();
        break;
    default:
        printf("Invalid choice");
    }

}
