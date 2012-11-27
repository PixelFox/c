/********************************************/
/*     Volume of a rectangle                */
/* Author:  Jay Franklin                    */
/* Created: 20121126                        */
/* Version: 1.2                             */
/* Contact: john.jay.franklin@gmail.com     */
/*                                          */
/********************************************/
/* Changelog:                               */
/*  1.2 - 'prettied up' output              */
/*  1.1 - scanf incorrect                   */
/*  1.0 - initial version                   */
/*                                          */
/********************************************/
/*                                          */
/*  Take input of 3 sides of rectangle and  */ 
/*   compute the volume. Output to user.    */
/*                                          */
/*  volume = length * width * height        */
/*                                          */
/********************************************/

// required for input/output
#include <stdio.h>    

// begin main function
int main() {	     

	// initialize three required variables as integers
	int length, width, height;  
	// interact with user
	printf("Please input the length, width, and height of rectangle seperated by spaces followed by <enter> or <return>.\n");
	// scanf("%d",&length,"%d",&width,"%d",&length);   <-- incorrect  (left for learning :)
 	scanf("%d %d %d",&length,&width,&height); // grab input and store 3 values seperated by space as integers stored in length, width, height
	
	// Compute the volume
	int volume;  				// initialize volume as integer
	volume = length * width * height;	// set volume to the result of length x width x height

	// Output the results
	printf("\n\n\nProvided Values:\n\tlength:\t%d\n\twidth:\t%d\n\tlength:\t%d\n\nComputed Results:\n\tVolume:\t%d\n\n",length,width,height,volume);

	// All done. Let's exit and send an 'ok' to the system
	return 0;

	// TODO: Add error checking for input values (ensure input is integer type, ensure only three inputs are given)
}

