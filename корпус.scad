x = 60;//ширина 
y = 80;//длина
p = 30;//высота
    difference() { 
      cube([x,y,p], true);
        translate([0,0,5])
            cube([x-6,y-6,p],true);
        translate([0,0,-2*p])
            cylinder(r = 10, h = 100);
    }
    
    difference(){
       translate([100, 0, 2])
        cube([x+2,y+2,3],true);
        translate([100,0,-p])
            cylinder(r = 10, p*2);
    }
        