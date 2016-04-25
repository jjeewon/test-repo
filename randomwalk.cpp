#include<iostream>
#include<ctime>
using namespace std;

int check_everyone( int drunken_bittles[5][5], int row, int col );
void randomwalk(int drunken_bittles[5][5], int row, int col);
void moving(int drunken_bittles[5][5], int random, int row, int col );
clock_t start, end;


void main(){
	srand((unsigned int)time(NULL));
	start = clock();
	int drunken_bittles[5][5] = {};
	int row = 3;
	int col = 2;

	drunken_bittles[row][col] = 1;

	randomwalk(drunken_bittles, row, col);
	//end = clock();
	//cout << (end - start )/(double)1000;
	for( int i = 0; i < 5 ; i ++ )
		for( int j = 0; j < 5 ; j ++ )
			cout << drunken_bittles[i][j] << endl;

}
void randomwalk( int drunken_bittles[5][5], int row, int col )
{

	while(check_everyone(drunken_bittles, row, col) == 0)
	{
		int random;
		srand((unsigned int)time(NULL));
		random = rand()%8;
		moving(drunken_bittles, random, row, col);
		

	}
	//end = clock();
	//cout << (end - start )/(double)1000;
	



}


int check_everyone( int drunken_bittles[5][5], int row, int col )
{
	for( int i = 0; i < 5 ; i ++ )
		for( int j = 0; j < 5 ; j ++ )
		{
			if( drunken_bittles[ i ][ j ] == 0 )
				return 0;
			
		}

		return 1;
	

}

void moving(int drunken_bittles[5][5], int random, int row, int col )
{
	if(random == 0 )
	{
		if(  row >= 1 && row <= 4 )
		{
		row = row - 1;
		col = col - 0;
		}
		else
			printf("");
	}
	else if( random == 1 )
	{
		if(  row >= 1 && row <= 4 && col >= 0 && col <= 3 )
		{
		row = row - 1;
		col = col + 1;
		}
		else
			printf("");
	}
	else if( random == 2 )
	{
		if( col >= 0 && col <= 3 )
		{
		row = row - 0;
		col = col + 1;
		}
		else
			printf("");
	}
	else if( random == 3 )
	{
		if(  row >= 0 && row <= 3 && col >= 0 && col <= 3 )
		{
		row = row + 1;
		col = col + 1;
		}
		else
			printf("");
	}
	else if( random == 4 )
	{
		if(  row >= 0 && row <= 3 )
		{
		row = row + 1;
		col = col + 0;
		}
		else
			printf("");
	}
	else if( random == 5 )
	{
		if(  row >= 0 && row <= 3 && col >= 1 && col <= 4 )
		{
		row = row + 1;
		col = col - 1;
		}
		else
			printf("");
	}
	else if( random == 6 )
	{
		if( col >= 1 && col <= 4 )
		{
		row = row - 0;
		col = col - 1;
		}
		else
			printf("");
	}
	else if( random == 7 )
	{
		if(  row >= 1 && row <= 4 && col >= 1 && col <= 4 )
		{
		row = row - 1;
		col = col - 1;
		}
		else
			printf("");
	}
		
}