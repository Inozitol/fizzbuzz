#include <iostream>

int main(){
	for(int i=1;i<=100;i++){
		switch((bool)(i%15)){
			case false:
				std::cout << "Fizz Buzz\n";
			break;
			case true:
				switch((bool)(i%3)){
					case false:
						std::cout << "Fizz\n";
					break;
					case true:
						switch((bool)(i%5)){
							case false:
								std::cout << "Buzz\n";
							break;
							case true:
								std::cout << i << "\n";
							break;
						}
					break;
				}
			break;
		}
	}
}
