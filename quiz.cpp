/*
 * quiz.cpp
 *
 *  Created on: Aug. 15, 2020
 *      Author: rohan
 */

#include<iostream>
#include<vector>

#include <bits/stdc++.h>

struct student{
	char name[10],ans2;
	int mark,ans3;
	float ans1;

};
bool compare(student a, student b)
{
	//for ascending order replace with a.roll <b.roll
	if(a.mark > b.mark)
		return 1;
	else
		return 0;
}
bool cmp(std::pair<std::string, int>& a,
         std::pair<std::string, int>& b)
{
    return a.second > b.second;
}


int main()
{

	student s[3];
	//char sname[3];
	//int smark[3];
	int n=3;
	float ans1=3.14;

	for(int i=0;i<n;i++)
	{
		std::cout<<"enter student's name:"<<std::endl;
		std::cin>>s[i].name;
		s[i].mark =0;


		std::cout<<"Welcome  "<<s[i].name<<std::endl;
		//show rules of quiz
		std::cout<<"There is three questions in this quiz, Type of each is listed below!!"<<std::endl;
		std::cout<<"1. Arithmetic"<<std::endl<<"2. Logical Question. Please answer with true or false"<<std::endl;
		std::cout<<"3. Mathematical Question"<<std::endl;
		std::cout<<"What is the value of pi?"<<std::endl;
		std::cin>>s[i].ans1;      //take ans of 1st quiestion

		try{
			if(s[i].ans1==ans1){
				std::cout<<"Well done "<<s[i].name<<std::endl;
				s[i].mark=s[i].mark+10;

			}

			else{
				std::cout<<"Opppssss... Wrong Answer!!"<<std::endl;
				throw std::logic_error( "logic error" );
			}

		}
		catch ( std::exception &e )
		   {
				std::cerr << "Caught: " << e.what( ) << std::endl;
				std::cerr << "Type: " << typeid( e ).name( ) << std::endl;

		   };
		//end of try-catch statement
		std::cout<<"Q2. A parallelogram has parallel opposite sides AND it has five sides."<<std::endl;
		std::cout<<"writ t for true or write f for false"<<std::endl;
		std::cin>>s[i].ans2;    //take answer of 2nd question

		try{
			if(s[i].ans2=='f'){
				std::cout<<"You are doing well..  "<<s[i].name<<std::endl;
				s[i].mark=s[i].mark+10;
			}
			else{
				std::cout<<"Opppssss... Wrong Answer!!"<<std::endl;
				throw std::logic_error( "logic error" );
			}
		}
		catch ( std::exception &e )
		{
			std::cerr << "Caught: " << e.what( ) << std::endl;
			std::cerr << "Type: " << typeid( e ).name( ) << std::endl;

		};
		//end of try-catch statement
		std::cout<<"Q3. Sin^2 + cos^2 = ?"<<std::endl;
		std::cin>>s[i].ans3;   //take answer of 3rd question

		try
			{
			if(s[i].ans3==1){
				std::cout<<"It's correct Answer..."<<std::endl;
				s[i].mark = s[i].mark+10;
			}
			else{
				std::cout<<"Sorry! wrong answer!!!!!"<<std::endl;
				throw std::logic_error( "logic error" );
			}
     	}
		catch ( std::exception &e )
		{
			std::cerr << "Caught: " << e.what( ) << std::endl;
			std::cerr << "Type: " << typeid( e ).name( ) << std::endl;

		};
		//end of try-catch statement
		std::cout<<"End of quiz, Mark is  "<<s[i].mark<<std::endl;
	}
	//End of for loop
	//-------Algorithm for sort----------
	std::sort(s,s+n,compare);   //s is student's structure, n is number of student, compare is method.

	std::cout<<"Sorted list..."<<std::endl;
		for(int i=0;i<n;i++)
		{
			std::cout<<s[i].mark<<" ";
			std::cout<<s[i].name<<std::endl;
		}


	return 0;

}
