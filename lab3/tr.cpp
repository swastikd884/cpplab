#include <iostream>
using namespace std;
#include <string.h>
struct book
{
     int  bookno;
     char bookname[40];
     char bookauthor[40];
     int  numpages;
};
int main()
{
     struct book b[20];
     int    ch,n,i,count = 0;
     char   temp[40];
	 do{
          cout<<"\t\tMENU";
          
          cout<<"\nPRESS 1.TO ADD BOOK DETAILS.";
          cout<<"\nPRESS 2.TO DISPLAY BOOK DETAILS.";
          cout<<"\nPRESS 3.TO DISPLAY BOOK OF GIVEN AUTHOR.";
          cout<<"\nPRESS 4.TO COUNT NUMBER OF BOOKS.";
          cout<<"\nPRESS 5.TO EXIT.";
          
          cout<<"\nEnter Your Choice: ";
          cin>>ch;
          switch(ch)
          {
               case 1:
                    cout<<"\nHow Many Records You Want to Add: ";
                    cin>>n;
                    
                    cout<<"Add Details of"<<n <<"Book\n";
                    
                    for(i = 0 ; i < n ; i++)
                    {
                         cout<<"Enter Book No.     : ";
                         cin>>b[i].bookno;
                         cout<<"Book Name:";
                         cin>>b[i].bookname;
                         cout<<"Enter Author Name  : ";
                         cin>>b[i].bookauthor;
                         cout<<"Enter No. of Pages : ";
                         cin>>b[i].numpages;
                         
                    }
                    break;
               case 2:
                    cout<<"\n\t\tDetails of All Book\n";
                    
                    cout<<"Book No.\t BookName AuthorName\t No. of Pages\n";
                    
                    for( i = 0 ; i < n ; i++)
                    {
                         cout<<b[i].bookno<<"\t\t"<< b[i].bookname<<"\t\t" <<b[i].bookauthor<<"\t\t" <<b[i].numpages<<"\n";
                    }
                    cout<<"\n\n";
                    break;
             case 3:
                    cout<<"\nEnter Author Name: ";
                    cin>>temp;
                   
                    for( i = 0 ; i < n ; i++)
                    {
                         if(strcmp(b[i].bookauthor,temp) == 0)
                         {
                              cout<<b[i].bookname;
                         }
                    }
                    break;
               case 4 :
                    for( i = 0 ; i < n ; i++)
                    {
                         count++;
                    }
                    cout<<"\nTotal Number of Books in Library:" <<count <<"\n";
                    
                    break;
               case 5 :
                    exit(0);
          }
     }
     while(ch!=5);
     {
		return 0;
	 }
}
		
