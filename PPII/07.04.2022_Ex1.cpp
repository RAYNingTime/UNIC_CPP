#include <iostream>

using namespace std;
class Time {
public:
	Time();
	void setTime(int, int, int);
	void print24hour();
	void print12hour();

	int getHour();
	int getMin();
	int getSec();
	void addTime(Time);
private:
	int hour;
	int minute;
	int second;
};

Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

void Time::setTime(int h, int m, int s)
{
	if ((h < 24) && (h >= 0)) hour = h;
	if ((m < 60) && (m >= 0)) minute = m;
	if ((s < 60) && (s >= 0)) second = s;
}

void Time::print24hour()
{
	cout << hour << ":" << minute << ":" << second;
}
void Time::print12hour()
{
	if ((hour == 0) || (hour == 12))
		cout << 12 << ":";
	else
		cout << hour % 12 << ":";
	cout << minute << ":" << second;
	if (hour < 12)
		cout << " AM";
	else
		cout << " PM";
}

int Time::getHour() {
	return hour;
}

int Time::getMin() {
	return minute;
}

int Time::getSec() {
	return second;
}

void Time::addTime(Time NewTime) {
	second += NewTime.second;
	if (second >= 60) {
		second -= 60;
		minute++;
	}

	minute += NewTime.minute;
	if (minute >= 60) {
		minute -= 60;
		hour++;
	}

	hour += NewTime.hour;
	if (hour >= 24)
		hour -= 24;
}

int main()
{
	Time t, g, result;
	t.setTime(10, 4, 20);
	g.setTime(23, 59, 41);
	cout << "print24hour: The time in 24 hour format is: ";
	t.print24hour();
	cout << endl;
	cout << "print12hour: The time in 12 hour format is: ";
	t.print12hour();
	cout << endl;

	cout << "get***: Time is: " << t.getHour() << ":" << t.getMin() << ":" << t.getSec() << endl;

	t.addTime(g);

	cout << "Added time is: " << t.getHour() << ":" << t.getMin() << ":" << t.getSec() << endl;

	return 0;
}
