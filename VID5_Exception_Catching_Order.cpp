#include<iostream>
#include<exception>
using namespace std;
void goesWrong()
{
	bool error1=true;
	bool error2=false;

	if(error1)
	{
		throw bad_alloc();
	}
	if(error2)
	{
		throw exception();

	}
}

int main()
{
	try
	{

		goesWrong();

	}

	catch (exception &e)
	{
		cout<<"Error Exception : "<<e.what();//In output this would be print because goesWrong() is throwing bad_alloc and bad_alloc() is the member of the exception class so base class(exception) function is being called

	}
	
	catch (bad_alloc &e)//bad_alloc is the child class of exception class
	{
		cout<<"Error bad_alloc : "<<e.what();
	}
}