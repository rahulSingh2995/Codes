#include<iostream>
using namespace std;
void NRZ(bool [], int n);
void manchester(bool bit[],int n);
void diffmanchester(bool bit[],int n);
void NRZI(bool bit[],int n);
int main(){
    bool bit[20];int i,n;
    cout<<"\nEnter the  total bit size:";
    cin>>n;
    cout<<"\nEnter the bits with spaces:";
  
  
    for(i=0;i<n;i++)
    {
        cin>>bit[i];
    }


 NRZ( bit, n);
 NRZI( bit, n);
 manchester(bit ,n);
 diffmanchester(bit ,n);
    return 0;
}
void NRZI(bool bit[],int n)
{
    char t='L';
    cout<<"\n\nNRZI         ";
        cout<<"L ";
    	for(int i=1;i<n;i++){
            if(bit[i]==1)
            {
                if(t=='H')
                {
                    t='L';
                }
                else
                    t='H';
            }
            cout<<t<<" ";
        }

}

void NRZ(bool bit[],int n)
{
    cout<<"\nNRZ          ";
    for(int i=0;i<n;i++){
        if(bit[i]==0)
        cout<<"L ";
        else
        cout<<"H ";
        }
    
}

void manchester(bool bit[],int n)
{

cout<<"\nMANCHASTER   ";
    for( int i=0;i<n;i++)
    {
        if(bit[i]==0)
        cout<<"LH ";
	else
        cout<<"HL ";
        
    }

}
void diffmanchester(bool bit[],int n)
{
	cout<<"Previous bit 0\n";
	bool bitt=0;
	cout<<"\n DIFFERNTIAL MANCHASTER  ";
	for (int i=0;i<n;i++)
	{
		if(bit[i]==1)
		{
			if(bitt==0)
			{
			 cout<<"10 ";
			 bitt=0;			 
			}	
			else 
			{
			 cout<<"01";
			 bitt=1;			 
			}
		 }
		else
	       	{
			
			if(bitt==0)
			{
			 cout<<"01 ";
			 bitt=1;			 
			}	
			else 
			{
			 cout<<"10 ";
			 bitt= 0;			 
			}
		}

      }


}

