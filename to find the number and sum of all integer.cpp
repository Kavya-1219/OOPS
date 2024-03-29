#include<iostream>
using namespace std;
class divisible
{
	public:
		int i,count=0;
		divisible()
		{
			for(i=100;i<=200;i++)
			{
				if(i%9==0)
				{
					count++;
					cout<<i<<endl;
				}
		    }
		    cout<<count<<endl;
		}
};
int main()
{
	divisible d;
}
