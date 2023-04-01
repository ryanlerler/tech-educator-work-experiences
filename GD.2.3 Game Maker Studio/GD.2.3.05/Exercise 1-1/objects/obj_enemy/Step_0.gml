//Make the enemy follow the player
if(instance_exists(obj_player))
{
	move_towards_point(obj_player.x,obj_player.y, enemy_speed);
}
//Make the enemy face the direction it moves
image_angle = direction;

if(enemy_hp<=0)
{
	with (obj_score) score = score + 1;
	instance_destroy();
	
}