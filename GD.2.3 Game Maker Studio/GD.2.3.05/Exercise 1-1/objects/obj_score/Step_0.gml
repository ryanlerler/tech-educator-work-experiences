//Ensures that this occurs only when player is in the game room
if(room == rm_game){
	//Gameover screen appears when player runs of of lives
	if(lives<=0){
		room_goto(rm_gameover);
	}
}