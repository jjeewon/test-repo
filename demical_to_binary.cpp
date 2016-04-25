/*
#include<iostream>
using namespace std;
int change(int [],int n);
void main(){
	int binary[32]= {0};
	int n;
	cin >> n;
	 change(binary,n);     
}
int change(int binary[],int n)
{
	int i = 0;
	int digit = 0;

	for(int i = 0; i < 32 && n > 0; i++)
	{
		binary[i] = n % 2;
		n = n / 2;
		digit++;
	}
	
	
	for(int i = --digit; i >=0; i--)
		cout << binary[i];
	cout << endl;
	return 0;

}

*/