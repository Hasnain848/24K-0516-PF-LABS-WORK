#include<stdio.h>
int main ()
{ char process,coffee_type,cupsize;
  float time1,time2,time3,time4,time5,time6;	
	printf("Enter the type of coffee \n ");
	printf("Press w for white coffee \n Press b for Black coffee :\n");
	scanf("%c",&coffee_type);
	printf("Is the cup size double (y for yes and n for no) :\n");
	scanf(" %c",&cupsize);
	printf("Is the process is Manual (y for yes and n for no) :\n");
	scanf(" s%c",&process);
	switch (coffee_type)
	{ case 'w':
	  case 'W':
	      	if(cupsize=='y' || cupsize=='Y')
	      	 {time1 = 15*1.5;
		      printf("Put water : %f\n",time1);
		      time2 =15*1.5;
		       printf("Sugar : %f\n",time2);
		      time3 = 20 *1.5;
		       printf("Mix Well : %f\n",time3);
		      time4 = 2*1.5;
		      printf("Add coffee : %f\n",time4);
		     time5 = 4*1.5;
		      printf("Add Milk : %f\n",time5);
		      time6 = 20 *1.5;
		       printf("Mix Well : %f\n",time6);}
		     else
			 {time1 = 15;
		      printf("Put water : %f\n",time1);
		      time2 =15;
		       printf("Sugar : %f\n",time2);
		      time3 = 20 ;
		       printf("Mix Well : %f\n",time3);
		      time4 = 2;
		      printf("Add coffee : %f\n",time4);
		     time5 = 4;
		      printf("Add Milk : %f\n",time5);
		      time6 = 20 ;
		       printf("Mix Well : %f\n",time6);}
		       break ;
	 case 'b':
	 case 'B':
	 	     if(cupsize=='y' || cupsize=='Y')
	      	  {time1 = 20*1.5;
		      printf("Put water : %f\n",time1);
		      time2 =20*1.5;
		       printf("Sugar : %f\n",time2);
		      time3 = 25 *1.5;
		       printf("Mix Well : %f\n",time3);
		      time4 = 15*1.5;
		      printf("Add coffee : %f\n",time4);
		      printf("Add Milk : none\n");
		      time6 = 25 *1.5;
		       printf("Mix Well : %f\n",time6);}
		     else {time1 = 20;
		      printf("Put water : %f\n",time1);
		      time2 =20;
		       printf("Sugar : %f\n",time2);
		      time3 = 25 ;
		       printf("Mix Well : %f\n",time3);
		      time4 = 25;
		      printf("Add coffee : %f\n",time4);
		      printf("Add Milk : none\n");
		      time6 = 25 ;
		       printf("Mix Well : %f\n",time6);}
		       break;
		       
	 		}
 if (process=='y'|| process=='Y')
    printf("User must complete the process manually.\n");
 else printf("The machine will complete the process");
 
	 		
	
	
}
