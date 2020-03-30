 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<math.h>

//cach su dung: CTRL + F sau do nhap ten picture: vd: CTRL+ F pic1
/*
pic1: 
----------------
11011
11011	
00000	
11011
11011	
*/ 
//#############
/*
pic2
----------------
10101
01010
10101
01010
10101
---------------
/\/\/\/\/
\/\/\/\/\
/\/\/\/\/
\/\/\/\/\
/\/\/\/\/
\/\/\/\/\
/\/\/\/\/
\/\/\/\/\
/\/\/\/\/
---------------
()_()_()_()_()
_()_()_()_()_
()_()_()_()_()
_()_()_()_()_
()_()_()_()_()
_()_()_()_()_
()_()_()_()_()
_()_()_()_()_
()_()_()_()_()
*/ 
//############# 
/*
pic3
---------------
10001
01110
01110
01110
10001
------- --------
 111
1   1
1   1
1   1
 111
----------------
 000
0   0
0   0
0   0
 000
----------------
1   1
 111
 111
 111
1   1
------------------
0   0
 000
 000
 000
0   0
*/
//####################
/*
pic4
------------------
10001
01010
00100
01010
10001
--------------------
1       1
 1     1
  1   1
   1 1
    1
   1 1
  1   1
 1     1
1       1 
---------------------
 1111111
1 11111 1
11 111 11
111 1 111
1111 1111
111 1 111
11 111 11
1 11111 1
 1111111
----------------------
X       X
 X     X
  X   X
   X X
    X
   X X
  X   X
 X     X
X       X
------------------------
X-------X
-X-----X-
--X---X--
---X-X---
----X----
---X-X---
--X---X--
-X-----X-
X-------X
*/
//#####################3
/*
pic5
---------------------
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
------------------------
*/
//================================================================
//     CODE BELOW          CODE BELOW              CODE BELOW
//================================================================
/*
pic1:
11011
11011
00000
11011
11011
*/
/*
int main()
{
    int rows, cols, i, j;
    int centerRow, centerCol;


    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    centerRow = (rows+1) / 2;
    centerCol = (cols+1) / 2;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            // Print 0 for central rows or columns
            if(centerCol == j || centerRow == i)
            {
                printf("0");
            }
            else if((cols%2 == 0 && centerCol+1 == j) || (rows%2 == 0 && centerRow+1 == i))
            {
                // Print an extra 0 for even rows or columns
                printf("0");
            }
            else
            {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}
*/
//========================================================
/*
pic2
10101
01010
10101
01010
10101
*/
/*
int main()
{
    int rows, cols, i, j, k;

	printf("Enter number of rows: ");
	scanf("%d", &rows);
	printf("Enter number of columns: ");
 	scanf("%d", &cols);

    k = 1;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            if(k == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }

            // If k = 1  then k *= -1 => -1
            // If k = -1 then k *= -1 =>  1
            k *= -1;
        }

        if(cols % 2 == 0)
        {
            k *= -1;
        }

        printf("\n");
    }

    return 0;
}
*/
//===================================================
/*
pic3
-------
10001
01110
01110
01110
10001
------- 
 111
1   1
1   1
1   1
 111
-------
 000
0   0
0   0
0   0
 000
--------
1   1
 111
 111
 111
1   1
--------
0   0
 000
 000
 000
0   0
*/
/*
int main()
{
    int i, j, rows, cols;

    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            // Print corner element
            if((i==1 || i==rows) && (j==1 || j==cols))
            {
                printf("0");
            }
            else if(i==1 || i==rows || j==1 || j==cols)
            {
                // Print edge
                printf("1");
            }
            else
            {
                // Print center
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}
*/
//=======================================================

/*
pic4
-------
10001
01010
00100
01010
10001
------------
1       1
 1     1
  1   1
   1 1
    1
   1 1
  1   1
 1     1
1       1 
------------
 1111111
1 11111 1
11 111 11
111 1 111
1111 1111
111 1 111
11 111 11
1 11111 1
 1111111
------------
X       X
 X     X
  X   X
   X X
    X
   X X
  X   X
 X     X
X       X
--------------
X-------X
-X-----X-
--X---X--
---X-X---
----X----
---X-X---
--X---X--
-X-----X-
X-------X
*/
/*
int main()
{
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            if(i == j || (j == (cols+1) - i))
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}
*/
//======================================================

/*
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
*/
/*
int main()
{
    int N, i, j;

    printf("Enter N: ");
    scanf("%d", &N);

    // First upper half of the pattern
    for(i=N; i>=1; i--)
    {
        // First inner part of upper half
        for(j=N; j>i; j--)
        {
            printf("%d", j);
        }

        // Second inner part of upper half
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", i);
        }

        // Third inner part of upper half
        for(j=i+1; j<=N; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    // Second lower half of the pattern
    for(i=1; i<N; i++)
    {
        // First inner part of lower half
        for(j=N; j>i; j--)
        {
            printf("%d", j);
        }

        // Second inner part of lower half
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", i+1);
        }

        // Third inner part of lower half
        for(j=i+1; j<=N; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
*/
