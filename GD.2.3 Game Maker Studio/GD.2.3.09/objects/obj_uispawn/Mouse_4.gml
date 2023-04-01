/// @description Insert description here
// You can write your code in this editor
if(!instance_exists(obj_TowerSpawn))
{
	var insta = instance_create_layer(mouse_x, mouse_y, "Tower", obj_TowerSpawn);
	
	with(insta)
	{
		TowerType = other.towerType;
	  
	
	}
}
	

