int main()
{
	int *control_word = 1072;
	int *character_code = 1073;
	int *cursor_x = 1074;
	int *cursor_y = 1075;
	int *led = 1024;
	int *sw = 1040;
	int i;
	int j;
    int temp = 0;

	int array[5];
	array[0] = 56; //8
	array[1] = 54; //6
	array[2] = 57; //9
	array[3] = 49; //1
	array[4] = 51; //3
 	  
    while(*control_word == 0){

	}
	*cursor_x = 1;
	*cursor_y = 5;
	*control_word = 7;

	for(i=0; i<5; i++){
		while(*control_word == 0){

		}
		*character_code = array[i];
		*control_word = 5;
	}
	
    for (i=0; i < 5; i++){
        for (j = i + 1; j < 5; j++){
            if (array[i] > array[j]){
                temp =  array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    while(*control_word == 0){

	}
	
	for(i=0; i<5; i++){
		while(*control_word == 0){

		}
		*character_code = array[i];
		*control_word = 5;
	}
    while(1){
		
	}

	return 0;
}