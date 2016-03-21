#include <iostream>
#include <fstream>
#include <cstdlib>
#include "BMI.h"
using namespace std;

int main()
{
	int h,m;
	BMI range;

	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	
	while(inFile>>h>>m){
		range.setHeight(h);
		range.setMass(m);
		outFile<<range.index()<<"\t"<<range.category(range.index())<<endl;
	}	

	return 0;
}
