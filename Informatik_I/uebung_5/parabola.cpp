#include <iostream>

int main(void){

	double x = 0, x2 = 0, y = 0, val = 0.7, precision = 0.00001;
	std::cin >> x >> y;

	x2 = x * x;
	val += 1.3d * x;
	val += 0.9d * x2;

	if(val == y){
		std::cout << "yes" << std::endl;
	} else if(val > y){
		if((val-y) < precision){ 
			std::cout << "yes" << std::endl;
		} else {
			std::cout << "no" << std::endl;
		}
	} else if(val < y){
		if((y-val) < precision){
			std::cout << "yes" << std::endl;
		} else {
			std::cout << "no" << std::endl;
		}
	}
	return 0;
}
