#include <stdio.h>



struct hotel
{
    string  name[20];
    string add[10]
    string grade[3];
    int rch;
    int rno;
} s [ 20 ] ;
int main ( )
{
    
    printf( " how many hotel details you want");
    scanf("%d",&no) ;
    for ( int i = 0 ; i < no ; i ++ )
   {
        printf ( " \n enter hotel name : " ) ;
        scanf ( "%s" , &s[i].name ) ;
        printf ( " enter hotel address : " ) ;
        scanf ( "%s" , &s[i].add ) ;
        printf ( " enter hotel grade : " ) ;
        scanf ( "%s" , &s[i].grade ) ;
        printf ( " enter hotel charges : " ) ;
        scanf ( "%d" , &s[i].rch ) ;
        printf ( " enter no of rooms : " ) ;
        scanf ( "%d" , &s[i].rno );
        
    }
};

void lesscharges ( int num )
{
	int i , min , k ;
	min = s [ 0 ] .rch ;
    for ( i = 0 ; i < num ; i ++ )
    {    
        if ( s [ i ] .rch < min )
        {
              min = s [ i ] .rch ;
              k = i ;
         
         
        }
        else if ( min == s [ 0 ] .rch )
        {
              k = 0 ;
        }
    }
	printf( " \n\n !! room charges lessthan given value !! " ) ;
	printf( " \n nhotel name : %s " , s[k].name ) ;
	printf( " \n hotel address : %s " , s [ k ] .add ) ;
	printf( " \n hotel grade : %d " , s[k].grade ) ;
   printf ( " \n hotel charges : %d " , s [ k ] .rch ) ;
}
