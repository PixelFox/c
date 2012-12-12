/********************************************/
/* Calculate diameter of rods which are     */
/*  make of a specific metal with different */
/*  compression loads.                      */
/* Author:  Jay Franklin                    */
/* Created: 20121212                        */
/* Version: 1.0                             */
/* Contact: john.jay.franklin@gmail.com     */
/*                                          */
/********************************************/
/* Changelog:                               */
/*  1.0 - initial version                   */
/*                                          */
/********************************************/
/*                                          */
/*  Take input of compression load,         */
/*   print material, load, stress, diameter.*/
/*                                          */
/*  area of rod = compression / stress      */
/*                                          */
/*  area= pi*r^2  d = 2r                    */
/*                                          */
/********************************************/

// required for input/output
#include <stdio.h>    

// begin main function
int main() {	     

	// initialize required variables as 
	float steel=25000;
	float aluminum=15000;
	float copper=20000;
	float area;
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

