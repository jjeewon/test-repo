/*
#include<iostream>
#include<cmath>
using namespace std;

void main(){

	struct pythagoras{ // ��Ÿ��� ���� �����Ǵ� �� ���� ���̵��� ���� ����ü
		int pythaA;
		int pythaB;
		int pythaC;
	};

	int num = 0;
	int a = 1;
	int b = 1;



	pythagoras Pythagoras[100];
	
	for(a = 1; a < 100 ; a ++ ) //�� ��쿡 ���� �ݺ�
	{
		for ( b=1 ; b < 100 ; b ++ )
		{
			double squareC = a*a + b*b ;
			
			if( ( (double)sqrt(squareC) == (int)sqrt(squareC) ) && ( sqrt(squareC) < 100) && (a < b ) ) // ��Ʈc�� �����̰� 100���� ���� ���, ����ü�� ����
			{
				Pythagoras[num].pythaA = a ;
				Pythagoras[num].pythaB = b ;
				Pythagoras[num].pythaC = sqrt( squareC );
				++num;
			}
			


		}

	}

	cout << " ��Ÿ����� ������ �����ϴ� �ﰢ���� �� " << num << " ���̰�" << endl;
	
	for( int i = 0; i < num ; i++ ) //����ü�� ����� ���̵��� ���
		cout << Pythagoras[i].pythaA << " " << Pythagoras[i].pythaB << " " << Pythagoras[i].pythaC << endl;
}
*/