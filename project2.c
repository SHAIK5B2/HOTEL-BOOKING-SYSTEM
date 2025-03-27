#include<stdio.h>
int booking(char type[],int date,int n){
	printf("THE BOOKING OF YOUR ROOM OF %d DAYS IS RESERVES\n",n);
	printf("THE BOOKING OF YOUR ROOM IS FROM THE DATE %d-4-25 to %d-4-25\n",date,date+n);
 return 0;
}
int Gst(int charges,int n,int charge){
	printf("THE CHARGES FOR %d DAYS IN OUR HOTEL IS %d\n",n,charge);
	
	float gst=(charges/100)*18;
	printf("THE 18 PERCENTAGE GST ON THE TOTAL BILL IS %f\n",gst);
	printf("TOTAL BILL AFTER GST IS = %f\n",charge+gst);
	return 0;
}
int main(){
	int date,n,charges;
	char type[10];
	float gst;
	printf("*********WELCOME TO TAJ HOTEL**********\n");
	printf("ENTER THE NUMBER OF DAYS YOU WANT TO STAY IN OUR HOTEL\n");
	scanf("%d",&n);
	printf("WHICH TYPE OF ROOM YOU WANT IN OUR HOTEL\n");
	scanf("%S",&type);
	printf("ENTER FROM WHICH DATE YOU WANT TO STAY IN OUR HOTEL\n");
	scanf("%d",&date);
	booking(type[10],date,n);
	charges=1000*n;
	int charge=n*1000;
	Gst(charges,n,charge);
	printf("YOUR ROOM HAS BEEN RESERVED\n");
	printf("----------THANK YOU-----------");
}
