#include<iostream>

using namespace std;


class human{
	public:
		static int human_count;   //we can only define static variables outside the class.
		//there is one copy of static variable for all objects.
		human()
		{
			human_count++;
		}
	void humantotal(){
		cout<<human_count<<" people are part of this function."<<endl;
	}
	
};
int human::human_count=0;

int main()
{
	cout<<human::human_count;
	human anil;
	human james;
	human ravi;
	human mudra;
	mudra.humantotal();
	james.humantotal();
	anil.humantotal();
	
	return 0;
}
