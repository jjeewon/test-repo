/*
#include<iostream>
using namespace std;

void main(){

	char character; //���ڸ� ���� ����
	double num1, num2, result; //�� ���� ���� ����� ���� ������

	do
	{
		cout << "*************" << endl << endl;
		cout << "+---Add" << endl;
		cout << "----Subtract" << endl;
		cout << "*---Multiply" << endl;
		cout << "/---Divide" << endl;
		cout << "Q---Quit" << endl;
		cout << "*************" << endl <<endl;
		cout << "������ �����Ͻÿ�: ";
		cin >> character;

		if( (character == '+' ||  character == '-' ||  character == '*' || character == '/' )) //����ڰ� ����� �Է����� ��쿡�� ����
		{
			cout << "�� ���� ������ �и��Ͽ� �Է��Ͻÿ�: ";
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
					cout << "�и� 0�Դϴ�." << endl;
				else
					result = num1 / num2;
				
			}
		
			
			if( character != '/' || num2 != 0 ) //�и� 0�� �������� �ƴҰ�쿡�� ���
				cout << result << endl ;

		}




	}while( character != 'Q' ); // ���ڰ� Q�� �ƴ� ���� �ݺ�

}
*/