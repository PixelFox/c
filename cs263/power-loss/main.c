/********************************************/
/* Calculate power loss of a transmission   */
/*  line that are distances between 20 and  */
/*  100 miles at both 100V and 200V         */
/*  with the power transmissted of 500kW    */
/*					    */
/* Author:  Jay Franklin                    */
/* Created: 20121223                        */
/* Version: 1.0                             */
/* Contact: john.jay.franklin@gmail.com     */
/*                                          */
/********************************************/
/* Changelog:                               */
/*  1.0 - initial version                   */
/*                                          */
/********************************************/
/*                                          */
/*  Computer current of each distance       */
/*   and voltage. Take that number and      */
/*   compute the power loss.                */
/*                                          */
/*  current = power (watts) / volts         */
/*  Resistance = r x miles                  */
/*  power loss = i^2 x R                    */
/*                                          */
/********************************************/

// required for input/output
#include <stdio.h>

// begin main function
int main() {	     
	// initialize required variables  
	float power=500000;
	float i;
	float r=0.05;
	float R;
	float loss;
	float distance;
	int voltage;
	float counter;
	int miles;
    
	// Compute the current
	
		printf("\n\tPower Transmitted (W): %7.2f\n",power);
	miles=20;
	while( miles<101 ) {
		voltage=100;
		i=power/voltage;
		R=r*miles;
		loss=i*i*R;
		printf("\tVoltage:\t%d\n",voltage);
		printf("\tMiles:\t\t%d\n",miles);
		printf("\tCurrent:\t%5.2f\n",i);
		printf("\tResistance:\t%5.2f\n",R);
		printf("\tPower Loss:\t%5.2f\n\n",loss);
		miles=miles+10;
	}
		
	miles=20;
	while( miles<101 ) {
		voltage=200;
		i=power/voltage;
		R=r*miles;
		loss=i*i*R;
		printf("\tVoltage:\t%d\n",voltage);
		printf("\tMiles:\t\t%d\n",miles);
		printf("\tCurrent:\t%5.2f\n",i);
		printf("\tResistance:\t%5.2f\n",R);
		printf("\tPower Loss:\t%5.2f\n\n",loss);
		miles=miles+10;
	}
		

	// All done. Let's exit and send an 'ok' to the system
	return 0;

	// TODO: Add error checking for input values (ensure input is float type, etc)
}

