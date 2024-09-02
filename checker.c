#include <stdio.h>
#include <assert.h>


int temp_check(float temperature){
if(temperature >0 && temperature < 45) 
    printf("Temperature in the range!\n");
    else
    printf("Temperature out of range!\n");
    return 0;
	}
	
int soc_Check(float soc){
  if(soc > 20 && soc < 80) 
     printf("State of Charge in range!\n");
      else
    printf("State of Charge out of range!\n");
    return 0;
	 
  
}



int check_chargeRate(float chargeRate) {
if(chargeRate < 0.8) 
    printf("Charge Rate in of range!\n");
     else
    printf("Charge Rate out of range!\n");
    
    return 0;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
    
  return temp_check(temperature)|| soc_Check(soc) || check_chargeRate(chargeRate);
      
  }
    
    

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
  
}

