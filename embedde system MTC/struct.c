#include <stdio.h>

typedef unsigned short int u16;

struct name_types {
	u16 weight;
	u16 Height;
	u16 width;
	u16 color;
	u16 price;
};

int main() {
	struct name_types chair, Desk;

	printf("Please Enter chair weight : ");
	scanf("%d", &chair.weight);
	printf("Please Enter chair Height: ");
	scanf("%d", &chair.Height);
	printf("Please Enter chair width : ");
	scanf("%d", &chair.width);
	printf("Please Enter chair Color : ");
	scanf("%d", &chair.color);
	printf("Please Enter chair price  : ");
	scanf("%d", &chair.price);

	printf("Please Enter  Desk weight : ");
	scanf("%d", &Desk.weight);
	printf("Please Enter Desk Height: ");
	scanf("%d", &Desk.Height);
	printf("Please Enter Desk width : ");
	scanf("%d", &Desk.width);
	printf("Please Enter Desk Color : ");
	scanf("%d", &Desk.color);
	printf("Please Enter Desk price  : ");
	scanf("%d", &Desk.price);

	printf("the char weiht %d \nthe Desk weiht %d", chair.weight, Desk.weight );

}