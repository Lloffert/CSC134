"""
CSC 134
M2LAB2 - Python Turtle
Lydia Loffert
9/10/25
Purpose: Make some interesting shapes
"""

import turtle as t
import random
# Make it faster!
t.speed(0) # 0 = fastest, 1 = slowest, 6 = normal
# Make it prettier!
t.bgcolor("black")
t.pencolor("yellow")
t.pensize(2)

"""
# Basic: Square
for i in range(4):
    t.forward(100)
    t.right(90)
# Evolving: Spiral
for i in range(50):
    t.forward(i * 2) # Gets bigger each time!
    t.right(30) # Not quite 90... see what happens!
# Your turn: What if the angle changed too?
"""

#My mess around
"""
# Remember where you started
start_x = t.xcor()
start_y = t.ycor()

#Do stuff...
t.forward(100)
t.right(90)
# Go back
t.goto(start_x, start_y)
#Move again
t.left(30)
t.forward(100)
t.left(120)
t.forward(100)
"""
#Outer
t.penup()
t.goto(-250, -200)
t.pendown()
t.goto(300, -200)
t.goto(200, 200)
t.goto(-150, 200)
t.goto(-250, -200)

#Inner
t.goto(-70, -60)
t.goto(-70, 70)
t.goto(-150,200)
t.goto(200, 200)
t.goto(120, 70)
t.goto(-70, 70)
t.goto(-70, -60)
t.goto(120, -60)
t.goto(300,-200)
t.goto(120, -60)
t.goto(120, 70)

#Door
t.penup()
t.goto(-5, -60)
t.pendown()
t.goto(-5, 30)
t.goto(55, 30)
t.goto(55, -60)

#Doorknob
t.penup()
t.goto(50, -20)
t.pendown()
r = 5
t.circle(r)

#Rug
t.penup()
t.goto(-50, -80)
t.pendown()
t.goto(-140, -160)
t.goto(190, -160)
t.goto(100, -80)
t.goto(-50, -80)


"""
#Mouse control
t.onclick(t.goto) # Click to move
t.ondrag(t.goto) # Drag to draw
"""
