#include <stdio.h>
#include <math.h>
//#include <conio.h>
 
 
main() {
int H_SIZE=8;  /*length of each code word: you can change. */
int temp,r1,c1,i,j,count=0;
//int h_matrix[2][2]={{0,0},{0,1}}; /* Initialise 1x1 matrix */
 int hadamard_matrix[8][8];
hadamard_matrix[0][0]=0;
hadamard_matrix[0][1]=0;
hadamard_matrix[1][0]=0;
hadamard_matrix[1][1]=1;
 
r1=2;
c1=2;

      while (r1<H_SIZE){
       printf("For count =%d\n",count);
            for (i=0;i<r1;i++)
             { /* loop #1: Copying the code matrix itself below for new code matrix */
                for (j=0;j<c1; j++)
               { 
                hadamard_matrix[i+r1][j]=hadamard_matrix[i][j];
			//printf("%d\t", hadamard_matrix[i+r1][j]);
               } // printf("\n");
  	     }
          
                for (j=0; j<c1;j++)
	       {/* Loop#2: Copying the code matrix on right to itself for new matrix */
                for (i=0; i<r1;i++)
 		{
                hadamard_matrix[i][j+c1]=hadamard_matrix[i][j];
			//printf("%d\t", hadamard_matrix[i][j+c1]);
                } // printf("\n");
	       }
            
                for (i=0;i<r1;i++)
               {/* Loop#3: Copying cojugate of code matrix for complentary diagonal part */
                for (j=0;j<c1;j++)
                { temp= (hadamard_matrix[i][j]+1)%2;
//printf("%d\t", hadamard_matrix[i][j]);
//printf("%d\n", temp);
                hadamard_matrix[i+r1][j+c1]=temp;
		// printf("%d\t", hadamard_matrix[i+r1][j+c1]);
                } // printf("\n");
               }

      count++;
       r1*=2;
       c1*=2;    
    }
 for (i=0;i<H_SIZE; i++)
 {
    for(j=0; j<H_SIZE;j++)
     {
      printf("%d\t", hadamard_matrix[i][j]);
     }
    printf("\n");
  }



}
