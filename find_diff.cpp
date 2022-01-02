#include<cstdio>
#include<iostream>
using namespace std;
#include<cstdlib>
#include <vector> 
#include <string> 
#include <fstream> 

int main()
{
	char str[100];
    char str1[100];
    char pstr[100];
    char pstr1[100];
	ifstream ofile("./origral.txt"); //项目的原始结果，需要改名
    ifstream mfile("./result.txt");  //突变体产生的结果，需要改名
    
    if (!ofile.is_open()) 
    { 
        cout << "error1" << endl; 
    } 

    if (!mfile.is_open()) 
    { 
        cout << "error2" << endl; 
    } 


    ofile.getline(str,100);
    mfile.getline(str1,100);
    for(int i=0;i<96;i++)
    {
        if(strcmp(str,str1)!=0)
            cout<<pstr<<endl;
        memset(pstr1,'\0',100);
        memset(pstr,'\0',100);
        memcpy(pstr,str,sizeof(str));
        memcpy(pstr1,str1,sizeof(str));
        memset(str1,'\0',100);
        memset(str,'\0',100);
        ofile.getline(str,100);
        mfile.getline(str1,100);
    }

	return 0;
}
