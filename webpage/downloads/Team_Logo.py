

import PIL
import matplotlib.pyplot as plt
import os.path      
from PIL import Image        
import PIL.ImageOps
import PIL.ImageDraw

# Open the files in the same directory as the Python script
directory = os.path.dirname(os.path.abspath(__file__))  
student_file = os.path.join(directory, 'Joe Biden and Obama.jpg')

# Open and show the student image in a new Figure window
student_img = PIL.Image.open(student_file)
fig, axes = plt.subplots(1, 1)

# Open, resize, and display earth
earth_file = os.path.join(directory, 'earth.png')
John_file = os.path.join(directory, 'John.png')
Me_file = os.path.join(directory, 'Me.png')
earth_img = PIL.Image.open(earth_file)
Me_img = PIL.Image.open(Me_file)
John_img = PIL.Image.open(John_file)
earth_small = earth_img.resize((2000, 2000)) #eye width and height measured in plt
Me = Me_img.resize((1000, 1000))
John = John_img.resize((3500, 3500))
tint=PIL.Image.new('RGBA', (10, 10), (227,0,7,150))
tint = tint.resize((3000,3000))
tint2=PIL.Image.new('RGBA', (10, 10), (0,227,150,150))
tint2 = tint2.resize((500,500))


# Paste earth into right eye and display
# Uses alpha from mask
student_img.paste(earth_small, (-300, 400), mask=earth_small) 
student_img.paste(John, (-1000, -100), mask=John) 
student_img.paste(Me, (-100, 0), mask=Me) 
student_img.paste(tint, (0, 0), mask=tint) 
student_img.paste(tint2, (0, 0), mask=tint2) 

# Display
fig3, axes3 = plt.subplots(1, 1)
axes3.imshow(student_img, interpolation='none')
fig3.show()