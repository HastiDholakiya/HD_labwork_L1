#include<iostream>
using namespace std;

int main()
{
	int i;
	char a[200];
	
	cout << "Enter any string : ";
	cin >> a;
	
	for(i=0;i<=a[i];i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i]+32;
		}
		else if(a[i]>=97 && a[i]<=122)
		{
			a[i]=a[i]-32;
		}
	}
	
	cout << "Toggle case : " << a;
	
	return 0;
}
