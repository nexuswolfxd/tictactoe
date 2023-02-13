#include <stdio.h>
int main()
{

    int cell, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0, round;
    char c1d = '-', c2d = '-', c3d = '-', c4d = '-', c5d = '-', c6d = '-', c7d = '-', c8d = '-', c9d = '-';

    printf("1-9\n"
           " -------------\n"
           " | 1 | 2 | 3 |\n"
           " -------------\n"
           " | 4 | 5 | 6 | \n"
           " -------------\n"
           " | 7 | 8 | 9 |\n"
           " -------------\n");

    for (round = 1; round < 3; round++)
    {
        if (round == 1)
        {
            printf("-------------\n"
                   "circle round\n");
        }
        else
        {
            printf("-------------\n"
                   "cross round\n");
        }

        printf("player pls pick a cell, should be 1-9\n"
               " -------------\n"
               " | %c | %c | %c |\n"
               " -------------\n"
               " | %c | %c | %c | \n"
               " -------------\n"
               " | %c | %c | %c |\n"
               " -------------\n",
               c1d, c2d, c3d, c4d, c5d, c6d, c7d, c8d, c9d);

        scanf("%i", &cell);
        //----------------------------------------------------------------------------------------------------
        switch (cell)
        {
            //------------------------------
        case 1:
            if (c1 == 0)
            {
                c1 = round;
                printf("cell 1 = %i\n", c1);
            }
            else
            {
                printf(" cell1 is occupied pls pick another cell \n");
                round = round - 1;
            }

            break;
            //------------------------------
        case 2:
            if (c2 == 0)
            {
                c2 = round;
                printf("cell 2 = %i\n", c2);
            }
            else
            {
                printf(" cell2 is occupied pls pick another cell\n ");
                round = round - 1;
            }

            break;
            //------------------------------
        case 3:
            if (c3 == 0)
            {
                c3 = round;
                printf("cell 3 = %i\n", c3);
            }
            else
            {
                printf(" cell3 is occupied pls pick another cell\n ");
                round = round - 1;
            }

            break;
            //------------------------------
        case 4:
            if (c4 == 0)
            {
                c4 = round;
                printf("cell 4 = %i\n", c4);
            }
            else
            {
                printf(" cell4 is occupied pls pick another cell\n ");
                round = round - 1;
            }

            break;
            //------------------------------
        case 5:
            if (c5 == 0)
            {
                c5 = round;
                printf("cell 5 = %i\n", c5);
            }
            else
            {
                printf(" cell5 is occupied pls pick another cell\n ");
                round = round - 1;
            }

            break;
            //------------------------------
        case 6:
            if (c6 == 0)
            {
                c6 = round;
                printf("cell 6 = %i\n", c6);
            }
            else
            {
                printf(" cell6 is occupied pls pick another cell\n ");
                round = round - 1;
            }

            break;
            //------------------------------
        case 7:
            if (c7 == 0)
            {
                c7 = round;
                printf("cell 7 = %i\n", c7);
            }
            else
            {
                printf(" cell7 is occupied pls pick another cell\n ");
                round = round - 1;
            }

            break;
            //------------------------------
        case 8:
            if (c8 == 0)
            {
                c8 = round;
                printf("cell 8 = %i\n", c8);
            }
            else
            {
                printf(" cell8 is occupied pls pick another cell\n ");
                round = round - 1;
            }

            break;
            //------------------------------
        case 9:
            if (c9 == 0)
            {
                c9 = round;
                printf("cell 9 = %i\n", c9);
            }
            else
            {
                printf(" cell9 is occupied pls pick another cell\n ");
                round = round - 1;
            }

            break;
            //------------------------------
        default:
            break;
        }
        //----------------------------------------------------------------------------------------------------

        //----------------------------------------------------------------------------------------------------
        if (c1 == 1)
        {
            c1d = 'O';
        }
        else if (c1 == 2)
        {
            c1d = 'X';
        }
        //------------------------------
        if (c2 == 1)
        {
            c2d = 'O';
        }
        else if (c2 == 2)
        {
            c2d = 'X';
        }
        //------------------------------
        if (c3 == 1)
        {
            c3d = 'O';
        }
        else if (c3 == 2)
        {
            c3d = 'X';
        }
        //------------------------------
        if (c4 == 1)
        {
            c4d = 'O';
        }
        else if (c4 == 2)
        {
            c4d = 'X';
        }
        //------------------------------
        if (c5 == 1)
        {
            c5d = 'O';
        }
        else if (c5 == 2)
        {
            c5d = 'X';
        }
        //------------------------------
        if (c6 == 1)
        {
            c6d = 'O';
        }
        else if (c6 == 2)
        {
            c6d = 'X';
        }
        //------------------------------
        if (c7 == 1)
        {
            c7d = 'O';
        }
        else if (c7 == 2)
        {
            c7d = 'X';
        }
        //------------------------------
        if (c8 == 1)
        {
            c8d = 'O';
        }
        else if (c8 == 2)
        {
            c8d = 'X';
        }
        //------------------------------
        if (c9 == 1)
        {
            c9d = 'O';
        }
        else if (c9 == 2)
        {
            c9d = 'X';
        }
        //--------------------------------------------------------------------------------------------------

        if (round == 2)
        {
            round = 0;
        }
    }
}