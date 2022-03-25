int main()


{

	int n , na,nb,nc,nd,ne,es ;
	
	printf("\n Enter the year : ");
	scanf("%d",&n);
	
	na=n%19 ;
	nb=n%4 ;
	nc=n%7;
	nd=(19*na+24)%30;
	ne=(2*nb+4*nc+6*nd+5)%7 ;
	es=22+nd+ne;
	
	if(es<=31)
	{
	printf("\n Easter sunday is %d-march-%d \n\n ",es,n);
	}
	else
	{
	printf("\n Easter sunday is %d-April-%d \n\n  ",es-31,n);
	}
}	 

