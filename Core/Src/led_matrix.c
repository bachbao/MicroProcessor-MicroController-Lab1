/*
 * led_matrix.c
 *
 *  Created on: Sep 17, 2021
 *      Author: DELL
 */

#include "main.h"
#include "led_matrix.h"

void write_led_row_col(int col, int row){
	 if(col == 0){
		 HAL_GPIO_WritePin(COL_PORT, COL_1,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_2|COL_3|COL_4|COL_5,0);
	 }
	 else if(col == 1){
		 HAL_GPIO_WritePin(COL_PORT, COL_2,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_1|COL_3|COL_4|COL_5,0);
	 }
	 else if(col == 2){
		 HAL_GPIO_WritePin(COL_PORT, COL_3,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_1|COL_2|COL_4|COL_5,0);
	 }
	 else if(col == 3){
		 HAL_GPIO_WritePin(COL_PORT, COL_4,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_1|COL_2|COL_3|COL_5,0);
	 }
	 else if(col == 4){
		 HAL_GPIO_WritePin(COL_PORT, COL_5,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_1|COL_2|COL_3|COL_4,0);
	 }

	 if(row == 0){
		 HAL_GPIO_WritePin(ROW_PORT, ROW_6,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_2|ROW_3|ROW_4|ROW_5,1);
	 }
	 else if(row == 1){
		 HAL_GPIO_WritePin(ROW_PORT, ROW_5,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_2|ROW_3|ROW_4|ROW_6,1);
	 }
	 else if(row == 2){
		 HAL_GPIO_WritePin(ROW_PORT, ROW_4,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_2|ROW_3|ROW_5|ROW_6,1);
	 }
	 else if(row == 3){
		 HAL_GPIO_WritePin(ROW_PORT, ROW_3,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_2|ROW_4|ROW_5|ROW_6,1);
	 }
	 else if(row == 4){
		 HAL_GPIO_WritePin(ROW_PORT, ROW_2,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_3|ROW_4|ROW_5|ROW_6,1);
	 }
	 else if(row == 5){
		 HAL_GPIO_WritePin(ROW_PORT, ROW_1,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_2|ROW_3|ROW_4|ROW_5|ROW_6,1);
	 }
	 else if(row == 6){
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_1|ROW_2|ROW_3|ROW_4|ROW_5|ROW_6,1);
	 }
}

void test_led(void){
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 7; j++){
			write_led_row_col(i,j);
			HAL_Delay(200);
		}
	}
}

void clearAllClock(void){
	HAL_GPIO_WritePin(COL_PORT,COL_1|COL_2|COL_3|COL_4|COL_5,0);
}

void setNumberOnClock(int num){
	if(num == 0){
		 HAL_GPIO_WritePin(COL_PORT, COL_2,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_1|COL_3|COL_4|COL_5,0);

		 HAL_GPIO_WritePin(ROW_PORT, ROW_5,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_2|ROW_3|ROW_4|ROW_6,1);
		 HAL_Delay(50);
	}
	else if(num == 1){
		 HAL_GPIO_WritePin(COL_PORT,  COL_3,1);
		 HAL_GPIO_WritePin(COL_PORT,  COL_1| COL_2| COL_4|COL_5,0);

		 HAL_GPIO_WritePin(ROW_PORT, ROW_5,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_2|ROW_3|ROW_4|ROW_6,1);
		 HAL_Delay(50);
	}
	else if(num == 2){
		 HAL_GPIO_WritePin(COL_PORT, COL_4,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_1|COL_3|COL_2|COL_5,0);

		 HAL_GPIO_WritePin(ROW_PORT, ROW_5,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_2|ROW_3|ROW_4|ROW_6,1);
		 HAL_Delay(50);
	}
	else if(num == 3){
		 HAL_GPIO_WritePin(COL_PORT, COL_5,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_1|COL_3|COL_4|COL_2,0);

		 HAL_GPIO_WritePin(ROW_PORT,ROW_4,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_2|ROW_3|ROW_5|ROW_6,1);
		 HAL_Delay(50);
	}
	else if(num == 4){
		 HAL_GPIO_WritePin(COL_PORT, COL_5,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_1|COL_3|COL_4|COL_2,0);

		 HAL_GPIO_WritePin(ROW_PORT,ROW_3,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_2|ROW_4|ROW_5|ROW_6,1);
		 HAL_Delay(50);
	}
	else if(num == 5){
		 HAL_GPIO_WritePin(COL_PORT, COL_5,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_1|COL_3|COL_4|COL_2,0);

		 HAL_GPIO_WritePin(ROW_PORT,ROW_2,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_3|ROW_4|ROW_5|ROW_6,1);
		 HAL_Delay(50);
	}
	else if(num == 6){
		 HAL_GPIO_WritePin(COL_PORT, COL_4,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_1|COL_3|COL_2|COL_5,0);

		 HAL_GPIO_WritePin(ROW_PORT,ROW_1,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_2|ROW_3|ROW_4|ROW_5|ROW_6,1);
		 HAL_Delay(50);
	}
	else if(num == 7){
		 HAL_GPIO_WritePin(COL_PORT, COL_3,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_1|COL_2|COL_4|COL_5,0);

		 HAL_GPIO_WritePin(ROW_PORT,ROW_1,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_2|ROW_3|ROW_4|ROW_5|ROW_6,1);
		 HAL_Delay(50);
	}
	else if(num == 8){
		 HAL_GPIO_WritePin(COL_PORT, COL_2,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_1|COL_3|COL_4|COL_5,0);

		 HAL_GPIO_WritePin(ROW_PORT,ROW_1,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_2|ROW_3|ROW_4|ROW_5|ROW_6,1);
		 HAL_Delay(50);
	}
	else if(num == 9){
		 HAL_GPIO_WritePin(COL_PORT, COL_1,1);
		 HAL_GPIO_WritePin(COL_PORT, COL_2|COL_3|COL_4|COL_5,0);

		 HAL_GPIO_WritePin(ROW_PORT,ROW_2,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_3|ROW_4|ROW_5|ROW_6,1);
		 HAL_Delay(50);
	}
	else if(num == 10){
		HAL_GPIO_WritePin(COL_PORT, COL_1,1);
		HAL_GPIO_WritePin(COL_PORT, COL_2|COL_3|COL_4|COL_5,0);

		 HAL_GPIO_WritePin(ROW_PORT,ROW_3,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_2|ROW_4|ROW_5|ROW_6,1);
		 HAL_Delay(50);
	}
	else if(num == 11){
		HAL_GPIO_WritePin(COL_PORT, COL_1,1);
		HAL_GPIO_WritePin(COL_PORT, COL_2|COL_3|COL_4|COL_5,0);

		 HAL_GPIO_WritePin(ROW_PORT,ROW_4,0);
		 HAL_GPIO_WritePin(ROW_PORT, ROW_0|ROW_1|ROW_2|ROW_3|ROW_5|ROW_6,1);
		 HAL_Delay(50);
	}
}

void set12Led(void){

}
