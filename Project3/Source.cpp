// task 9
//Идет k-я секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток.
#include <iostream>
int main() 
{
	//to determine the hours or minutes, you need to divide the user seconds 
	//by the number of seconds in an hour and in a minute
	std::cout << "Enter a value of second, please." << std::endl;
	int user_sec =0;
	std::cin >> user_sec;
	int hour = user_sec / 3600;
	int min = user_sec / 60;
	std::cout << hour << " whole hours and " << min << " whole minutes have passed since the beginning of the day. "; //output
}