#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int	*ft_atoi(char *str) 
{
	int	nb;
	int	i;
	int *tab;

	i = 0;
	nb = 0;
	tab = malloc(sizeof(int) * 4);
	while (str[i] >= '0' && str[i] <= '4')
	{
		tab[i] =  str[i] - 48;
		i++;
	}
	return (tab);
}

void permute(char *a, int l, int r, int **tab)
{
	int i;
	int j;

	j = 0;
	if (l == r)
	{		
			while (tab[j] != NULL) // vue que j retourne a 0 avec la recursion, on pause cette condition pour que des que un espace est libre dans le tableau il soit rempli
				j++;
			tab[j] = ft_atoi(a);
	}
	else
	{
    	for (i = l; i <= r; i++)
    	{
        	swap((a+l), (a+i));
        	permute(a, l+1, r, tab);
        	swap((a+l), (a+i)); //backtrack
    	}
	}
}
 

int main()
{	
	int i;
	int j;

	i = 0;
	int **tab;
    char str[] = "1234";
    int n = strlen(str);
	tab = malloc(sizeof(int*) * 24); // alloue lespace pour 24 pointeur de tableau
	while (i < 24) // initialisation de du tableau
	{
		tab[i] = NULL;
		i++;
	}
    permute(str, 0, n-1, tab);
	i = 0;
	
	while (i < 24)
	{	
		j = 0;
		while (j < 4)
		{
			printf("%d", tab[i][j]);
			j++;
		}
		i++;
    	printf("\n");
	}

	return 0;
}
