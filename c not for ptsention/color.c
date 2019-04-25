#include <stdio.h>


	enum color{Red , green , blue};
	
	void printcolor(enum color chosencolor)
	{
		const char *color_name = "erro";
		
		switch (chosencolor)
		{
			case Red:
			color_name = "Red";
			break;
			
			case green :
			color_name = "green";
			break;
			
			case blue: 
			color_name = "blue";
			break;
		}
		printf("%s\n",color_name);
	}
	int main(){
	enum color chosenColor;
	printf("Enter a number between 0 and 2");
	scanf("%d", (int*)&chosenColor);
	printcolor(chosenColor);
	return 0;
}