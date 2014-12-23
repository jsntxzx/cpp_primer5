#include<iostream>
#include<string>

using namespace std;

class Mydate{
	private:
		 int year ;
		 int month ;
		 int day ;
	public:
		Mydate(string str);
		Mydate();
		ostream &PrintDate(ostream &out);
};


Mydate::Mydate()
{
	year = 1970 ;
	month = 1;
	day = 1;
}

Mydate::Mydate(string str)
{
	string splitmark = " ,/";
	string::size_type mark1 , mark2 ;
	mark1 = str.find_first_of(splitmark);
	if(mark1 < 3)
	{
		month = stoi(str.substr(0,mark1));
	}	
	else
	{
		string s1 = str.substr(0,mark1);
		if(s1 == "Jan"|| s1 == "January")
				month = 1;
		if(s1 == "Feb"|| s1 == "Februray")
				month = 2;
		if(s1 == "Mar"|| s1 == "March")
				month = 3;
		if(s1 == "Apr"|| s1 == "April")
				month = 4;
		if(s1 == "May")
				month = 5;
		if(s1 == "Jun"||  s1 == "June")
				month = 6;
		if(s1 == "Jul" || s1 == "July")
				month = 7;
		if(s1 == "Aug" || s1 == "August")
				month = 8;
		if(s1 == "Sep" || s1 == "September")
				month = 9;
		if(s1 == "Oct" || s1 == "October")
				month = 10;
		if(s1 == "Nov" || s1 == "November")
				month = 11;
		if(s1 == "Dec" || s1 == "December")
				month = 12;
		
	}
	mark2 = str.find_first_of(splitmark , mark1+1);
	day = stoi(str.substr(mark1+1 , mark2-1));
	year = stoi(str.substr(mark2+1));
}

ostream &Mydate::PrintDate(ostream &out)
{

	out << "year is " << year << endl;
	out << "month is " << month << endl;
	out << "day is " << day << endl;
	return out ;

}


int main()
{
	Mydate d1 ;
	Mydate d2("Dec/25/2014");
	d1.PrintDate(cout);
	d2.PrintDate(cout);
	return 0;
}

