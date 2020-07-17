#include <unistd.h>

int ft_sqrt(int nb){ 
	float temp = (float)nb;
	float x = nb; 
    float y = 1; 
    float e = 0.000001;

	if(temp == 1){
		return 1;
	}
	else if(temp >1){

    	while (x - y > e) {

        	x = (x + y) / 2; 
        	y = temp / x; 
		}

	if(x == ((int)x)){
		return x;
	}else{
		return 0;
	}

	}else{
		return 0;
	}
	return 1;
} 
