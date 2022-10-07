#Aard Plot
import matplotlib.pyplot as plt
import numpy as np
Product = ['2000', '2001', '2002', '2003', '2004', '2005', '2006', '2010']
Quantity = [7200, 7300, 7350, 6707, 4781, 3058, 5839, 5800]
x_pos = np.arange(len(Quantity))
plt.barh(Product, Quantity, color=['Red'], edgecolor='black')
plt.title('Andaman-Nicobar')
plt.ylabel('Year Of Production')
plt.xlabel('Total Production')
plt.show()
