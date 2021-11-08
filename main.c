#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int m , n   ;
	printf("please entre the num of rows :  ");
	scanf("%d", &m);
		printf("please entre the num of colmns :  ");
	scanf("%d", &n);
	int array [m][n] ;
		for ( int i=0 ;i<m ; i++ )
	{
		for (  int j=0 ; j< n; j++)
		{
		array [i][j]=rand()%10 ;
		}
		printf("\n");
	}


	for ( int i=0 ;i<m ; i++ )
	{
		for (  int j=0 ; j< n; j++)
		{
			printf("%d \t", array[i][j]);
		}
		printf("\n");
	}

	int x ;
	printf("enter the number to find : ");
	scanf("%i" , &x);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (x == array[i][j]){
                printf("found in array ");
            }
        
            else if ( x ==! array[i][j]){
                printf("not found in array ");
            }
        }
        
    }


	return 0;


}