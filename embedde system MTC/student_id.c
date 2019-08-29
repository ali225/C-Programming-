#include <stdio.h>

typedef unsigned short int u16;

struct stude
{
	u16 ID;
	u16 Math;
	u16 Physices;
	u16 chemistry;
	u16 Biology;
};

void main(void)
{
	u16 Total_0 = 0 , Total_1 = 0, Total_2=0 , Total_3=0 , Total_4=0;
	int i , x =0;
	
	struct stude arra_student[5] = {{1,2,3,4,5},
									{6,7,8,9,10},
									{7,7,8,9,10},
									{8,7,8,9,10},
									{10,7,8,9,10}};
	 
	for(i = 0; i < 5; i++)
	{

			printf("the max arra_student = %d",arra_student[i]);
		
	}
/* 	
	Total_0 = (arra_student[0].ID + arra_student[0].Math +arra_student[0].Physices + arra_student[0].chemistry+arra_student[0].Biology);
	Total_1 = (arra_student[1].ID + arra_student[1].Math +arra_student[1].Physices + arra_student[1].chemistry+arra_student[1].Biology);
	Total_2 = (arra_student[2].ID + arra_student[2].Math +arra_student[2].Physices + arra_student[2].chemistry+arra_student[2].Biology);
	Total_3 = (arra_student[3].ID + arra_student[3].Math +arra_student[3].Physices + arra_student[3].chemistry+arra_student[3].Biology);
	Total_4 = (arra_student[4].ID + arra_student[4].Math +arra_student[4].Physices + arra_student[4].chemistry+arra_student[4].Biology);

	 */
	/* if (Total_0 >= Total_1 )
	{
	  		printf("Total Value Needed is %d",Total_0);
	}else if (Total_1 >= Total_2 )
	{
			printf("Total Value Needed is %d",Total_1);

	}else if ( Total_2 >= Total_3)
	{
			printf("Total Value Needed is %d",Total_2);

	}else if ( Total_3 >= Total_4)
	{
			printf("Total Value Needed is %d",Total_3);

	}else {
			printf("Total Value Needed is %d",Total_3);

	} */
}