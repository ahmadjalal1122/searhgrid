#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
int stringlength(char*str)
{
	int c=0;
	for(char* hamp=str;*hamp!='\0';hamp++)
	{
		c++;
	}
	return c;
}
void horizontal_verticall(int&index,int&c,int&r,char**&ptr1,char**&ptr)
{
	if(index==0)
		{
			//Horizontally
			int row=rand()%10; 
			int col=rand()%2;
			for(int i=0;i<ptr[index][i]!='\0';i++)
				{
				// this if condition check whether a space is present or not in any word and then remove this space
					if(ptr[index][i]==32)
					{
 						ptr[index][i]=ptr[index][++i];
					}
					//this if condition checks if column exceeds  then break the loop
					if(col>c-1)
						break;
					//this line place the word in grid
					ptr1[row][col]=ptr[index][i];
					 col++;
				}
		}
/////////////////////////////////
		if(index==3)
		{
		///diagonal
			int row=rand()%5;
			int col=rand()%10;
			for(int i=0;i<ptr[index][i]!='\0';i++)
				{
					// this if condition check whether a space is present or not in any word and then remove this space
					if(ptr[index][i]==32)
					{
 						ptr[index][i]=ptr[index][++i];
					}
					//this if condition checks if column decreases than zero  then break the loop
					if(col<c-c)
						break;
						//this line place the word in grid
					 ptr1[row][col]=ptr[index][i];
				
					col--;
					
				}
		}
}
void topbottom(int&index,int&c,int&r,char**&ptr1,char**&ptr)
{
		if(index==4)
		{	
			int row=8;
			int col=0;
			for(int i=0;i<ptr[index][i]!='\0';i++)
				{
			// this if condition check whether a space is present or not in any word and then remove this space
					if(ptr[index][i]==32)
					{
 						ptr[index][i]=ptr[index][++i];
					}
			//this if condition checks if row decreases than zero  then break the loop
					if(row<r-r)
						break;
						//this line place the word in grid
					 ptr1[row][col]=ptr[index][i];
				
					row--;
			}
		}
//////////////////////

		if(index==1)
		{
		///vertically
			int row=5;
			int col=2;
			for(int i=0;i<ptr[index][i]!='\0';i++)
				{
						// this if condition check whether a space is present or not in any word and then remove this space
					if(ptr[index][i]==32)
					{
 						ptr[index][i]=ptr[index][++i];
					}
					//this if condition checks if row exceeds  then break the loop
					if(row>r-1)
						break;
						//this line place the word in grid
					 ptr1[row][col]=ptr[index][i];
				
					 row++;
				}
		}
	
}
void diagonalright(int&index,int&c,int&r,char**&ptr1,char**&ptr)
{
			if(index==2)
		{
		///diagonal 
		
			int row=3;
		
			int col=4;

			for(int i=0;i<ptr[index][i]!='\0';i++)
				{
						// this if condition check whether a space is present or not in any word and then remove this space
					if(ptr[index][i]==32)
					{
 						ptr[index][i]=ptr[index][++i];
					}
					//this if condition checks if column and row exceeds  then break the loop
					if(row>r-1||col>c-1)
						break;
						//this line place the word in grid
					 ptr1[row][col]=ptr[index][i];
					
					col++;row++;
				}
			}
//////////////////////
						if(index==5)
		{
		///diagonal 

			int row=9;
	
			int col=9;
	
			for(int i=0;i<ptr[index][i]!='\0';i++)
				{
						// this if condition check whether a space is present or not in any word and then remove this space
					if(ptr[index][i]==32)
					{
 						ptr[index][i]=ptr[index][++i];
					}
			//this if condition checks if column and row decreases than zero  then break the loop
					if(row<r-r||col<c-c)
						break;
			//this line place the word in grid
					 ptr1[row][col]=ptr[index][i];
				
					row--;col--;
			}
		}
}
void diagonalleft(int&index,int&c,int&r,char**&ptr1,char**&ptr)
{
		if(index==6)
		{
		///diagonal 
	
			int row=9;
		
			int col=1;

			for(int i=0;i<ptr[index][i]!='\0';i++)
				{
						// this if condition check whether a space is present or not in any word and then remove this space
					if(ptr[index][i]==32)
					{
 						ptr[index][i]=ptr[index][++i];
					}
	//this if condition checks if row decreases than zero  then break the loop
					if(col<c-c)
						break;
				//this line place the word in grid
					 ptr1[row][col]=ptr[index][i];
			     	col++;row--;
			   }
		}
/////////////////////////////////////////
		if(index==7)
		{
		///diagonal 
			int row=1;
			int col=9;
			for(int i=0;i<ptr[index][i]!='\0';i++)
				{
						// this if condition check whether a space is present or not in any word and then remove this space
					if(ptr[index][i]==32)
					{
 						ptr[index][i]=ptr[index][++i];
					}
		//this if condition checks if row decreases than zero  then break the loop
					if(row>r-1|| col>c-1)
						break;
					//this line place the word in grid
					 ptr1[row][col]=ptr[index][i];
				
				row++;col--;
			}
		}
///////////////////////////
		if(index==9)
		{
		///diagonal 
			int row=0;
			int col=0;
 			for(int i=0;i<ptr[index][i]!='\0';i++)
				{
						// this if condition check whether a space is present or not in any word and then remove this space
					if(ptr[index][i]==32)
					{
 						ptr[index][i]=ptr[index][++i];
					}
				//this if condition checks if row decreases than zero  then break the loop
					if(row>r-1|| col>c-1)
						break;
					//this line place the word in grid
					 ptr1[row][col]=ptr[index][i];
				
  					row++;col++;
			}
		}
}

/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/
int leftright_rightleft(int& k,int& i,int& j,int& c,int& a,int& b,char**&ptr,string arr[],int&count,ofstream&off)
{
	count=0;int d=0;
////////////////////////////////////left to right//////////////////////////////////////////////
// this loop is check left to right 			
			 for(int a=j;d<arr[k].length();a++,d++)
					{
		//this if condition check each letter that user enter and letter present on grid
						if(arr[k][d]==ptr[i][a])
						{
							count++;
						}
						if(count==arr[k].length())
						{
							cout<<"("<<i<<","<<j<<")("<<i<<","<<j+arr[k].length()-1<<")";
							
							off<<"("<<i<<","<<j<<")("<<i<<","<<j+arr[k].length()-1<<")\n";

							cout<<endl;
							return -1;
							
						}
							
						if(arr[k][d]!=ptr[i][a])
						{
								break;
						}
					}	
	///// below code is to check right towards left 
			 count=0;d=0;
			 	for(int a=j;d<arr[k].length();a--,d++)
					{
						if(arr[k][d]==ptr[i][a])
						{
							count++;
						}
						if(count==arr[k].length())
						{
							cout<<"("<<i<<","<<j<<")"<<"("<<i<<","<<j-arr[k].length()+1<<")";
							off<<"("<<i<<","<<j<<")"<<"("<<i<<","<<j-arr[k].length()+1<<")\n";
							cout<<endl;
							return -1;
						
						}
						if(arr[k][d]!=ptr[i][a])
						{
								break;
						}
					}
}
int topbottom_bottomtop(int& k,int& i,int& j,int& c,int& a,int& b,char**&ptr,string arr[],int&count,ofstream&off)
{
				count=0;int d=0;
						int w=i;
					for(int a=j;d<arr[k].length();w++,d++)
					{
						if(arr[k][d]==ptr[w][a])
						{
							count++;
						}
						if(count==arr[k].length())
						{
							cout<<"("<<i<<","<<j<<")"<<"("<<i+arr[k].length()-1<<","<<j<<")";
							off<<"("<<i<<","<<j<<")("<<i<<","<<j+arr[k].length()-1<<")\n";
							cout<<endl;
							return -1;
						}
						if(arr[k][d]!=ptr[w][a])
						{
								break;
						}
					}
					////////////////////////////////////
						count=0; d=0;int q=i;
					for(int a=j;d<arr[k].length();q--,d++)
					{
						if(q<0)
							break;
						if(arr[k][d]==ptr[q][a])
						{
							count++;
						}
						if(count==arr[k].length())
						{
							cout<<"("<<i<<","<<j<<")"<<"("<<i-arr[k].length()+1<<","<<j<<")";
							off<<"("<<i<<","<<j<<")"<<"("<<i-arr[k].length()+1<<","<<j<<")\n";
							cout<<endl;
							return -1;
						}
						if(arr[k][d]!=ptr[q][a])
						{
								break;
						}
					}
}
int rightdiagonal(int& k,int& i,int& j,int& c,int& a,int& b,char**&ptr,string arr[],int&count,ofstream&off)
{
	count=0; int d=0;
					int r=i;
					for(int a=j;d<arr[k].length();a++,r++,d++)
					{
						if(arr[k][d]==ptr[r][a])
						{
							count++;
						}
						if(count==arr[k].length())
						{
							cout<<"("<<i<<","<<j<<")"<<"("<<i+arr[k].length()-1<<","<<j+arr[k].length()-1<<")";
								off<<"("<<i<<","<<j<<")("<<i<<","<<j+arr[k].length()-1<<")\n";
							cout<<endl;
							return -1;
						}
						if(arr[k][d]!=ptr[r][a])
						{
								break;
						}
					}
		//////////////////////////////////////////////////////
					count=0; d=0; int g=i;
						for(int a=j;d<arr[k].length();a--,g--,d++)
					{
						if(a<0||g<0)
							break;
						if(arr[k][d]==ptr[g][a])
						{
							count++;
						}
						if(count==arr[k].length())
						{
							cout<<"("<<i<<","<<j<<")"<<"("<<i-arr[k].length()+1<<","<<j-arr[k].length()+1<<")";
							off<<"("<<i<<","<<j<<")"<<"("<<i-arr[k].length()+1<<","<<j-arr[k].length()+1<<")\n";
							cout<<endl;
							return -1;
						}
						if(arr[k][d]!=ptr[g][a])
						{
								break;
						}
					}
}
int leftdiagonal(int& k,int& i,int& j,int& c,int& a,int& b,char**&ptr,string arr[],int&count,ofstream&off)
{
		count=0;int d=0; int u=i;
					for(int a=j;d<arr[k].length();a--,u++,d++)
					{
						if(a<0)
							break;
						if(arr[k][d]==ptr[u][a])
						{
							count++;
						}
						if(count==arr[k].length())
						{
							cout<<"("<<i<<","<<j<<")"<<"("<<i+arr[k].length()-1<<","<<j-arr[k].length()+1<<")";
								off<<"("<<i<<","<<j<<")("<<i<<","<<j+arr[k].length()-1<<")\n";
							cout<<endl;
							return -1;
						}
						if(arr[k][d]!=ptr[u][a])
						{
								break;
						}
					}
		//////////////////////////////////////////////////
					count=0; d=0;int o=i;
					for(int a=j;d<arr[k].length();a++,o--,d++)
					{
						if(o<0)
							break;
						if(arr[k][d]==ptr[o][a])
						{
							count++;
						}
						if(count==arr[k].length())
						{
							cout<<"("<<i<<","<<j<<")"<<"("<<i-arr[k].length()+1<<","<<j+arr[k].length()-1<<")";
								off<<"("<<i<<","<<j<<")("<<i<<","<<j+arr[k].length()-1<<")\n";
							cout<<endl;
							return -1;
						}
						if(arr[k][d]!=ptr[o][a])
						{
								break;
						}
					}
}
void main()
{
	char option;
	cout<<"                    **   ** ***** *     * *    *\n"
		<<"                    * * * * *     * *   * *    *\n"
		<<"                    *  *  * ***** *  *  * *    *\n"
		<<"                    *     * *     *   * * *    *\n"
		<<"                    *     * ***** *     * ******\n";
	cout<<"--------------------------------------------------------------------------------------\n"
		<<"	1: CREATE GRID	|	2: SEARCH WORD FROM GRID  |	3: QUIT \n"
		<<"--------------------------------------------------------------------------------------\n";
point:;
// the do while takes the option(input) from user until he/she enter 'Q'
	do
{	
	cout<<"  PRESS \"C\" TO CREATE A GRID\n"
		<<"  PRESS \"S\" TO SEARCH WORD FROM GRID\n"
		<<"  PRESS \"Q\" TO QUIT THE INTERFACE\n";
	cout<<"PLEASE ENTER YOUR CHOICE : ";
	
	cin>>option;
	
	if(option=='C')
	{
		int v,r,c;
	ifstream fin;
	ofstream output;
		cout<<"**************PLEASE ENTER THE NAME OF INPUT FILE WHICH HAVE WORDS******************\nINPUT FILENAME:  ";
		char ali[50];
		cin>>ali;
		fin.open(ali);

		cout<<"\n\n*************PLEASE ENTER NAME OF OUTPUT FILE**********************\nOUTPUT FILENAME: ";
		char f[20];
		cin>>f;
		
		cout<<"\n\n***********PLEASE ENTER NUMBER OF WORDS IN A FILE*******************\nNUMBER OF WORDS IN FILE:  ";
		cin>>v;
		cout<<"\n\n*************PLEASE ENTER NUMBR OF ROWS IN A GRID********************\nROWS:  ";
		cin>>r;
		cout<<"\n\n*************PLEASE ENTER NUMBR OF COLUMNS IN A GRID********************\nCOLUMNS:  ";
		cin>>c;

		char data[40];
	// getting space on heap to store the words which are in file
		char** ptr=new char*[v];
		int t=0;int max=0;
		char**ptr1=0;
		int index=0;
	for(int i=0;i<v;i++)
	{
		// getline is taking data from file that is words
			fin.getline(data,40);
			int p=stringlength(data);
			ptr[t]=new char[p+1];
			int k;
			for(k=0;data[k]!='\0';k++)
				{
					ptr[t][k]=data[k];
				}
			ptr[t][k]='\0';
			 t++;
		// this if store the length of longest word in max
			 if(max<p)
			 {
				max=p;
			 }																							
	}
// this if condition check if user entered rows and columns are greater or equal to length of longest word then it opens the output file
	if(r >= max || c>= max)
	{
			output.open(f);
			cout<<" GRID SUCCESSFULLY GENERATE IN -> "<<f<<endl;
	}
//this if condition check if user entered rows and columns are less then the length of longest word then again require input from user
	if(r < max|| c<max)
	{
		cout<<"Grid cannot be formed\n";
		cout<<"Press any key to return to the home screen\n";
		system("pause");
		goto point;
	}
// following loop generates 2D space and first place empty spaces on it 
	ptr1=new char*[r];
	for(char j=0;j<r;j++)
	{
		ptr1[j]=new char[c];
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			ptr1[i][j]=32;
		}
	}	
// we call the desired functionalities for v(user entered word) time
	for(int i=0;i<v;i++)
	{
		horizontal_verticall(index,c,r,ptr1,ptr);
		topbottom(index,c,r,ptr1,ptr);
		diagonalright(index,c,r,ptr1,ptr);
		diagonalleft(index,c,r,ptr1,ptr);
		index++;
	}
	char ascii;
// this will generate random ascii characters in grid if and only if there is an empty space
	for(int i=0;i<r;i++)	
	{
		for(int j=0;j<c;j++)
		{
			int q=rand()%26;
			ascii='a'+q;
			if(ptr1[i][j]==32)
			{
				ptr1[i][j]=ascii;
			}
		}
	}
// it places the output in file
	for(int	i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			output<<ptr1[i][j]<<" ";
		}
		output<<"\n";
	}
}
/* $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/

	if(option=='S')
	{	
	
	ifstream iff;
	cout<<"******************PLEASE ENTER THE INPUT FILE WHICH HAS A GRID******************\nINPUT FILENAME:  ";
	char filename1[50];
	cin>>filename1;
	iff.open(filename1);
	cout<<"\n\n***************PLEASE ENTER THE INPUT FILE WHICH HAS A DIMENSIONS,TEST CASES AND WORDS TO BE SEARCHED****************"
		 <<"\nINPUT FILENAME:  ";
		ifstream fin2;
		char filename2[50];
		cin>>filename2;
		fin2.open(filename2);
	int a=0;
	int b=0;
	int n=0;

		fin2>>a;// taking rows from file
		fin2>>b;// taking cols from filee
		fin2>>n;// taking testcases from file

	cout<<"\n\n****************NOW FINALLY ENTER THE NAME OF OUTPUT FILE WHERE YOU WANT TO STORE INDEXS******************\nOUTPUT FILENAME:  ";
	ofstream _cout;
	char filename3[50];
	cin>>filename3;
	_cout.open(filename3);

	char data2[100];
	// generating 2D heap to place grid letter on it
	char**heap=new char*[a];
	int l=0;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{	
			iff>>data2[j];
		}
			heap[l]=new char[b];
			int k;
			for(k=0;k<b;k++)
				{
					heap[l][k]=data2[k];
				}
			 l++;																					
	}
	int counter=1;
	string arr[20];
// taking words input from file
	for(int i=0;i<n;i++)
	{
		cout<<"word "<<counter<<":\t";
		fin2>>arr[i];
		cout<<arr[i]<<endl;
		arr[i].length();
		counter++;
	}
// calling the desired functionalities
	int co=0;
	int m,g,h,p;
	for(int k=0;k<n;k++)
	{
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{			
				if(arr[k][0]==heap[i][j])
				{   
						m= leftright_rightleft(k,i,j,n,a,b,heap,arr,co,_cout);
						if(m==-1)
						{
							goto ali;
						} 
						g=topbottom_bottomtop(k,i,j,n,a,b,heap,arr,co,_cout);	
						if(g==-1)
						{
							goto ali;
						}
						h=rightdiagonal(k,i,j,n,a,b,heap,arr,co,_cout);
						if(h==-1)
						{
							goto ali;
						} 
						p=leftdiagonal(k,i,j,n,a,b,heap,arr,co,_cout);	 
						  if(p==-1)
						{
							goto ali;
						}
				}
		        	
			}
	
		}
		cout<<"NO RESULT FOUND\n";
		_cout<<"NO RESULT FOUND\n";
		ali:;
	}
}
	if(option=='Q')
	{
		cout<<"\n\nProgram exited successfully\n";
		return;
	}
	cout<<"Press any key to return to the home screen \n ";
	system("pause");
}while(option!='Q');

	system("pause");
}