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
    float radius;
	float pi=3.141592;
    float input;
    float alumdiam;
    float steeldiam;
    float copperdiam;
    float alumarea;
    float steelarea;
    float copperarea;
    
    

	// interact with user
	printf("Please input the compression load\n");
	scanf("%f",&input);
	
	// Compute the compression load for all materials
    // Steel first...
    steelarea=(input/steel);
    radius=(pi/steelarea);
    radius=sqrt(radius);
    radius=radius*1000;
    steeldiam=radius;
    radius=0;
    
    // Alum next...
    alumarea=(input/aluminum);
    radius=(pi/alumarea);
    radius=sqrt(radius);
    radius=radius*1000;
    alumdiam=radius;
    radius=0;
    
    // Copper last...
    copperarea=(input/copper);
    radius=(pi/copperarea);
    radius=sqrt(radius);
    radius=radius*1000;
    copperdiam=radius;
    radius=0;
    
    
    

	// Output the results
	printf("\n\n\nProvided Values:\n\tCompression Load:\t\t%f\n\n",input);
    printf("Computed Results:\n\tSteel Area:\t\t\t%f\n\tSteel Diameter:\t\t\t%f\n\n\tAluminum Area:\t\t\t%f\n\tAluminum Diameter:\t\t%f\n\n\tCopper Area:\t\t\t%f\n\tCopper Diameter:\t\t%f\n\n", steelarea,steeldiam,alumarea,alumdiam,copperarea,copperdiam);

	// All done. Let's exit and send an 'ok' to the system
	return 0;

	// TODO: Add error checking for input values (ensure input is float type, etc)
}

