import turtle #module

#creating turtle pen
pen = turtle.Turtle()
window = turtle.Screen()


#Set the fillcolor
pen.fillcolor('Yellow')

#Start filling the color
pen.begin_fill()

#drwaing the circle of radius r
pen.up()
pen.goto(0,-120)
pen.circle(200)

#ending the filling of the color
pen.end_fill()

#eye1
pen.fillcolor("White")
pen.begin_fill()
pen.up()
pen.goto(-70,130)
pen.down()
pen.pensize(2)
pen.circle(40)
pen.end_fill()

#eye1_center_pupil
pen.fillcolor("Black")
pen.begin_fill()
pen.up()
pen.goto(-70,140)
pen.down()
pen.circle(20)
pen.end_fill()

#eye2
pen.fillcolor("White")
pen.begin_fill()
pen.up()
pen.goto(70,130)
pen.down()
pen.pensize(2)
pen.circle(40)
pen.end_fill()

#eye2_center_pupil
pen.fillcolor("Black")
pen.begin_fill()
pen.up()
pen.goto(70,140)
pen.down()
pen.circle(20)
pen.end_fill()

#mouth
pen.up()
pen.goto(-100,20)
pen.down()
pen.pensize(5)
pen.right(90)
pen.circle(100,180)
pen.left(90)
pen.forward(200)

#nose
pen.fillcolor("Red")
pen.begin_fill()
pen.up()
pen.goto(30,80)
pen.down()
pen.right(60)
pen.forward(60)
pen.left(120)
pen.forward(60)
pen.left(120)
pen.forward(60)
pen.end_fill()
