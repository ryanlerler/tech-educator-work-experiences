if(!place_meeting(x,y, obj_walktile))
{
	isDeployed = true;
switch (TowerType)
{
	case 1:
	var insta = instance_create_layer(mouse_x, mouse_y, "Tower", obj_ArcherTowerLv1);
	break;
	
	case 2:
	var insta = instance_create_layer(mouse_x, mouse_y, "Tower", obj_CannonTowerLv1);
	break;
	
	case 3:
	var insta = instance_create_layer(mouse_x, mouse_y, "Tower", obj_IceTowerLv1);
	break;
	
	case 4:
	var insta = instance_create_layer(mouse_x, mouse_y, "Tower", obj_PoisonTowerLv1);
	break;
	
	case 5: 
	var insta = instance_create_layer(mouse_x, mouse_y, "Tower", obj_TeslaTowerLv1);
	break;
	
	default:
	instance_destroy()
	break;
}

}

instance_destroy();
