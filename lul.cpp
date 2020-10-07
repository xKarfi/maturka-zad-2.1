#include <iostream>

using namespace std;
int y;
int k;
void algo(double x, int k)
{
	double y;
	cout<<"0,";
	y=x;
		for(int i=0; i<k; i++)
		{
		
		if(y>=0.67)
	{
		cout<<"2";
	}
	
	 if(y>=0.33 && y<0.66)
	{
		cout<<"1";
	}
	
	  if(y<0.33)
	{
		cout<<"0";
	}
	
	y*=3;
	if(y>=2)
	{
		y -= 2;
	}
	else if(y>=1)
	{
		y-= 1;
	}
	
}



}


int main(int argc, char** argv) 
{
	

	
	algo(0.33, 4);

	return 0;
}
