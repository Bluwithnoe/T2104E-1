#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,a;
    int tien=0;
     
	printf("Chao mung ban den voi nha hang!\n");
	Menu:
	printf("\n--- MENU ---");
    printf("\n1. Chon mon an.");
    printf("\n2. Chon do uong.");
    printf("\n3. Thanh toan.");
    printf("\n4. Thoat chuong trinh.");
    printf("\nHay nhap lua chon cua ban: ");
    scanf("%d",&n);
    
	switch (n) {

	 	case 1:
	 	{
			printf("\nMoi ban chon mon an: \n1. Com ga \n2. Pho bo \n3. Bun rieu \n4. Quay lai \nLua chon cua ban la: ");
			scanf("%d",&a);
			switch (a){
			case 1: {
				printf("Ban da chon com ga 25 000 VND. \n\nMoi ban quay lai Menu.\n"); 
				tien = tien + 25000;
				goto Menu;
			}
			case 2: {
				printf("Ban da chon pho bo 35 000 VND. \n\nMoi ban quay lai Menu.\n");
				tien = tien + 35000;
				goto Menu;
			}
			case 3:
			{ 
		  		printf("Ban da chon bun rieu 30 000 VND. \n\nMoi ban quay lai Menu.\n");
				tien = tien + 30000;
				goto Menu;
			}
			case 4:
			goto Menu;
			}
		break;
	 	} 
	 	case 2:
	 	{
			printf("\nMoi ban chon do uong: \n1. Coca \n2. Nuoc chanh \n3. Tra da \n4. Quay lai \nLua chon cua ban la: ");
			scanf("%d",&a);
			switch (a){
			case 1: {
				printf("Ban da chon Coca 10 000 VND. \n\nMoi ban quay lai Menu.\n");
				tien = tien + 10000;
				goto Menu;
			}
			case 2:
				{
				printf("Ban da chon nuoc chanh 20 000 VND. \n\nMoi ban quay lai Menu.\n");
				tien = tien + 20000;
				goto Menu;
				}
			case 3:
			{	 
		  		printf("Ban da chon tra da 5000. \n\nMoi ban quay lai Menu.\n");
				tien = tien + 5000;
				goto Menu;
			}
			case 4:
			goto Menu;
			}
		break;
	 	}
	
     	case 3:
     	{
    		printf("\nCam on ban da dung bua tai nha hang cua chung toi. So tien ban phai thanh toan la %d VND.",tien);
			break;	
	 	}
	 	case 4:
	 	{
		break;
	 	}
    }
}
