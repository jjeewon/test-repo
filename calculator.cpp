/*
#include<iostream>
using namespace std;

void main(){

	char character; //문자를 받을 변수
	double num1, num2, result; //두 수와 연산 결과를 받을 변수들

	do
	{
		cout << "*************" << endl << endl;
		cout << "+---Add" << endl;
		cout << "----Subtract" << endl;
		cout << "*---Multiply" << endl;
		cout << "/---Divide" << endl;
		cout << "Q---Quit" << endl;
		cout << "*************" << endl <<endl;
		cout << "연산을 선택하시오: ";
		cin >> character;

		if( (character == '+' ||  character == '-' ||  character == '*' || character == '/' )) //사용자가 제대로 입력했을 경우에만 실행
		{
			cout << "두 수를 공백을 분리하여 입력하시오: ";
			cin >> num1 >> num2;
			
			if( character == '+' )
				result = num1 + num2;
			
			else if( character == '-' )
				result = num1 - num2;
			else if( character == '*' )
				result = num1 * num2;
			else if( character == '/' )
			{
				if( num2 == 0 ) 
					cout << "분모가 0입니다." << endl;
				else
					result = num1 / num2;
				
			}
		
			
			if( character != '/' || num2 != 0 ) //분모가 0인 나눗셈이 아닐경우에만 출력
				cout << result << endl ;

		}




	}while( character != 'Q' ); // 문자가 Q가 아닐 동안 반복

}
*/