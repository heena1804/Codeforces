#include<iostream>
using namespace std;
char vowels[]={'a', 'e', 'i', 'o', 'u', 'y'};
bool isvowel(char c)
{
	for(int i=0;i<6;i++)
	{
		if(c==vowels[i])
		return true;
	}
	return false;
}
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		s[i]=tolower(s[i]);
		if(!isvowel(s[i]))
		{
			cout<<"."<<s[i];
		}
		
	}
	cout<<endl;
	return 0;
}
