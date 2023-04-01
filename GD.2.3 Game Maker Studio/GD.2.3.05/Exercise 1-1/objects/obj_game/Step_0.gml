//conditional statements
if(keyboard_check_released((vk_enter)))
{
	switch(room){
		case rm_title:
		case rm_story:
		room_goto_next();
		break;
			
		case rm_gameover:
		room_goto(rm_game);
		break;
	}
}
