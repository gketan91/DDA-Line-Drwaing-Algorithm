# DDA-Line-Drwaing-Algorithm
Digital Differential Analyzer Line Drawing  Algorithm (DDA)

Steps:
1: Accept the end point co-ordinates of the line segment i.eA(x1,y1),b(x2,y2).
2: calculate
    dx=|x2-x1|
    dy=|y2-y1|
3: If abs(dx)>=abs(dy) then
      length=dx
   else
      length=dy
4: let dx=(x2-x1)/length
       dy=(y2-y1)/length
5: x=x1+0.5*sign(dx)
   y=y1+0.5*sign(dy)
   
6: i=1
  while(i<=length)
  {
  plot(x,y)
  x=x+dx
  y=y+dy
  i=i+1
  }
7. Stop
