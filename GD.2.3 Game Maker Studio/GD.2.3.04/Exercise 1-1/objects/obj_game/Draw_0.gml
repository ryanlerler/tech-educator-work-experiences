
switch(room){
	
//Condition: only when in rm_story
	case rm_story:
draw_set_halign(fa_center); //center align
draw_text(room_width/2, 200,
	
//Try drawing some aliens and create your own story!
//note: some characters cannot be used
//use @ to type multiple rows of text
	
@"\_(-__-)_/
///    \\\

The Aliens have invaded!
Defeat the enemies!

ARROW KEYS: change direction
CLICK: shoot"
		);
draw_set_halign(fa_left);

	break;
	
}