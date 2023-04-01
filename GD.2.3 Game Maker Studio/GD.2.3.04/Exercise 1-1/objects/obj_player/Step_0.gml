//moving around
if(keyboard_check(vk_right)) x=x+4;
if(keyboard_check(ord("D"))) x=x+4;

if(keyboard_check(vk_left)) x=x-4;
if(keyboard_check(ord("A"))) x=x-4;

if(keyboard_check(vk_down)) y=y+4;
if(keyboard_check(ord("S"))) y=y+4;

if(keyboard_check(vk_up)) y=y-4;
if(keyboard_check(ord("W"))) y=y-4;

if(mouse_check_button(mb_left)) && (cooldown < 1) 
{
	instance_create_layer(x,y,"Bullets",obj_bullet)
	cooldown = 3

}
cooldown = cooldown - 1;

image_angle = point_direction(x,y,mouse_x,mouse_y);