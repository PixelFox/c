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

#include <stdio.h>    // required for input/output

int main() {	     // begin main function

	int length, width, height;  // initialize three required variables

	// interact with user
	printf("Please input the length, width, and height of rectangle seperated by spaces followed by <enter> or <return>.\n");
	// scanf("%d",&length,"%d",&width,"%d",&length);   <-- incorrect. 
	scanf("%d %d %d",&length,&width,&height);
	
	// Compute the volume
	int volume;
	volume = length * width * height;

	// Output the results
	printf("\n\n\nProvided Values:\n\tlength:\t%d\n\twidth:\t%d\n\tlength:\t%d\n\nComputed Results:\n\tVolume:\t%d\n\n",length,width,height,volume);

	return 0;
}

