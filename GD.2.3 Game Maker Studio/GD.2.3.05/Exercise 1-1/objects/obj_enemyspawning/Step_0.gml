//size of the image will increase by 20% continuously
//until it finally reaches its original size

image_xscale = min (image_xscale + 0.02,1);
image_yscale = min (image_yscale + 0.02,1);

//once it reaches its original size, it will turn into obj_enemy
if image_xscale == 1 instance_change(obj_enemy,1)