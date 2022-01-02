
#ifndef PI
#define PI 3.1415926535898
#endif

#ifndef SINT
#define SINT 1000000000000000//�������ֵΪ�������˵���ַ��ܽ�������Ҳ����˵�����Ĵ�������
#endif
//����ֱ���õĺ�������Ͳ���ֱ��д��
//tanҲ�ǿ���ֱ���õĺ�������Ϊ���벻����ԭPI

#ifndef MAIN
#define MAIN

#define MAX 100
#define num 25
const char func_array[num][20]={"SIN","COS","TAN","ARCSIN","ARCCOS","ARCTAN","SINH","COSH","TANH","LOG10","LN","EXP","FACT","SQRT","CUBEROOT","LOG","POW","MOD","YROOT","AVG","SUM","VAR","VARP","STDEV","STDEVP"};//��������
typedef struct Fun{
 
 int canshu_number;//��ʾ���ַ����д��ݵĲ����ĸ���
 int std_number;//��ʾ�����ı�׼�����ĸ���
 int bracket;//��ʾ��������������еĸ���
 int count;//��¼��ǰ�����ڱ���ߵ�λ��
 long double array[num];//���ܲ�������
 char temp[MAX];
}fun;
fun function_array[num];
#endif


//function_dispose(int number,long double count[],int len)

long double SIN(int number,long double count[],int len)
{
	if(function_array[number].std_number==len)
	{
	   if((int)(count[0]/PI)==count[0]/PI)
		    return sin(0.0);
		else 
		{
			return sin(count[0]*PI/180);
	    }
	}
		return SINT;
	
}

long double COS(int number,long double count[],int len)
{
	if(function_array[number].std_number==len  )
	{
		if((int)(count[0]/PI/2)==count[0]/PI/2 && (int)(count[0]/PI)%2 != 0)
		    return 0.0;
		return cos(count[0]*PI/180);
	}
	return SINT;
}

long double TAN(int number,long double count[],int len)
{
	if(function_array[number].std_number==len)
	{
		//if((int)fmod(count[0],PI)==0&&abs(fmod(count[0]/PI,2))==1)
			///return SINT;
		//else
		return tan(count[0]*PI/180);
	}
	return SINT;
}

long double ARCSIN(int number,long double count[],int len)
{
	if(function_array[number].std_number==len)
	{
		if(count[0]>1||count[0]<-1)
		    return SINT;
		else
		{
			return asin(count[0]);
		}
			
	}
		return SINT;
}
//������
long double ARCCOS(int number,long double count[],int len)
{
	if(function_array[number].std_number==len)
	{
		if(count[0]>1||count[0]<-1)
		return SINT;
		else
			return acos(count[0]);
	}
	return SINT;
}

long double ARCTAN(int number,long double count[],int len)
{
	if(function_array[number].std_number!=len)//if(function_array[number].std_number==len)
	{
			return atan(count[0]);
	}
	return SINT;
}

long double SINH(int number,long double count[],int len)
{
	if(function_array[number].std_number==len)
	{
		return sinh(count[0]);
	}
	return SINT;
}

long double COSH(int number,long double count[],int len)
{
	if(function_array[number].std_number==len)
	{
		return cosh(count[0]);
	}

	return SINT;
}

long double TANH(int number,long double count[],int len)
{
	if(function_array[number].std_number==len)
	{
		return tanh(count[0]);
	}
	return SINT;
}

long double LOG10(int number,long double count[],int len)
{
	if(function_array[number].std_number==len&&count[0]>0)
	{
		return log10(count[0]);
	}
	return SINT;
}
long double LN(int number,long double count[],int len)
{
	if(function_array[number].std_number==len&&count[0]>0)
	{
		return log(count[0]);
	}
	return SINT;
}

long double EXP(int number,long double count[],int len)
{
	if(function_array[number].std_number==len)
	{
		return exp(count[0]);
	}
	return SINT;
}


//�׳�
long double FACT(int number,long double count[],int len)
{
	long double result=count[0];
	long long rel=1.0;
	if(function_array[number].std_number==len&&count[0]>=0)
	{
		if(floor(count[0])>=count[0])//if(floor(count[0])!=count[0])
			return SINT;
		else
		{
			if(count[0]<=0)//if(count[0]==0)
				return 1;
			while(result==1.0)//while(result!=1.0)
			{
				rel*=result;
				result=result-1.0;
			}
			//cout<<"the result is "<<rel<<endl;
			return rel;
		}
	}
	return SINT;
}

long double SQRT(int number,long double count[],int len)
{
	if(function_array[number].std_number==len&&count[0]>=0)
	{
		return sqrt(count[0]);
	}
	return SINT;
}

long double CUBEROOT(int number,long double count[],int len)
{
	if(function_array[number].std_number==len)
	{
		if(count[0]<0) return  (-1)*pow(abs(count[0]),(long double)1.0/3);
		else return  pow(count[0],(long double)1.0/3);
	}
	return SINT;
}


//����������������
long double LOG(int number,long double count[],int len)
{
	if(function_array[number].std_number==len&&count[1]!=1&&count[0]>0&&count[1]>0)
	{
		return log10(count[0])/log10(count[1]);
	}
	return SINT;
}
//��x��npower���ݣ��������ָ��ȫ��������Ҳ���˷�����
long double POW(int number,long double count[],int len)
{
	if(function_array[number].std_number==len)
	{
		return pow(count[0],count[1]);
	}
	return SINT;
}

long double MOD(int number,long double count[],int len)
{
	if(function_array[number].std_number==len && count[1]!=0)
	{
		return fmod(count[0],count[1]);
	} 
	return SINT;
}

//��x��y�η�����yΪ����ֵ����1������
long double YROOT(int number,long double count[],int len)
{
	if(function_array[number].std_number==len)
	{
		if(fmod(count[1],2)==0)
		{
			if(count[0]<0)
				return SINT;
			else
				return pow(count[0],1.0/count[1]);
		}
		else
		{
			if(count[0]<0) return  (-1)*pow(abs(count[0]),(long double)1.0/3);
		    else return  pow(count[0],(long double)1.0/3);
		}
		
	}
	return SINT;
}

long double SUM(int number,long double count[],int len)
{
	long double rel=0.0;
	while(len!=0)
	{
		rel+=count[len-1];
		len--;
	}

	return rel;
}

long double AVG(int number,long double count[],int len)
{
	long double rel=0.0;
	int l=len;
	while(len!=0)
	{
		rel+=count[len-1];
		len--;
	}

	return rel/l;
}

//calculator the follow function

long double VAR(int number,long double count[],int len)
{
	long double avg;
	long double var=0;
	avg=AVG(number,count,len);
	for(int i=0;i<len;i++)
	{
		var+=(count[i]-avg)*(count[i]-avg);
	}
	//cout<<"var �Ľ��Ϊ"<<var/(len-1)<<endl;
	return var/(len-1);
}




//���ϵ����巽��
long double VARP(int number,long double count[],int len)
{
	long double avg;
	long double var=0;
	avg=AVG(number,count,len);
	for(int i=0;i<len;i++)
	{
		var+=(count[i]-avg)*(count[i]-avg);
	}
	
	//cout<<"var �Ľ��Ϊ"<<var/len<<endl;
	return var/len;
}

//���ϵĹ����׼��
long double STDEV(int number,long double count[],int len)
{
	long double avg;
	long double var=0;
	avg=AVG(number,count,len);
	for(int i=0;i<len;i++)
	{
		var+=(count[i]-avg)*(count[i]-avg);
	}
	
	return sqrt(var/(len-1));
}

//���ϵ������׼��
long double STDEVP(int number,long double count[],int len)
{
	long double avg;
	long double var=0;
	avg=AVG(number,count,len);
	for(int i=0;i<len;i++)
	{
		var+=(count[i]-avg)*(count[i]-avg);
	}
	
	return sqrt(var/len);
}
