#include<iostream>
using namespace std;

    int add (int h,int p)
	{
		return h+p;
	}
	int sub (int h,int p)
	{
		return h-p;
	}
	int mul (int h,int p)
	{
		return h*p;
	}
	int div (int h,int p)
	{
		return h/p;
	}
	int mod (int h,int p)
	{
		return h%p;
	}
	
	
int main()
{
	int h,p;
	int a,b;
	int choice;
	

	do {
	cout << "Press 1 for + ..." <<endl;
	cout << "Press 2 for - ..." <<endl;
	cout << "Press 3 for * ..." <<endl;
	cout << "Press 4 for / ..." <<endl;
	cout << "Press 5 for % ..." <<endl;
	cout << "Press 0 for the exit..." <<endl;
	
	cout << "Enter your choice : ";
	cin >> choice;
	
	switch(choice)
	{
	
		case 1:
			cout << "Enter a : ";
	        cin >> a;
	
	        cout << "Enter b : ";
			cin >> b;
	
			cout << "Sum of a & b is " << add(a,b) << endl;
			break;
	
		case 2:
			cout << "Enter a : ";
	        cin >> a;
	
	        cout << "Enter b : ";
			cin >> b;
			
			cout << "Substraction of a & b is " << sub(a,b) << endl;
			break;
	
		case 3:
			cout << "Enter a : ";
	        cin >> a;
	
	        cout << "Enter b : ";
			cin >> b;
			
			cout << "Multiplication of a & b is " << mul(a,b) << endl;
			break;
			
		case 4:
			cout << "Enter a : ";
	        cin >> a;
	
	        cout << "Enter b : ";
			cin >> b;			
			cout << "Divison of a & b is " << div(a,b) << endl;
			break;
	
		case 5:
			cout << "Enter a : ";
	        cin >> a;
	
	        cout << "Enter b : ";
			cin >> b;			
			cout << "Modulo of a & b is " << mod(a,b) << endl;
			break;
			
			choice++;
			
	}		
	
      }while(choice!=0);
	
	
	return 0;
}
