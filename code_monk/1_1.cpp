/*
Problem Link: https://www.hackerearth.com/code-monk-array-strings/algorithm/terrible-chandu/
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,s1;
	int n;
	cin>>n;
	
	for(int k=0;k<n;k++)
	{
		cin>>s;
		s1="";
		for(int i=s.size()-1;i>=0;i--)
		{
			s1 += s[i];
		}
		cout<<s1<<endl;
	}
  
    return 0;
}