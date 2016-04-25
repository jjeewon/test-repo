
#include<iostream>
#include<ctime>
using namespace std;

#define rock 1
#define paper 2
#define scissors 3

void main(){
	
	int user, computer;

	 srand(time(NULL)); 

	 computer = rand()%3 + 1 ; //컴퓨터의 경우를 랜덤으로 설정

	 cout << " 바위 : 1, 보 : 2, 가위 : 3" << endl;
	 cout << " 가위 바위 보 중 하나를 선택하세요. " ;
	 cin >> user;

	 if( user == rock || user == paper || user == scissors ) // 사용자가 제대로 가위 바위 보 중 선택했을 경우에만 실행
	 {
		 cout << " 컴퓨터는 ";
		 if( computer == rock )
			 cout << "바위를 선택하였고, ";
		 else if( computer == paper )
			 cout << "보를 선택하였고, ";
		 else if( computer == scissors )
			 cout << "가위를 선택하였고, ";

		 cout << "사용자는 ";
		 if( user == rock )
			 cout << "바위를 선택하였으므로, ";
		 else if( user == paper )
			 cout << "보를 선택하였으므로, ";
		 else if( user == scissors )
			 cout << "가위를 선택하였으므로, ";


		 
		 if( user == computer ) 
			 cout << "\n 비겼습니다. \n";
		 else
		 {
			 if( ( user == rock && computer == scissors ) || ( user == paper && computer == rock ) || ( user == scissors && computer == paper ) )
				 cout << "\n 사용자가 컴퓨터를 이겼습니다." << endl;
			 if( ( user == scissors && computer == rock ) || ( user == rock && computer == paper ) || ( user == paper && computer == scissors ) )
				 cout << "\n 컴퓨터가 사용자를 이겼습니다. " << endl;
				
		 }
	 }
	 else //사용자가 잘못 입력해을 경우 출력
		 cout << " 잘못 입력하셨습니다." << endl;

	 

	

}

