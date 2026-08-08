#include <stdio.h>

int main() 
{
  int i,j;
  // Outer loop
  for (i = 1; i <=3; ++i)
  {
    // Inner loop
      for (j = 1; j <= 5; ++j)
      printf("*");
      printf("\n");
      
  }
 
  
  return 0;
}


// output

*****
*****
*****

---------------------------------------------

#include <stdio.h>

int main() 
{
  int i,j;
  // Outer loop
  for (i = 1; i <=5; i++)
  {
    // Inner loop
      for (j = 1; j <= 5; j++)
      {
       if(j <=i)
      	// printf("*");
        printf("%d ", j);
       else
       	printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}

// output

*    
**   
***  
**** 
*****

------------------------------------------------------------------

#include <stdio.h>

int main() 
{
  int i,j;
  // Outer loop
  for (i=1;i<=5; i++)
  {
    // Inner loop
     for (j=1;j<= 5;j++)
      {
       if(j >=6-i)
      	    printf("*");
       else
       	    printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}

// output

    *
   **
  ***
 ****
*****

----------------------------------------------------------------------

#include <stdio.h>

int main() 
{
  int i,j;
  // Outer loop
  for (i=1;i<=5; i++)
  {
    // Inner loop
     for (j=1;j<= 5;j++)
      {
       if(j >=i)
      	    printf("*");
       else
       	    printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}

// output

*****
 ****
  ***
   **
    *
----------------------------------------------------------------------------------


#include <stdio.h>

int main() 
{
  int i,j;
  // Outer loop
  for (i=1;i<=5; i++)
  {
    // Inner loop
     for (j=1;j<= 5;j++)
      {
       if(j <=6-i)
      	    printf("*");
       else
       	    printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}


// output
*****
**** 
***  
**   
*
----------------------------------------------------------------

#include <stdio.h>

int main() 
{
  int i,j;
  // Outer loop
  for (i=1;i<=5; i++)
  {
    // Inner loop
     for (j=1;j<= 9;j++)
      {
       if(j>=6-i && j<=4+i)
      	    printf("*");
       else
       	    printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}

// output

    *    
   ***   
  *****  
 ******* 
*********