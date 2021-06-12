#include<iostream>
using namespace std;
class sample
{
int a,b;
public:
	void setvalue(int,int);
friend float mean(sample s);	
};
float mean(sample s) 
{
	return float((s.a+s.b)/2.0);
}
int main()
{
	sample s;
s.setvalue(26,24);
	cout <<"mean is" << mean(s);
	return 0;
	}
