#include<iostream>
#include<iomanip>
using namespace std;
class time
{
	private:
		int seconds;
		int hh,mm,ss;
	public:
		void get_time(void);
		void convert_Into_Seconds(void);
		void display_Time(void);
};
void time::get_time(void)
{
	cout<<"Enter Time: "<<endl;
	cout<<"Hours? ";
	cin>>hh;
	cout<<"Minutes? ";
	cin>>mm;
	cout<<"Seconds? ";
	cin>>ss;
}
void time::convert_Into_Seconds(void)
{
	seconds=hh*3600+mm*60+ss;
}
void time::display_Time(void)
{
	cout<<"The Time Is: "<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<endl;
	cout<<"Time In Total Seconds: "<<seconds;
}
int main()
{
	time t;  //creating objects
	t.get_time();
	t.convert_Into_Seconds();
	t.display_Time();
	return 0;
}
