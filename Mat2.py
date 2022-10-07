#AardGraph
import numpy as np
import matplotlib.pyplot as plt

# data to plot
n_groups = 8
means_frank = [7200, 7300, 7350, 6707, 4781, 3058, 5839, 5800]
means_guido = [12714, 6089, 12160, 13321, 17779, 10833, 13708, 16910]
means_pep = [100, 110, 116, 120, 36, 212, 120, 120]
# create plot
fig, ax = plt.subplots()
index = np.arange(n_groups)
bar_width = 0.28
opacity = 0.8

rects1 = plt.bar(index, means_frank, bar_width,
alpha=opacity,
color='b',
label='Arecanut')

rects2 = plt.bar(index + bar_width, means_guido, bar_width,
alpha=opacity,
color='g',
label='Banana')

rects3 = plt.bar(index + bar_width*2, means_pep, bar_width,
alpha=opacity,
color='r',
label='Black Pepper')

plt.xlabel('Year Of Production')
plt.ylabel('Total Production')
plt.title('Year of Production VS Total Production')
plt.xticks(index + bar_width, ('2000', '2001', '2002', '2003', '2004', '2005', '2006', '2010'))
plt.legend()

plt.tight_layout()
plt.show()
