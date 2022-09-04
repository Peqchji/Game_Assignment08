#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, boolin;
    int **matrix;
    int size, sum_row = 0, sum_col = 0, check = 0;
    scanf("%d", &size);
    matrix = (int**)calloc(size, sizeof(int*));
	for (i = 0; i < size; i++) { matrix[i] = (int*)calloc(size, sizeof(int)); }
    
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < size; i++) 
    {
            check += matrix[0][i];
    }

    /////Check isn't it a magic square//////
    for(i = 0; i <size; i++)
    {
        for(j = 0; j < size; j++)
        {
            sum_col += matrix[i][j];
            sum_row += matrix[j][i];
        }
        if(check != sum_col||check != sum_row)
            boolin = 0;
        else
            boolin = 1;
        sum_col = 0;
        sum_row = 0;
    }
    if(boolin == 0)
        printf("NO");
    else
        printf("YES");
}
