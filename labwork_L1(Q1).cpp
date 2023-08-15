#include<iostream>
using namespace std;

int main()
{
	int i,n;
	
	cout << "Enter array's size : ";
	cin >> n;
	
	int a[n];
	
	cout << "Enter array's elements : " << endl;
	
	for(i=0;i<n;i++)
	{
		cout << "a["<< i <<"] = ";
		cin >> a[i];
	}
	 
	cout << "Even numbers : " << endl;

    for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout << a[i] << endl;
		}
	}	
	
	
	return 0;
}
