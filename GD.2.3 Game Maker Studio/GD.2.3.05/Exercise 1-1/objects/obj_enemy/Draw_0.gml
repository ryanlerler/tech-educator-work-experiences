draw_self();
if(enemy_hp < maxhp)
{
	draw_healthbar(x-32, y-40, x+32, y-35, (enemy_hp/maxhp)*100, c_black, c_red, c_green, 0, true, true);
}
	 