#include<iostream>
using namespace std;

int main()
{
	int i=2020;
	int j=3030;
	int h[400];
	int p;
	int d=0;
	
	cout << "Leap years : " << endl;
	
	for(p=i;p<=j;p++)
	{
		if(p%4==0)
		{
			h[d] = p;
			d++;
		}
	}
	for(p=0;p<d;p++)
    {
    	cout << h[p] << endl;
	}
	return 0;
}
