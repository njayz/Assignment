#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Node
	{
	int info;
		struct Node *next;
	}*start;

class list
	{
		public:
		Node * getnode(int);
		void insert_begin(int);
		void insertatend(int);
		int count();
		void display();
	}a1;

Node *list::getnode(int x)
	{
		struct Node *temp;
		temp = new(struct Node); 
		if (temp == NULL)
			{
				cout<<"Unallocated memory"<<endl;
				return 0;
			}
		else
			{
				temp->info = x;
				temp->next = NULL;     
				return temp;
			}
	}

void list::insert_begin(int value)
	{
		struct Node *temp, *p;
		temp = getnode(value);
		if (start == NULL)
			{
				start = temp;
				start->next = NULL;          
			} 
		else
			{
			p = start;
			start = temp;
			start->next = p;
			}
	}

void list::insertatend(int value)
	{
	
		struct Node *temp, *s;
		temp = getnode(value);
		s = start;
		while (s->next != NULL)
			{         
				s = s->next;        
			}
		temp->next = NULL;
		s->next = temp;
	}

void list::display()
	{
		struct Node *temp;
		if (start == NULL)
		{
				cout<<"The List is Empty"<<endl;
				return;
		}
		temp = start;
		cout<<"Elements of list are: "<<endl;
		while (temp != NULL)
			{
				cout<<temp->info<<"->";
				temp = temp->next;
			}
		cout<<"NULL"<<endl;
	}

int list::count()
	{
			struct Node *temp = start;
			int length = 0;
			while(temp!=NULL)
			{
				length++;
				temp=temp->next;
			}
			return(length);
	}


struct Node2
	{
		int info2;
		struct Node2 *next2;
	}*start2;

class list2	
	{
		public:
		Node2 * getnode2(int);
		void insert_begin2(int);
		void insertatend2(int);
		int count2();
		void display2();
	}a2;

Node2 *list2::getnode2(int x)
	{
		struct Node2 *temp;
		temp = new(struct Node2); 
		if (temp == NULL)
			{
				cout<<"Memory not allocated "<<endl;
				return 0;
			}
		else
			{
				temp->info2 = x;
				temp->next2 = NULL;     
				return temp;
			}
	}

void list2::insert_begin2(int value)
	{
    
    
		struct Node2 *temp, *p;
		temp = getnode2(value);
		if (start2 == NULL)
			{
				start2 = temp;
				start2->next2 = NULL;          
			} 
		else
			{
				p = start2;
				start2 = temp;
				start2->next2 = p;
			}	
    
	}

void list2::insertatend2(int value)
	{
	
		struct Node2 *temp, *s;
		temp = getnode2(value);
		s = start2;
		while (s->next2 != NULL)
			{         
				s = s->next2;        
			}
		temp->next2 = NULL;
		s->next2 = temp;
		
	}

void list2::display2()
	{
		struct Node2 *temp;
		if (start2 == NULL)
			{
				cout<<"The List is Empty"<<endl;
				return;
			}
		temp = start2;
		cout<<"Elements of list are: "<<endl;
		while (temp != NULL)
			{
				cout<<temp->info2<<"->";
				temp = temp->next2;
			}
		cout<<"NULL"<<endl;
	}

int list2::count2()
	{
		struct Node2 *temp = start2;
		int length = 0;
		while(temp!=NULL)
			{
				length++;
				temp=temp->next2;
			}
		return(length);
	}


struct Node3
	{
		int info3;
		struct Node3 *next3;
	}*start3;

class list3
	{
		public:
		Node3 * getnode3(int);
		void insert_begin3(int);
		void insertatend3(int);
		int count3();
		void addd();
		void display3();
	}a3;

Node3 *list3::getnode3(int x)
	{
		struct Node3 *temp;
		temp = new(struct Node3); 
		if (temp == NULL)
			{
				cout<<"Memory not allocated "<<endl;
				return 0;
			}	
		else
			{
				temp->info3 = x;
				temp->next3 = NULL;     
				return temp;
			}
	}

void list3::insert_begin3(int value)
	{
		
    
		struct Node3 *temp, *p;
		temp = getnode3(value);
		if (start3 == NULL)
			{
				start3 = temp;
				start3->next3 = NULL;          
			} 
		else
			{
				p = start3;
				start3 = temp;
				start3->next3 = p;
			}
    
	}

void list3::insertatend3(int value)
	{
	
		struct Node3 *temp, *s;
		temp = getnode3(value);
		s = start3;
		while (s->next3 != NULL)
			{         
				s = s->next3;        
			}
		temp->next3 = NULL;
		s->next3 = temp;
     
	}

void list3::display3()
	{
		struct Node3 *temp;
		if (start3 == NULL)
			{
				cout<<"The List is Empty"<<endl;
				return;
			}
		temp = start3;
		while (temp != NULL)
			{
				cout<<temp->info3;
				temp = temp->next3;
			}
    
	}
void list3::addd()
{
	struct Node *temp1;
	struct Node2  *temp2;
	
	temp1 = start;
	temp2 = start2;
	int p,q,sum=0,carry=0,r;
	while (temp1 != NULL && temp2 != NULL)
    {
        p=temp1->info;
        q=temp2->info2;
        r=p+q+carry;
        sum=r%10;
        if(r>9)
        {
			carry=1;
		}else
		{
			carry=0;
		}
        a3.insert_begin3(sum);
        temp1 = temp1->next;
        temp2 = temp2->next2;
       
    }
    if(carry==1)
         a3.insert_begin3(carry);
    
}


int main()
	{
		string data;
		ofstream f1;
	
		f1.open("first.txt");
		cout<<"\n\t Please enter the first number =  ";
	getline(cin,data);
		f1<<data;
	f1.close();
     
		ofstream f2;
		f2.open("second.txt");
			cout<<"\n\t Please enter the second number =  ";
		getline(cin,data);
			f2<<data;
	f2.close();
     
  char c;
    int a,i=0,j=0;
		fstream x1,x2;
			x1.open("first.txt",ios::in);
     x2.open("first.txt",ios::in);
      while(x2)
    {
		x2.get(c);
		j++;
		}
		x2.close();
    
     while(x1)
     {   
		 
		    x1.get(c);
		    a=c-48;
		    
		    a1.insert_begin(a);
		    i++;
		    if(i==j-1)
		       break;
		 
	  }
	  x1.close();
	 
	 
	
	 	 i=0,j=0;        //2nd
    fstream y1,y2;
     y1.open("second.txt",ios::in);
     y2.open("second.txt",ios::in);
      while(y2)
    {
		y2.get(c);
		j++;
		}
		y2.close();
    
     while(y1)
     {   
		
		    y1.get(c);
		    a=c-48;
		    
		    a2.insert_begin2(a);
		    i++;
		    if(i==j-1)
		       break;
		
		
		 
	 }
      y1.close();
      
      int l1,l2,l3;
      l1=a1.count();
      l2=a2.count2();
      
      if(l2>l1)
      {
		  l3=l2-l1;
          i=0;
          for( ;l3>0;l3--)
          {
		     a1.insertatend(i);
	      }
	  }else if(l1>l2)
	   {
      
          l3=l1-l2;
          i=0;
          for( ;l3>0;l3--)
          {
		     a2.insertatend2(i);
	      }
	   }
	
	  
	  a3.addd();
	  
	  cout<<"\n\n\t\t Sum of two no. is \t= ";
	  a3.display3();
	
	 return 0;
}



