#include <iostream>

int i=1;
int main(){
	while(i<=100){
		if(i%15==0){
			std::cout << "Fizz Buzz\n";
		}else{
			if(i%3==0){
				std::cout << "Fizz\n";
			}else{
				if(i%5==0){
					std::cout << "Buzz\n";
				}else{ 
					std::cout << i << "\n";
				}
			}
		}
		i++;
	}
}
