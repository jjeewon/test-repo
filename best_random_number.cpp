/*
#include<iostream>
#include<ctime>
using namespace std;
int change(int []);
void main(){
	
	int array_1[10]= {0,0,0,0};
	
	 change(array_1);     
}
int change(int array_1[10])
{
	int n;
	srand((unsigned)time(NULL));
	for(int i=0; i<100 ; i++)
	{
		n = rand()%10;
		array_1[n]++;
		

	}

	for(int i=0; i<10 ; i++)
	{
		
		cout << array_1[i] << endl;
		

	}

	int max_number[10];
	int max_num[10] = { };
	int max_i = 0;
	int max_num1= 0;
	max_number[0] = array_1[0];
	
	for(int i=0; i<10 ; i++)
	{
		if( array_1[i] > max_number[0])
		{

		//	for(int i = 1; i <10 ; i++)
		//		max_num[i] = 0;
			//max_number[0] = array_1[i];
			max_num[ = max_num
			
			for(int i = 1; i < max_i ; i++)
				max_number[i] = 0;

			//++max_i;

		}
		else if( array_1[i] == max_number[0])
		{
			max_i++;
			max_number[max_i] = array_1[i];
			max_num[i] = ++max_num1 ;
		}
	}
		
		cout << "ÃÖ´ñ°ªÀº " ;
		for(int i = 0; max_number[i] !=0 ; i++)
			cout << max_number[i] << " " ;
		
		cout << endl;


		
		

	
	return 0;

}

*/