#include <iostream>
#include <cstdlib>
#include <ctime>
#include "HeaderFile.h"

using namespace std;


int printSomething(int x);

class Bank{

public:

	void print(){

		cout<<"Class bank "<<endl;
	}
};

	HeaderFile::HeaderFile(){
		cout<<"Constructor"<<endl;
	}
	HeaderFile::~HeaderFile(){
		cout<<"deconstructor"<<endl;
	}

	void HeaderFile::print(){
		cout<<"print function"<<endl;
	}

int main(){

	HeaderFile obj;
	HeaderFile *p = &obj;
	p->print();
	
	Bank b; 
	b.print();

cout<< printSomething(10) <<endl;

 
}

int printSomething(int x){

	if(x == 0){
		return x;
	}else{
		cout<<x<<endl;
		return printSomething(x-1);
	}

}



