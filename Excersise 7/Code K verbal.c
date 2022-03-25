int main()

{

	int k ;
	
	printf("\n 1.       Freshmen ");
	printf("\n 2.       sophomore");
	printf("\n 3.       Junior    ");
	
	printf("\n\n Select the code : ");
	scanf("%d",&k) ;
	
	switch(k)
	
	{
	
		case 1 : printf("\n Freshmen"); break ;
		case 2 : printf("\n sophomore"); break ;
		case 3 : printf("\n Junior"); break ;
		
		default: printf("\n Invalid Option "); break;
		
	}
	
	printf("\n\n\n");
}	 

