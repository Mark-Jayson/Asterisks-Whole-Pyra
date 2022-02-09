#include <stdio.h>

//Prototype for the get_positive_int function
int get_positive_int(void); 

int main(void) 
{
  //Declaration of variables 
  int i, j = 0, spaceCount;

  //Calling the value of the function get_positive_int and storing it to variable "rows"
 int rows = get_positive_int(); 

  //The first for loop determines the height of the pyramid
  //The second for loop determine the number of spaces that need to be printed for the asterisks to be centered
  //The third for loop determine how many asterisk are needed to be printed in every line using the equation: number of asterisks = (2 * i - 1)

  for(i = 1; i <= rows; ++i)
  {//outer for loop 

    for(spaceCount = 1; spaceCount <= rows - i; spaceCount++)
    {
      printf("  ");
      //print space for Pyramid pattern
    }

    while(j != 2*i-1)
    {
        printf("* ");
      ++j;
    }
     j = 0;
    printf("\n");
  }
    

    return 0;
}

  //This function makes sure that user will input a positive integer
  int get_positive_int(void)
  {
      int positive;
      do
      {
          printf("Height (Enter a Positive Integer): ");
          scanf("%d", &positive);
      }
      while (positive < 1 );
      return positive;
  } 


//Now, we are going to look at the English equivalent to the various increment and decrement expressions I++ means Use I, then increment it. ++I means Increment I, then use it. I-- means Use I, then decrement it. --I means Decrement I, then use it.
    
  