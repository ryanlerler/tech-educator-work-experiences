/// create obj_enemyspawning on the "Enemy_Layer" at any part of the room
instance_create_layer(random(room_width), random(room_height), "Enemies", obj_enemyspawning)
//restart countdown
alarm[0] = spawnrate;