//Problem : https://www.hackerearth.com/code-monk-array-strings/algorithm/chandu-and-consecutive-letters/

#include <iostream>
using namespace std;

int main()
{
    int n;
    string s,s1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
    	cin>>s;
    	s1 = "";
    	s1 += s[0];
    	for(int j=1; j<s.size();j++)
    	{
    		if(s1[s1.size()-1]!=s[j])
    			s1+=s[j];
    	}
    	cout<<s1<<endl;
    }
    return 0;
}