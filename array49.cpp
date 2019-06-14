#include <iostream>  
#include <string.h>  
using namespace std;  

int main()  
{  
		string input;  
		int i, num;  
		getline(cin,input);  
		cin>>num;  
		int len=input.size();  
		if(len<101)  
		{  
				for(i=0;i<len;i++)  
				{  
						int tmp=input[i];  
						if(tmp>='a' && tmp<='z')  
						{  
								tmp+=num;  
								if(tmp>122)  
										tmp-=26;  
						}  
						else if(tmp>='A' && tmp<='Z')  
						{  
								tmp+=num;  
								if(tmp>90)  
										tmp-=26;  
						}  
						else if(tmp>='0' && tmp<='9')  
						{  
								tmp+=num;  
								if(tmp>57)  
										tmp-=10;  
						}  
						input[i]=tmp;  
						cout<<input[i];  
				}  
				cout<<endl;  
		}  
		return 0;  
}  
