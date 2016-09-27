#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
int a[100][100],n;
void buildMatrix()
{
	int i,j;
	printf("\n");
	for(i=0;i<n;i++)
	{       textcolor(YELLOW);
		cprintf("|");
	  for(j=0;j<n;j++)
	  {
			if((i+j)%2==0)
				{
					if(a[i][j]=='Q')
					{
						textcolor(GREEN);
					       cprintf("\xDB\xDB\xDB");
					}
					else
					       printf("\xDB\xDB\xDB");

				}
			else
			{
					if(a[i][j]=='Q')
					{
					       printf(" %c ",a[i][j]);
					}
					else
					       printf("   ");


			}

	  }
	  textcolor(YELLOW);
	  cprintf("|");
	  printf(" %d",i);
	  printf("\n");
	}
}
void placements()
{
	int i,j;
	printf("\nQueens are in the following row and col\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{

				if(a[i][j]=='Q'){
				printf("row - %d,col - %d\n",i,j);
			}
		}
	}
}


int PresentQueenColumn(int row)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[row][i]=='Q')
		{
			return(i);
			break;
		}
	}
}
int isSafe(int row,int col)
{
	int i,tcol;
	for(i=0;i<n;i++)
	{
		tcol=PresentQueenColumn(i);
		if(col==tcol)
			return 0;
		if(abs(row-i)==abs(col-tcol))
			return 0;
	}
	return 1;
}


void nqueen(int row) {
   int i,e;
   if (row < n) {
      for (i = 0; i < n; i++) {
		if (isSafe(row, i)) {
		a[row][i] = 'Q';
		nqueen(row + 1);
		a[row][i] = '.';
      }
      }
   } else {
	clrscr();
	printf("\n The Placements of %d Queens   ",n);
	printf("\n");
	printf("\n");
	printf("\nThe solution is:- ");
	printf("\n");
	buildMatrix();
	printf("\n");
	placements();
	getch();

   }
}
void nqueen1(int row)
{
	int i,e;
	if (row < n) {
	for (i = 0; i < n; i++) {
		if (isSafe(row, i)) {
		a[row][i] = 'Q';
		clrscr();
		printf("\n       Placing Queens          ");
		printf("\n");
		printf("\n");
		buildMatrix();
		printf("\n");
		printf("\n");
		placements();
		printf("\n");
		printf("\n");
		getch();
		nqueen1(row + 1);
		a[row][i] = '.';
		clrscr();
		printf("\n       Backtracking     ");
		printf("\n");
		printf("\n");
		buildMatrix();
		printf("\n");
		placements();
		printf("\n");
		getch();

	}
      }
      }
}


int main()
{
	int i,j,e=1,b,f;
	clrscr();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]='0';
		}
	}
	while(e)
	{
		clrscr();
		printf("\n            N-Queens Problem            ");
		printf("\n        Programatic Assignment 1        ");
		printf("\n ***************************************");
		printf("\n *                                     *");
		printf("\n *                                     *");
		printf("\n *                                     *");
		printf("\n *              1. Start               *");
		printf("\n *                                     *");
		printf("\n *                                     *");
		printf("\n *              2. Exit                *");
		printf("\n *                                     *");
		printf("\n *                                     *");
		printf("\n *                                     *");
		printf("\n ***************************************");
		printf("\n Enter your choice :");
		scanf("%d",&b);
		switch(b)
		{
			case 1:
			{
				printf("\n Enter the Number of Queens :-");
				scanf("%d",&n);
				clrscr();
				printf("\n                    Placement Statictics                         ");
				printf("\n");
				printf(" \n1. Step Wise Placement ");
				printf(" \n2. Direct Placement ");
				printf("\n Enter the choice :");
				scanf("%d",&f);
				switch(f)
				{
				case 1:
				{
				clrscr();
				printf("\n");
				printf("\n");
				nqueen1(0);
				system("pause");
				break;
				}
				case 2:
				{
				clrscr();
				printf("\n");
				printf("\n");
				nqueen(0);
				system("pause");
				break;
				}
				}
				break;
			}
			case 2:
			{
				e=0;
				clrscr();
				printf("           \n __________________________________________________");
				printf("           \n|                                                  |");
				printf("           \n|                                                  |");
				printf("           \n|                       By                         |");
				printf("           \n|               Sankaran Natarajan                 |");
				printf("           \n|                       and                        |");
				printf("           \n|               Sasi Kumar Murugan                 |");
				printf("           \n|                                                  |");
				printf("           \n|                                                  |");
				printf("           \n|                    Thank You                     |");
				printf("           \n|                                                  |");
				printf("           \n|                                                  |");
				printf("           \n|                                                  |");
				printf("           \n|__________________________________________________|");
				printf("\n");
				system("pause");



				break;
			}
		}
	}
	getch();
	return 0;
}

