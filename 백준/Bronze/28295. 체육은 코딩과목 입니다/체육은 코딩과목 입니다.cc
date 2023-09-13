#include <iostream>

int main(){
	int s=10,a(0),b;
	while(s--){
		std::cin>>b;
        a+=b;
	}
	std::cout << "NESW"[a% 4];
}