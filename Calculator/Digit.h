
#ifndef nefu_ddos
#define nefu_ddos

#ifndef SINT
#define SINT 1000000000000000 //�������ֵΪ�������˵���ַ��ܽ�������Ҳ����˵�����Ĵ�������
#endif

#include<cstdio>
#include<cstdlib>
#include<iostream>

#include<cstring>

#include<math.h>

using namespace std;

#endif // nefu_ddos


#ifndef MEM
#define MEM
#include <memory.h>
#endif

char comper(char a,char b)
{
  if(a=='#'&&b=='#')
  {
          return 'r';
  }
  if(a!='#'&&b=='#')
  {
          return '>';
  }

  if(a=='#'||a=='(')
  {
        if(a=='('&&b==')')
        return '=';
        else if(a=='#'&&b=='#')
        {
                  return 'r';
        }
        else
        return ('<');
  }

  if(a=='+'||a=='-')
  {
          if(b=='+'||b=='-'||b=='#'||b==')')
                return('>');
          else
                return('<');
  }
  if(a=='*'||a=='/')
  {
          if(b=='+'||b=='-'||b==')'||b=='#'||b=='*'||b=='/'||b=='%')
                return('>');
          else
                return('<');
  }
  if(a=='^')
  {
        if(b=='(')
        return ('<');
        else
        return('>');
  }
   if(a=='%')
  {
        if(b=='(')
                return ('<');
        else
                return ('>');
  }
}

long double calculate(long double m,char c,long double n)
{
        // cout<<"m="<<m<<' '<<"n="<<n<<endl;
        switch(c)
        {
                case '+':return(m+n);break;
                case '-':return(m-n);break;
                case '*':return(m*n);break;
                case '/':return(m/n);break;
                case '^':return(pow(m,n));break;
               // case '%':return fmod(m,n);break;
				case '%':
					if( (int)m == m && (int)n == n )
						return (int)m%(int)n;
					else return SINT;
					break;
        }
}

long double string_temp_dispose(char s[],int l)
{
        int g=0,lenth=0,help=0,l_length;//
        stack<char>q1;//��������
        //q1.push('#');
		stack<long double>q2;//�������
		long double m,n,k;
        char str[100];
        memset(str,'&',100);
        char c;

		q1.push('#');
                g=l;
                for(int i=0;i<g;)//�����ΪʲôҪ��i++�������ֵ�ѭ������
                {

                        if((s[i]>='0'&&s[i]<='9')||s[i]=='.'||(s[i]=='-'&& i==0)||( s[i]=='-' && (!isdigit(s[i-1])&&s[i-1]!=')') ))
                           {
                             str[help++]=s[i++];
                             lenth=1;
                           }

                        else {

                                        if(lenth!=0)
                                        {

                                                k=atof(str);
                                               //  cout<<"������Ϊ��"<<k<<endl;
                                                q2.push(k);
                                                lenth=0;
                                                help=0;
                                                l_length=0;
                                                memset(str,'&',100);

                                        }

                                        else
                                        {
                                                switch(comper(q1.top(),s[i]))
                                                {

                                                case '<':q1.push(s[i]);i++;break;
                                                case '>':
                                                    n=q2.top();q2.pop();
                                                    m=q2.top();q2.pop();
                                                    c=q1.top();q1.pop();


                                                    q2.push(calculate(m,c,n));

                                                   break;
                                                case '=':q1.pop();i++;break;
                                                case 'r':return q2.top();i++;break;

                                                }

                                        }

                            }

                }//end for
}

/*
int main()
{
        int w;
        char s[2000];


        cin>>w;//������ַ����еĸ���
        while(w--)
        {
                scanf("%s",s);

                cout<<"��������Ϊ��"<<s<<endl;
                int len=strlen(s);
                s[len]='#';
                len++;
                printf("%.2f\n",string_temp_dispose(s,len));

        }
}

*/