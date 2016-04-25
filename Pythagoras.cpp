
#include<iostream>
#include<cmath>
using namespace std;

void main(){

	struct pythagoras{ // 피타고라스 정리 성립되는 세 변의 길이들을 넣을 구조체
		int pythaA;
		int pythaB;
		int pythaC;
	};

	int num = 0;
	int a = 1;
	int b = 1;



	pythagoras Pythagoras[100];
	
	for(a = 1; a < 100 ; a ++ ) //각 경우에 대해 반복
	{
		for ( b=1 ; b < 100 ; b ++ )
		{
			double squareC = a*a + b*b ;
			
			if( ( (double)sqrt(squareC) == (int)sqrt(squareC) ) && ( sqrt(squareC) < 100) && (a < b ) ) // 루트c가 정수이고 100보다 작을 경우, 구조체에 저장
			{
				Pythagoras[num].pythaA = a ;
				Pythagoras[num].pythaB = b ;
				Pythagoras[num].pythaC = sqrt( squareC );
				++num;
			}
			


		}

	}

	cout << " 피타고라스의 정리가 성립하는 삼각형은 총 " << num << " 개이고" << endl;
	
	for( int i = 0; i < num ; i++ ) //구조체에 저장된 길이들을 출력
		cout << Pythagoras[i].pythaA << " " << Pythagoras[i].pythaB << " " << Pythagoras[i].pythaC << endl;
}
