#include<iostream>
using namespace std;
int max_sum_subarray(int a[],int n)
{
	int s[30],i,max = -100;
	s[0] = a[0];
	for(i=1;i<n;i++)
	{
		if(s[i-1] > 0)
		{
			s[i] = s[i-1] + a[i];
		}
		else
		{
			s[i] = a[i];
		}
		if(s[i] > max)
		{
			max = s[i];
		}
	}
	return max;
}
int main()
{
	int a[30],n,i;
	cout << "enter size of array "<<endl;
	cin >> n;
	cout << "enter array " <<endl;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << "max_sum_subarray value " << max_sum_subarray(a,n) <<endl;
}
