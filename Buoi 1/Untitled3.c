#include <stdio.h>

int main() {
//	bool yeuEm = true;
//	int chon;
//	printf("Moi ban chon: \n");
//	printf("1. Menu 1 \n");
//	printf("2. Menu 2 \n");
//	printf("Ban chon: ");
//	scanf("%d",&chon);
//	
//	switch (chon){
//		case 1:
//			printf("Ban da chon menu 1\n");
//			break;
//		case 2:
//			printf("Ban da chon menu 2\n");
//			break;
//		default:
//			printf("Ban da chon sai\n");
//			break;
//	}
	int i = 0;
	while (i<5){
		i++;
		printf("%d\n",i);
		if(i%3 == 0){
			break;
		}
	}
	
	int n = 0;
	do{
		n++;
		printf("%d\n",n);
	}while(n<5);
	

	
	/* 
		in ra tu 1-50.
		Neu chia het cho 3: in ra tu ADC
		Neu chia het cho 5: in ra tu Studio
		Neu chia het cho ca 3 và 5: in ra ADC Studio

	
	/*
		++: Them 1 gia tri 
		--: Bot 1 gia tri
		==: Toan tu so sanh bang
		>=: Toan tu so sanh lo'n hon hoac bang
		<=:Toan tu so sanh nho hon hoac bang
		!=: Toan tu so sanh khac
		:= : Toan tu gan
	*/
   	return 0;
 
}
	

