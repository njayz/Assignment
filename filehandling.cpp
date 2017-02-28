#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{  
	 char ch,ch2,ch3,n;
	 fstream f2;
	 f2.open("infile.txt",ios::in);
	
	 cout<<"read  ";
	
		ofstream w,p;
		w.open("result.txt");
		p.open("cleaned.txt");
			cout<<"\n\t select the starting of line you want (f,m,r,s)::";
			cin>>n;
	
	
 if(n=='f')
	{
		while(f2)
			{ 
				f2.get(ch);
				if(ch=='"')
				{
					f2.get(ch2);
					if(ch2=='f')
					{
						f2.get(ch3);
						if(ch3=='"')
						{
							w<<ch;  
							w<<ch2;
							w<<ch3;
							f2.get(ch);
							w<<ch; 
							f2.get(ch);
							w<<ch; 
							for( ; ; )
							{
								f2.get(ch);
								w<<ch;   
								if(ch==',')
								{
									w<<endl;
									p<<endl;
									break;
								}	
								p<<ch;		   
							}
							cout<<endl;
						}
					}
				}
		}
     }
     else if(n=='m')
		{
			while(f2)
			{ 
				f2.get(ch);
				if(ch=='"')
				{
					f2.get(ch2);
					if(ch2=='m')
					{
						f2.get(ch3);
						if(ch3=='"')
						{
							w<<ch;  
							w<<ch2;
							w<<ch3;
							f2.get(ch);
							w<<ch; 
							f2.get(ch);
							w<<ch; 
							for( ; ; )
							{
								f2.get(ch);
								w<<ch;   
								if(ch==',')
								{
									w<<endl;
									p<<endl;
									break;
								}		
								p<<ch;	   
							}
						}
					}
				}
			}
		}
		else if(n=='r')
        {
			while(f2)
			{ 
				f2.get(ch);
				if(ch=='"')
				{
					f2.get(ch2);
					if(ch2=='r')
					{
						f2.get(ch3);
						if(ch3=='"')
						{
							w<<ch;  
							w<<ch2;
							w<<ch3;
							f2.get(ch);
							w<<ch; 
							f2.get(ch);
							w<<ch; 
							for( ; ; )
							{
								f2.get(ch);
								w<<ch;   
								if(ch==',')
								{
									w<<endl;
									p<<endl;
									break;
								}			 
								p<<ch;  
							}
						}
					}
				}
			}
		}
		else if(n=='s')
			{
				while(f2)
				{ 
					f2.get(ch);
					if(ch=='"')
						{
							f2.get(ch2);
							if(ch2=='s')
							{
								f2.get(ch3);
								if(ch3=='"')
								{
									w<<ch;  
									w<<ch2;
									w<<ch3;
									f2.get(ch);
									w<<ch;
									f2.get(ch);
									w<<ch;
									f2.get(ch);
									w<<ch;  p<<ch;
									for( ; ; )
										{
											f2.get(ch);
											w<<ch;  p<<ch;   
											if(ch=='"')
												{
													w<<endl;
													p<<endl;
													break;
												}	
					     	   
										}
								}
						}
				}
			}
		}
		p.close();
		fstream k;
			k.open("cleaned.txt",ios::in|ios::out);
		k.clear();
		k.seekg(0, ios::beg);
		string abc,efg;
		cout<<"\n\t Enter  prefered language name::";
		cin>>abc;
   
		ofstream q;
		q.open("final.bat");
     
   
		while(getline(k,efg))
			{
				q<<abc;
				q<<efg<<endl;
		  
			}
		q.close();
     

     
		w.close();
		f2.close();
	return 0;
}
