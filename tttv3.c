#include <stdio.h>
#include <stdlib.h>

int main()
{
    int looper = 1;
    while (looper > 0)
    {
        int cellv[9];
        int cell, round, win, inner_loop = 0;
        char cell_display[9];
        char wind, tf, rr, player_name_x, player_name_o, score;
        //---------------------------------

        while (inner_loop < 9)
        {
            cellv[inner_loop] = 0;
            cell_display[inner_loop] = '-';
            inner_loop += 1;
        }
        system("cls");
        printf("---------------------------------------------------------------\n"
               "                          TIC-TAC-TOE                          \n"
               "---------------------------------------------------------------\n"
               "                           pick cells 1-9                  \n"
               "                            -------------                  \n"
               "                            | 1 | 2 | 3 |                  \n"
               "                            -------------                  \n"
               "                            | 4 | 5 | 6 |                  \n"
               "                            -------------                  \n"
               "                            | 7 | 8 | 9 |                  \n"
               "                            -------------                  \n");

        printf(" Turn on technical feature? input y for ( YES ) n for ( NO)\n ");

        scanf(" %c", &tf);
        system("cls");
        for (round = 1; round < 3; round++)
        {

            if (round == 1)
            {
                printf("-----------------------------------------------------------\n"
                       "( O - circle round) player pls pick a cell, should be 1-9\n"
                       "-----------------------------------------------------------\n");
            }
            else
            {

                printf("-----------------------------------------------------------\n"
                       "( x - cross round) player pls pick a cell, should be 1-9 \n"
                       "-----------------------------------------------------------\n");
            }

            printf(
                " -------------\n"
                " | %c | %c | %c |\n"
                " -------------\n"
                " | %c | %c | %c | \n"
                " -------------\n"
                " | %c | %c | %c |\n"
                " -------------\n",
                cell_display[0], cell_display[1], cell_display[2], cell_display[3], cell_display[4], cell_display[5], cell_display[6], cell_display[7], cell_display[8]);

            scanf("%i", &cell);
            system("cls");
            if (cell > 0 && cell < 10)
            {

                //----------------------------------------------------------------------------------------------------

                for (int x = 1; x < 10; x++)
                {
                    if (cell == x)
                    {
                        if (cellv[x - 1] == 0)
                        {
                            cellv[x - 1] = round;

                            if (tf == 'y')
                            {
                                printf("cell %i = %i\n", x, cellv[x - 1]);
                            }

                            if (cellv[x - 1] == 1)
                            {
                                cell_display[x - 1] = 'O';
                            }
                            else if (cellv[x - 1] == 2)
                            {
                                cell_display[x - 1] = 'X';
                            }
                        }
                        else
                        {
                            printf(" cell %i is occupied pls pick another cell \n", x);
                            round = round - 1;
                        }
                    }
                }
            }
            else
            {
                printf("no such cell exist. please input within the range of 1-9\n");
                round = round - 1;
            }
            //-----------------------------------------------------------------------------
            for (int y = 0; y < 7; y += 3)
            {

                if (cellv[0 + y] == cellv[1 + y] && cellv[1 + y] == cellv[2 + y] && cellv[0 + y] != 0)
                {
                    if (tf == 'y')
                    {
                        printf("wr method\n");
                    }
                    win = cellv[0 + y];
                    round = 3;
                }
            }
            //------------------------------------------------------------------
            for (int y = 0; y < 3; y += 1)
            {
                if (cellv[0 + y] == cellv[3 + y] && cellv[3 + y] == cellv[6 + y] && cellv[0 + y] != 0)
                {
                    if (tf == 'y')
                    {
                        printf(" wc route\n");
                    }
                    win = cellv[0 + y];
                    round = 3;
                }
            }
            //-----------------------------------------------------------------------------

            for (int y = 0; y < 7; y += 6)
            {
                if (cellv[6 - y] == cellv[4] && cellv[4] == cellv[2 + y] && cellv[6 - y] != 0)
                {
                    if (tf == 'y')
                    {
                        printf(" wd route\n");
                    }
                    win = cellv[6 - y];
                    round = 3;
                }
            }
            if (cellv[0] != 0 && cellv[1] != 0 && cellv[2] != 0 && cellv[3] != 0 && cellv[4] != 0 && cellv[5] != 0 && cellv[6] != 0 && cellv[7] != 0 && cellv[8] != 0)
            {

                win = 0;
                round = 3;
            }
            //-----------------------------------------------------------------------------------------------------

            // looper----------
            if (round == 2)
            {
                round = 0;
            }
        }

        //------------------L O O P      T E R M I N A T E D ( game conclusion) ------------------------------------
        if (win == 1)
        {
            wind = 'O';
        }
        else if (win == 2)
        {
            wind = 'X';
        }

        printf(
            " -------------\n"
            " | %c | %c | %c |\n"
            " -------------\n"
            " | %c | %c | %c | \n"
            " -------------\n"
            " | %c | %c | %c |\n"
            " -------------\n",
            cell_display[0], cell_display[1], cell_display[2], cell_display[3], cell_display[4], cell_display[5], cell_display[6], cell_display[7], cell_display[8]);
        if (win != 0)
        {

            printf("-----------------------------------------------------------\n"
                   "               !      %c is the winner        !            \n"
                   "-----------------------------------------------------------\n",
                   wind);
        }
        else
        {
            printf("-----------------------------------------------------------\n"
                   "               !      I T S   A    T I E      !            \n"
                   "-----------------------------------------------------------\n");
        }
        //-----------LOOPER_confirm--------------------------------------------------------------------------

        printf(" Play again ? ( y or n)\n");
        scanf(" %c", &rr);
        system("cls");

        if (rr == 'n')
        {
            looper = 0;
        }
        else
        {
            looper = 1;
        }
    }
    return 0;
}
