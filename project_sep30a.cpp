#include<iostream>
using namespace std;
int main()
{
	int spin_per_minute=3000;
	int spin_per_second=3000/60;
	int angle_cover_in_one_spin=360;//360 degree
	int angle_cover_in_one_second=spin_per_second*angle_cover_in_one_spin;
	cout<<"spin cover in one minutes:"<<spin_per_minute<<endl;
	cout<<"spin per second:"<<spin_per_second<<endl;
	cout<<"angle in one spin "<<angle_cover_in_one_spin<<" degree"<<endl;
	cout<<"total angle covered in one minute:"<<angle_cover_in_one_second*60<<endl;
	cout<<"total angle covered in one second"<<angle_cover_in_one_second;
	
	return 0;
}