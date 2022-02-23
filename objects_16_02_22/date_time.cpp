// Date and Time class: for setting , getting date and time, In date find the age of a person and in time calculate the sleep time

#include<iostream>
#include<ctime>
#include<unistd.h>

using namespace std;

class Date {
	public:
	int day;
	int month;
	int year;

	void setDate()
	{
		time_t now = time(0);
		tm *dd = localtime(&now);

		day = dd->tm_mday;
		month = 1+dd->tm_mon;
		year = 1900+dd->tm_year;

		//cout<<"date is: "<< day << "_"<< month <<"_"<< year <<endl;
	}

	Date getDate()
	{
		Date d2;

		d2.day = day;
		d2.month = month;
		d2.year = year;

		return d2;
	}

	Date setDoB(int dd, int mm, int yy)
	{
		Date d3;
		d3.day = dd;
		d3.month = mm;
		d3.year = yy;

		return d3;
	}

	void findAge(Date da)
	{
		Date d1, d2, d3;
		d3.setDate();
		d1 = d3.getDate();

		//cout<< "present date :" << d1.year <<" year "<< d1.month << " months " << d1.day <<endl; 
		//cout<< "DoB :" << da.year <<" year "<< da.month << " months " << da.day  <<endl; 

		d2.day = d1.day - da.day;
		d2.month = d1.month - da.month;
		d2.year = d1.year - da.year;	

		cout<< "Person is:" << d2.year <<" year "<< d2.month << " months " << d2.day << " day old" <<endl; 
	}

};

class Time_class {
	private:
	float hour;
	float minute;
	float second;

	public:
	float hr, min, sec;

	void setTime()
	{
		time_t now = time(0);
		tm *current_time = localtime(&now);

		//cout << "Time info: "<< asctime(current_time) << endl;
		hour = current_time->tm_hour;
		minute = current_time->tm_min;
		second = current_time->tm_sec;

		//cout<< hour << ":" << minute <<":" << second <<endl;
	}

	Time_class getTime()
	{
		Time_class t3;
		t3.hr = hour;
		t3.min = minute;
		t3.sec = second;

		//cout<< "Current Time is:" << endl;
      		//cout << t3.hr << ":" << t3.min << ":" << t3.sec << endl;	

		return t3;
	}

	Time_class sleepTime(Time_class t1, Time_class t2)
	{
		Time_class t3;
		t3.hour = t2.hour - t1.hour;
		t3.minute = t2.minute - t1.minute;
		t3.second = t2.second - t1.second;

		cout<<"Sleep Time is: "<<endl;
		cout << t3.hour <<":" << t3.minute << ":" << t3.second << endl;

		return t3;
	}

};

int main()
{
	Date d1, d2, d3, d4, d5;
	Time_class t1, t2, t3, t4, t5;
	float h=0.0, m=0.0, s=0.0;
	int dd, mm, yy;

	// Time class
	t1.setTime();
	t4 = t1.getTime();
	cout << "1st time: " <<t4.hr <<":" << t4.min << ":" << t4.sec << endl;

	sleep(5);

	t2.setTime();
	t5 = t2.getTime();			
	cout << "2nd time: "<< t5.hr <<":" << t5.min << ":" << t5.sec << endl;

	t3 = t3.sleepTime(t1, t2);

	cout << endl;

	// Date class
	d1.setDate();
	d2 = d1.getDate();

	cout << "Date is: "<< d2.day << "_" << d2.month << "_" << d2.year << endl;

	cout << "enter the DoB: " << endl;
	cin >> dd >> mm >> yy;

	d4 = d3.setDoB(dd, mm, yy);
	cout << "DoB is: "<< d4.day << "_" << d4.month << "_" << d4.year << endl;

	d5.findAge(d4);
	
	return 0;
}
