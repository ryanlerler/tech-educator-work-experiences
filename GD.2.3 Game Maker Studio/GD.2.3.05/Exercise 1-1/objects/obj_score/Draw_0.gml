var cx = camera_get_view_x(view_camera[0]);
var cy = camera_get_view_y(view_camera[0]);


draw_set_font(fnt_score);
draw_set_color(c_white);
draw_set_halign(fa_left);
draw_text(cx+20, cy+20, "Score: "+string(score)); 
draw_text(cx+20, cy+50, "Lives: "+string(lives)); 