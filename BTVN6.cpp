#include <stdio.h>

int main() {
	int menu=0;
	int tongtien=0;
	printf("Chao mung quy khach den voi nha hang!\n");
	do {
		printf("\nMENU: \n");
		printf("1. Chon mon an\n");
		printf("2. Chon do uong \n");
		printf("3. Thanh toan \n");
		printf ("4. Thoat \n");
		printf("\nQuy khach chon: ");
		scanf("%d", &menu);
		
		switch (menu) {
			case 1: {
				int monan;
				do{
				printf("\nQuy khach vui long chon mon an:\n");
				printf("1. Com rang kim chi\n");
				printf("2. Com rang dua bo\n");
				printf("3. Com rang thap cam\n");	
				printf("4. Quay lai menu\n");
				printf("Vui long chon mon: ");
				scanf("%d", &monan);
					if (monan == 1) {
						tongtien += 30; 
						printf("Cam on quy khach da chon mon com rang kim chi. \n");					
					}
					else if (monan == 2) {
						tongtien += 35;
						printf("Cam on quy khach da chon mon com rang dua bo. \n");						
					}
					else if (monan == 3) {
						tongtien += 40;
						printf("Cam on quy khach da chon mon com rang thap cam. \n");	
					}
				} while (monan != 4); 
				
				break;
			}
			
			case 2: {
				int douong;
				do{
				printf("\nQuy khach vui long chon do uong:\n");
				printf("1. Coca Cola\n");
				printf("2. Nuoc chanh tuoi\n");
				printf("3. Tra da\n");
				printf("4. Quay lai menu\n");
				printf("Vui long chon do uong: ");
				scanf("%d", &douong);
					if (douong == 1) {
						tongtien += 10; 
						printf("Cam on quy khach da chon Coca Cola. \n");					
					}
					else if (douong == 2) {
						tongtien += 20;
						printf("Cam on quy khach da chon nuoc chanh tuoi. \n");	
					}
					else if (douong == 3) {
						tongtien += 5;
						printf("Cam on quy khach da chon tra da. \n");	
					}				
					
				} while (douong != 4);
				break;
			}
			case 3: {
			    printf("\nCam on ban da dung bua tai nha hang!\n");
			    printf("\nTong tien can thanh toan la: %dk.\n",tongtien);
				break;
			}
			case 4: {
				printf("\nQuy khach da thoat khoi chuong trinh.\n");
				break;
			}
			default: {
				printf("Vui long chon dung chuc nang tren danh sach. \n");
				break;
			}
		}
	} while (menu != 4);
}
