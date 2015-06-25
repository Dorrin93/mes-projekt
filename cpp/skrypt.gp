set term png enhanced

set object 1 rectangle from screen 0,0 to screen 1,1 fillcolor rgb"black" behind
set tics textcolor rgb "white"

set size ratio 0.2
set yrange[-1:1]
set pm3d map

set output "velocity_abs.png"
set cbrange[0:20]
set palette defined (0 "blue", 6.6 "green", 10 "yellow", 12 "red", 17 "pink", 20 "white")
splot "ns_obstackle.dat" u 1:2:5

set output "velocity_x.png"
set cbrange[-6:20]
set palette defined (-5 "blue", 6.6 "green", 10 "yellow", 12 "red", 17 "pink", 20 "white")
splot "ns_obstackle.dat" u 1:2:3

set output "velocity_y.png"
set cbrange[-7:12]
set palette defined (-5 "blue", 0 "royalblue", 6.6 "green", 10 "yellow", 12 "red", 17 "pink", 20 "white")
splot "ns_obstackle.dat" u 1:2:4
