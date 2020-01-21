#include <iostream>
using namespace std;

int main()
{
  int age,tall,handle;
  string status;
  cin >> age;
  	if(age<20){
  		cin >> tall;
  			if(tall<160){
  				status = "UNFRIEND";
			  }else if(tall<175){
			  		status = "FRIEND";
			  	}else cin >> handle ;
			  		if(handle>690000000){
			  			status = "MARRIED";
					  }else status = "ONE-NIGHT-STAND";
			  
	  }else if(age<30){
	  		cin >> handle ;
			  	if(handle>100000000){
			  		status = "BEST FRIEND";
				  }	else status = "UNFRIEND";
	  	}else status = "UNFRIEND";
  
  cout << status;
  return 0;
}
