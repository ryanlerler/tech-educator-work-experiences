lives -= 1;
//destroy player when colliding with enemy
instance_destroy();
instance_create_depth(512,384,0,obj_player);