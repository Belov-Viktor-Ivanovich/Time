#pragma once
class Time
{
private:
	int hour;
	int min;
	int sec;
public:
	Time(int hour, int min, int sec)
	{
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}
	Time(int sec)
	{
		hour = sec / 3600;
		min = (sec%3600)/60;
		this->sec = sec % 60;
		
	}
	int getHour()
	{
		return hour;
	}
	int getMin()
	{
		return min;
	}
	int getSec()
	{
		return sec;
	}
	
	Time summa(Time time2)
	{
		return Time(time2.toSec() + toSec());
	}
	int toSec()
	{
		return (sec + min * 60 + hour * 3600);
	}
	void show()
	{
		cout << hour << " " << min << " " << sec << endl;
	}
};

