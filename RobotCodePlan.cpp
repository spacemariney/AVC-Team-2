#include <stdio.h>
#include <time.h>
#include "E101.h"

int main (){
	int x = 0;
	int y = 0;
	int xPixelSize = 0;
	int add = 0; 		//This will be equal to xPixelSize divided by the number of points we will be reading.
	init();
	//The code up to here will only run once
	while (true){
		//Run Camera method
		get.picture;
		while (x <= pixelSize){		//This loop should only be to find where the white line is. Your way could work but only if we were reading from one point and it probably wouldn't be very reliable.
			int cam = get.pixel(x,y,3);
			int methodRed = get.pixel((xPixelSize/2),y,0);		//methodRed only needs to be used once each time we move and so should be outside of the "cam" loop.
			x = x + add;
				//The stuff below this should only run after we have checked all of the points and have found the white line.
			if (cam >= 127.5){
				//Run motor forward for a specified time
			}
			else if (methodRed >= 127.5){
				//Run IR method
			}else{
				if (x <= (pixelSize/2)){
					//turn robot left
				}
				else{
					//turn robot right
				}
			}
		}
	}
	return 0;
}
