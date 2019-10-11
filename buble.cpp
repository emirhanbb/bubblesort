#include <iostream>

using namespace std;
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  

int main(int argc, char** argv) {
	
	int dizi[5]={9,5,8,3,1};
	
	for(int i=0;i<4;i++){
		
		for(int j=0;j<4-i;j++){
			
			if(dizi[j]<dizi[j+1]){
				swap(&dizi[j],&dizi[j+1]);
			}
			
		}
	}
	
	
	for(int i=0;i<5;i++){
		cout<<dizi[i];
	}
	
	
	
	
	
	return 0;
}
