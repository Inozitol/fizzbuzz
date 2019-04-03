#include <iostream>

//Why did I do this?
//It's a completely useless program...

struct node{
	std::string FiBz;
	int num;
	node *next;
	node *prev;
};

class FizzBuzz{
	public:
		FizzBuzz();
		void write();
	private:
		void _newnode();
		node *_first;
		node *_last;
};

void FizzBuzz::_newnode(){
	if(_first==NULL){
		_first = new node;
		_last = new node;

		_first->prev=NULL;
		_first->num=1;
		_first->FiBz="";
		_first->next=_last;

		_last->prev=_first;
		_last->num=2;
		_last->FiBz="";
	}else{
		int num_buff=_last->num+1;
		node *buff = new node;
		buff->num = num_buff;
		buff->FiBz="";
		if(!(num_buff%15)){
			buff->FiBz="Fizz Buzz";
		}else{
			if(!(num_buff%3)){
				buff->FiBz="Fizz";
			}else{
				if(!(num_buff%5)){ 
					buff->FiBz="Buzz";
				}
			}
		}

		buff->prev=_last;
		_last->next=buff;
		_last=buff;
	}
}

FizzBuzz::FizzBuzz(){
	_first=NULL;
	for(int i=0;i<99;i++) _newnode();
}

void FizzBuzz::write(){
	do{
		if(_first->FiBz.length()>0) std::cout << _first->FiBz << "\n";
		else std::cout << _first->num << "\n";
		_first=_first->next;
	}while(_first!=NULL);
}

//--------------------------------------------------------//

FizzBuzz fizzbuzz;

int main()
{
	fizzbuzz.write();
}
