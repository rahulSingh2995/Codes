#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
	ofstream fout;
	fout.open("myfile.txt",ios::out);
	
	fout<<"I love Nivedita";
	cout<<"TellP"<<fout.tellp();

	fout.close();	


	return 0;
}
