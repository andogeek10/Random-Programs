#include <stdio.h>      /* puts, printf */
#include <time.h>
#include <iostream>
using namespace std;
int main ()
{
  time_t rawtime;
  struct tm * timeinfo;
  struct tm asd;
  double trey;
  char buffer[80];
  time (&rawtime);
  asd = *localtime(&rawtime);
  asd.tm_hour = 8; asd.tm_min = 33; asd.tm_sec = 0; asd.tm_mon=5;
  timeinfo = localtime (&rawtime);
  trey = difftime(rawtime,mktime(&asd));
  time_t treyr;
  treyr = trey;
  if ( treyr < 60 )
{
cout<<treyr<<" SECOND(S)";

}

if ( treyr < 3600 )
{
	int min = (int)treyr/60;
	int sec= (int)treyr%60;
	cout<<min<<" MINUTE(S), "<<sec<< " SECOND(S)";
}
else if ( treyr < 86400 ) /* DAY */
{
	 int hours = (int) treyr/3600;
	 int hourRemainder = (int)treyr%3600;
	 int min = (int)hourRemainder/60;
	 int sec= (int)treyr%60;
	 cout<<hours<< " HOUR(S), "<< min<< " MINUTE(S), "<<sec<< " SECOND(S)";
}
else if ( treyr < 31536000 ) /* YEAR */
{
	 int days = (int) treyr/86400;
	 int daysRemainder = (int)treyr%86400;
	 int hours = (int) daysRemainder/3600;
	 int hourRemainder = (int)(treyr - 86400)%3600;
	 int min = (int)hourRemainder/60;
		int sec= (int)treyr%60;
		cout<<days<<" DAY(S), "<<hours<< " HOUR(S), "<< min<< " MINUTE(S), "<<sec<< " SECOND(S)";
}
  return 0;
}

