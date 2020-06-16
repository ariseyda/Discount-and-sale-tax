#include<stdio.h>
#include<math.h>

// Keith’s Sheet Music needs a program to implement its music teacher’s discount policy.
// The program is to prompt the user to enter the purchase total and to indicate whether the purchaser is a teacher. 
// The store plans to give each customer a printed receipt, so your program is to create a nicely formatted display on the screen. 
// Music teachers receive a 10% discount on their sheet music purchases unless the purchase total is $100 or higher. 
//In that case, the discount is 12%. The discount calculation occurs before addition of the 5% sales tax.

int main(){
	
	int purchase_total;
	float discounted_total;
	int teacher_discount=12;
	int sales_tax=5;
	
	printf("Purchase total:");
	scanf("%d",&purchase_total);
	
	if(purchase_total>=100){
		
		printf("Teacher's discount:%d%%\n",teacher_discount);
		discounted_total=(purchase_total)-(purchase_total*(12.0/100));
		printf("Discounted total:%f\n",discounted_total);
		printf("Sales tax:%d%%\n",sales_tax);
		discounted_total=(purchase_total)+(purchase_total*(5.0/100));
		printf("Total:%.2f\n",discounted_total);
		
		
	}
	
	else{
		
		printf("Sales tax:%d%%\n",sales_tax);
		discounted_total=(purchase_total)+(purchase_total*(5.0/100));
		printf("Total:%f\n",discounted_total);
		
	}
	

	
	return 0;
}
