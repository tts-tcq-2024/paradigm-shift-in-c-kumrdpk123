#include <stdio.h>
#include <assert.h>


int temp_check(float temperature){
if(temperature >=0 && temperature < 45) 
    printf("Temperature in the range!\n");
	}
	
int soc_Check(float soc){
  if(soc > 20 && soc < 80) 
     printf("State of Charge in range!\n");
	 
  }



int check_chargeRate(float chargeRate) {
return (chargeRate < 0.8) ;
    
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
    
  return temp_check(temperature) && soc_Check(soc) && check_chargeRate(chargeRate);
      
  }
    
    

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(batteryIsOk(50, 85, 0));
  
}

