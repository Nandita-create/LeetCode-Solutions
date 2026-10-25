//Counting Days Spent Together
#include <iostream>
#include <chrono>  //usually an issure for year, month, day on older versions than C++20
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {

        //using library chrono to check which day of the year it is
        int arriveAlice_day = dayOfYear(stoi(arriveAlice.substr(3, 2)), stoi(arriveAlice.substr(0, 2)));

        int leaveAlice_day = dayOfYear(stoi(leaveAlice.substr(3, 2)), stoi(leaveAlice.substr(0, 2)));

        int arriveBob_day = dayOfYear(stoi(arriveBob.substr(3, 2)), stoi(arriveBob.substr(0, 2)));

        int leaveBob_day = dayOfYear(stoi(leaveBob.substr(3, 2)), stoi(leaveBob.substr(0, 2)));

        if (leaveAlice_day < arriveBob_day)
        return 0;

        if (leaveBob_day < arriveAlice_day)
        return 0;

        int start_date = max(arriveAlice_day, arriveBob_day);
        int end_date = min(leaveAlice_day, leaveBob_day);

        int result = end_date - start_date + 1;

        return result;
    }

    int dayOfYear(unsigned int d, unsigned int m)
    {
        using namespace std::chrono;

        //object year_month_day
        //2001 taken as sample non-leap year
        year_month_day date{year{2001}, month{m}, day{d}};
        sys_days sd = date;
        sys_days first = year_month_day{year{2001}, January, 1d};

        int num = (sd - first).count() - 1;
        return num;
    }
};

int main() {
	string arriveAlice, leaveAlice, arriveBob, leaveBob;
	cout<<"Enter arrive date of Alice: ";
	cin>>arriveAlice;
	
	cout<<"Enter leave date of Alice: ";
	cin>>leaveAlice;
	
	cout<<"Enter arrive date of Bob: ";
	cin>>arriveBob;
	
	cout<<"Enter leave date of Bob: ";
	cin>>leaveBob;
	
	Solution obj;
	
	int results = obj.countDaysTogether(arriveAlice, leaveAlice, arriveBob, leaveBob);
	
	cout<<"Number of Days Together: "<<results<<endl;
	return 0;
}

//Usually an issue while running based on year, month, day on older versions than C++20