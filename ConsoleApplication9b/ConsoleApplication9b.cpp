#include <iostream>
int main()
{
	unsigned int a, b, c;
	std::cin >> a >> b >> c;
	if(a==b||b==c||a==c)
	{
		std::cout << "YES";
	}
	else { std::cout << "NO"; }
	return 0;
}