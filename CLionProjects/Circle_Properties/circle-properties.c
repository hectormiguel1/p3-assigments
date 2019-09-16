/*=============================================================================
|   Source code:  [circle-properties]
|   Author:  [Hector M. Ramirez ] 
|   Student ID:  [5708475]  
|   Assignment:  Program #[1] [Circle Properties]
|
|   Course:  [COP4338 (Programing III)]  
|   Section:  [U04]  
|   Instructor:  William Feild  
|   Due Date:  [Sept 17, 2019], at the beginning of class
|
|I hereby certify that this collective work is my own
|and none of it is the work of any other person or entity.
|______________________________________ [Signature]|  
|        Language:  [C] 
|  Compile/Run:  [To compile use gcc as shown bellow. The -std=c99 is important,
|                   as it donates that this program uses the newer 1999 standard
|                   of C, otherwise ocelot compiler will default to 1989.]
| gcc -std=c99 circle-properties.c  –o circle-properties
| $ ./circle-properties
|  +-----------------------------------------------------------------------------  
|  
|  Description:  [Program designed to take user input for n size steps and then
|                   prints the prints a table from 0 to 50 going up by n steps
|                   including information regarding the circle radius will go
|                   from 0 to 50, and computing Diameter, Circumference, and
|                   Area.   ]
|                  
|        Input: [Value from 1 to 9, indicates the size n to increase the radius by.]
|       Output: [Table containing the properties of the circle, scaling from 0 to 50 at size n]
|      Process: [Internally compute the values by calling the functions. For
|                   the range verification of the input we are using scanf to
|                   read the value into variable if it is not within range,
|                   reset and prompt again. This program also guards against
|                   characters being passed as input, at which point getchar is
|                   used to remove the offending character and re-prompting.  ]
|  
|   Required Features Not Included:[All features are working as expected.]
|  
|   Known Bugs:  [No known bugs]
|  *===========================================================================*/

#include <stdio.h>

//Used when initializing variables.
#define ZERO_INITIALIZER 0
//Used when doing computations with Circles, constant taken from specifications.
#define PI  3.14159265358979
//Used by the functions to indicate that an invalid value as been passed.
#define INVALID_PARAMETER_ERROR  -1
//Used to indicate that the program completed without errors.
#define NO_ERROR 0
//Used to exit when the user terminated the program without successful completion.
#define USER_EXIT  -1
//Minimum allowed user input as per specifications.
#define MIN_ALLOWED 1
//Maximum allowed user input as per specifications.
#define MAX_ALLOWED 9
//Safety check for functions that use radius, protect against Circle with negative radius.
#define MIN_RADIUS_ALLOWED  0
//Upper bound to compute values to as per spec.
#define UPPER_BOUND_RADIUS_COMPUTE 50
//Limit to entries to print before printing empty line.
#define ENTREIES_LIMIT  10

//Structure to use booleans without importing the stdbool library.
enum Boolean {false,true};
//Used when prompting user to enter value for the size of the steps.
#define USER_PROMPT "Please enter a whole number between %d and %d (enter %d if you would like to exit program): "
//Used to tell the user they've enter an invalid input
#define INCORRECT_INPUT "Value entered: %d is not valid!\n"
//Used when reading decimals from the user with scanf
#define SCANF_DECIMAL_INPUT_FORMAT "%d"
//Used to set the output precision of floats. as per specs its 3 decimal places.
#define FLOAT_FORMAT_PRINT "%15.3f"
//Used when printing headers
#define HEADER_FORMAT "%15s%15s%15s%15s \n"
//Bar bellow the header has 4*CELL_SIZE (20 by default)
#define HEADER_BAR "------------------------------------------------------------------------------------------\n"
//Used when printing new line in table
#define NEW_LINE "\n"

/**
 * Functions prototypes, in-depth information about functioning of each function is provided on each
 * function's comment header.
 */
int getUserInput();
double computeArea(double radius);
double computeCircumference(double radius);
double computeDiameter(double radius);
int printTable(int steps);

int main(void)
{
    int steps = getUserInput();
    int errors = NO_ERROR;

    if(steps == USER_EXIT)
    {
        return USER_EXIT;
    }
   else
    {
       errors = printTable(steps);
    }

    return errors;
}

/**
 * Functions prompts the user to enter a number between 1 and 9 (inclusive 9).
 * Validates that the user entered a correct value,
 * if an error is detected an error message is shown and re-prompts the user,
 * This function also range_verifies the input to make sure that it is within the allowed range.
 * if a -1 is entered by the user, this will terminate the program.
 * @return : validated user input, -1 if user decides to terminate program.
 */
int getUserInput()
{
    int userInput = ZERO_INITIALIZER;
    enum Boolean validated = false;

    do
    {
        printf(USER_PROMPT,MIN_ALLOWED,MAX_ALLOWED,USER_EXIT);
        scanf(SCANF_DECIMAL_INPUT_FORMAT, &userInput);

        if ( (userInput >= MIN_ALLOWED && userInput <= MAX_ALLOWED) || userInput == USER_EXIT)
        {
            validated = true;
        }
        else
        {
            //get offending character, print error message, and reset user input variable
            getchar();
            printf(INCORRECT_INPUT,userInput);
            userInput = ZERO_INITIALIZER;
        }

    } while (!validated);

    return userInput;
}

/**
 * Function used to compute the area of a circle,
 * Using known mathematical equation:
 * A_circle = PI*radius^2
 * @param radius : double value of the radius of the circle.  Required for calculation.
 * @return double value of the area of the circle, -1 < 0, cannot have circle with negative radius.
 */
double computeArea(double radius)
{
    if(radius >= MIN_RADIUS_ALLOWED)
    {
       return  PI * (radius * radius);
    }
    else
    {
        return INVALID_PARAMETER_ERROR;
    }
}

/**
 * Function used to compute the Circumference of this circle.
 * Uses known mathematical equation
 * C_circle = 2 * PI * radius or C_circle = PI * diameter
 * For the purpose of this function, ony the first equation will be used.
 * @param radius : Radius of the circle, required for the calculation.
 * @return : double value of the circumference of the circle, -1 if invalid value parameter was passed.
 */
double computeCircumference(double radius)
{
    if(radius >= MIN_RADIUS_ALLOWED)
    {
        /*
         * 2 in this equation is taken from the function header.
         * It is part of the mathematical equation explained in header.
         */
        return 2 * PI * radius;
    }
    else
    {
        return INVALID_PARAMETER_ERROR;
    }
}

/**
 * Used to compute the radius of the Circle
 * Uses known mathematical equation:
 * D_circle = 2 * radius.
 * @param radius : Radius of the circle, required for calculation.
 * @return : double value of the diameter, -1 in case negative radius was passed.
 */
double computeDiameter(double radius)
{
    if(radius >= MIN_RADIUS_ALLOWED)
    {
        /*
         *The 2 in this statement is used as part of the mathematical equation explained in the
         * function header.
         */
        return 2 * radius;
    }
    else
    {
        return INVALID_PARAMETER_ERROR;
    }
}

/**
 *This prints the final table scaling the radius of the circle by the desired steps (entered by user)
 * @param steps: number to scale the radius by.
 * @return -1 if error, 0 otherwise.
 */
int printTable(int steps)
{
    printf(HEADER_FORMAT,"Radius","Diameter","Circumference","Area");
    printf(HEADER_BAR);
    int entriesCounter = ZERO_INITIALIZER;
    double diameter = ZERO_INITIALIZER;
    double circumference = ZERO_INITIALIZER;
    double area = ZERO_INITIALIZER;

    for(double counter = ZERO_INITIALIZER; counter <= UPPER_BOUND_RADIUS_COMPUTE; counter += steps)
    {
        diameter = computeDiameter(counter);
        circumference = computeCircumference(counter);
        area = computeArea(counter);

        if(diameter == INVALID_PARAMETER_ERROR || circumference == INVALID_PARAMETER_ERROR
                                               || area == INVALID_PARAMETER_ERROR)
        {
            return INVALID_PARAMETER_ERROR;
        }
        printf(FLOAT_FORMAT_PRINT,counter);
        printf(FLOAT_FORMAT_PRINT,diameter);
        printf(FLOAT_FORMAT_PRINT,circumference);
        printf(FLOAT_FORMAT_PRINT,area);
        printf(NEW_LINE);
        entriesCounter++;

        if(entriesCounter == ENTREIES_LIMIT)
        {
            entriesCounter = ZERO_INITIALIZER;
            printf(NEW_LINE);
        }
    }

    return NO_ERROR;
}
