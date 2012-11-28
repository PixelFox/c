/********************************************/
/* Calculate flow rate of water through pipe*/
/* Author:  Jay Franklin                    */
/* Created: 20121128                        */
/* Version: 1.0                             */
/* Contact: john.jay.franklin@gmail.com     */
/*                                          */
/********************************************/
/* Changelog:                               */
/*  1.0 - initial version                   */
/*                                          */
/********************************************/
/*                                          */
/*  Take input of diameter and velocity.    */ 
/*   compute the volume. Output to user.    */
/*                                          */
/*  q = area * velocity                     */
/*  area = (pi)d^2 / 4 (square feet)        */
/*                                          */
/********************************************/

// required for input/output
#include <stdio.h>    

// begin main function
int main() {	     

	// initialize three required variables as integers
	float d, v, area, q;  
	float pi=3.141592;
	// interact with user
	printf("Please input the diameter in inches\n");
	scanf("%f",&d); 
	printf("Please input the velocity in feet per second\n");
	scanf("%f",&v); 
	
	// Compute the volume
	area=(pi*d*2)/4;
	q=area*v;

	// Output the results
	printf("\n\n\nProvided Values:\n\tdiameter:\t\t%f\n\tvelocity:\t\t%f\n\nComputed Results:\n\tArea:\t\t\t%f\n\tVolume flow rate:\t%f\n\n",d,v,area,q);

	// All done. Let's exit and send an 'ok' to the system
	return 0;

	// TODO: Add error checking for input values (ensure input is float type, etc)
}

