/*
#include<iostream>
using namespace std;
class binary{
	int low;
	int middle;
	int high;
	int target;
	int num;
public:
	void set_num(int a){
		num = a;
	}
	int get_num(){
		return num;
	}
	void set_low(int a){
		low = a;
	}
	int get_low(){
		return low;
	}

	void set_target(int a){
		target = a;
	}
	int get_target(){
		return target;
	}

	void set_high(int a){
		high = a;
	}

	int get_high(){
		return high;
	}
	void set_middle(int a){
		middle = a;
	}
	int get_middle(){
		return middle;
	}

	int find_binary(int[]);

};
void main(){
	int array_[10] =  { 1, 3, 5, 77, 79, 465, 888, 1054, 2456, 9888};
	int num;
	binary jiwon_binary;
	jiwon_binary.set_target(77);
	num = jiwon_binary.find_binary(array_);
	cout << "target은 " << jiwon_binary.get_target() << "이고, " << num+1 << "번째에 저장되어있습니다." << endl;
	

	


}

int binary::find_binary(int array_[])
{
	set_low(0);
	set_high(9);
	
	
	for(int i = 0; i < 10 ; i++ )
	{
		if(low <= high)
		{
			middle = ( low + high ) / 2;
			if( target == array_[middle] )
			{
				num = middle;
				break;
			}
			else if( target > array_[middle])
				low = middle + 1;
			else if( target < array_[middle])
				high = middle - 1;
				
		}
	}
	return num;
}
*/