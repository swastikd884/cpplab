#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
	ifstream fileobj("file.txt");
	string line;
	while(getline(fileobj,line))
	{
		cout<<line;
		
	}
}
