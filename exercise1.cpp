
#include <iostream>
#include <string>

using namespace std;

string convertToBinary(int);

int main(int argc, char* argv[])
{
	int input = stoi(argv[1]);
	string n = convertToBinary(input);
	cout << n << endl;
	return 0;
}

string convertToBinary(int n)
{
	string b = "";
	bool neg;
	
	if(n < 0)
	{
		neg = true;
		n *= -1;
	}
	else
	{
		neg = false;
	}
	
	int max = n;
	while(max != 0)
	{
		int m = max % 2;
		if(!neg)
		{
			b = to_string(m) + b;
		}
		else
		{
			if(max == n)
			{
				b = to_string(m) + b;
			}
			else if (max == 1)
			{
				b = "1" + to_string(!m) + b;
			}
			else
			{
				b = to_string(!m) + b;
			}
		}
		
		max /= 2;
	}

	return b;
}
