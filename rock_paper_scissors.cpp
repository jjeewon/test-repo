
#include<iostream>
#include<ctime>
using namespace std;

#define rock 1
#define paper 2
#define scissors 3

void main(){
	
	int user, computer;

	 srand(time(NULL)); 

	 computer = rand()%3 + 1 ; //��ǻ���� ��츦 �������� ����

	 cout << " ���� : 1, �� : 2, ���� : 3" << endl;
	 cout << " ���� ���� �� �� �ϳ��� �����ϼ���. " ;
	 cin >> user;

	 if( user == rock || user == paper || user == scissors ) // ����ڰ� ����� ���� ���� �� �� �������� ��쿡�� ����
	 {
		 cout << " ��ǻ�ʹ� ";
		 if( computer == rock )
			 cout << "������ �����Ͽ���, ";
		 else if( computer == paper )
			 cout << "���� �����Ͽ���, ";
		 else if( computer == scissors )
			 cout << "������ �����Ͽ���, ";

		 cout << "����ڴ� ";
		 if( user == rock )
			 cout << "������ �����Ͽ����Ƿ�, ";
		 else if( user == paper )
			 cout << "���� �����Ͽ����Ƿ�, ";
		 else if( user == scissors )
			 cout << "������ �����Ͽ����Ƿ�, ";


		 
		 if( user == computer ) 
			 cout << "\n �����ϴ�. \n";
		 else
		 {
			 if( ( user == rock && computer == scissors ) || ( user == paper && computer == rock ) || ( user == scissors && computer == paper ) )
				 cout << "\n ����ڰ� ��ǻ�͸� �̰���ϴ�." << endl;
			 if( ( user == scissors && computer == rock ) || ( user == rock && computer == paper ) || ( user == paper && computer == scissors ) )
				 cout << "\n ��ǻ�Ͱ� ����ڸ� �̰���ϴ�. " << endl;
				
		 }
	 }
	 else //����ڰ� �߸� �Է����� ��� ���
		 cout << " �߸� �Է��ϼ̽��ϴ�." << endl;

	 

	

}

