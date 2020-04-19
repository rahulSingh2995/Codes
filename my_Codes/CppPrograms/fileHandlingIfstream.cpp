#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("myfile.txt");
	char ch[1024];
	int i=0;
/*	//Method-1
	while(!fin.eof())		//eof() returns 1 when it reaches the end of file
	{
	fin>>ch[i];		//Here, the blank spaces between words are not printed
	i++;
	}
*/
	int flag=1;
	//Method-2
	while(!fin.eof())		//eof() returns 1 when it reaches the end of file
	{
	ch[i]=fin.get();	// get() doesn't consider space as data separator and prints blank spaces too
	cout<<"Tellg "<<i<<" : "<<fin.tellg()<<endl;
	if(flag)
	{	
		if(i==6)
		{ 
			fin.seekg(0);
			flag=0;
		}
	}
	i++;
	}

	cout<<"Read: "<<ch<<endl;
	
	fin.close();
	return 0;
}
