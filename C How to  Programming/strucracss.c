#include <stdio.h>
// inition of struct 

struct card{
	char *face; // define pointer face 
	char *suit; // define pointer suit 
};


int main (void)
{
	struct card aCard;  //define one struct card 
	struct card *cardPtr;
	
	aCard.face = "Ace";
	aCard.suit = "Spades";
	
	cardPtr = &aCard; 
	
    printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
         cardPtr->face, " of ", cardPtr->suit,
		 ( *cardPtr ).face, " of ", ( *cardPtr ).suit );
		 
		 return 0; // end of main 

}
