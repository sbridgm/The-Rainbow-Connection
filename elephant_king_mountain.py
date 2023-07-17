#The Rainbow Connection

#Python Code
import random 
import math

# Create two empty lists to store data
rainbow_list = []
connection_list = []

# Loop through a range of numbers to generate 2000 random numbers
for i in range(2000):
    rainbow_list.append(random.randint(0,255)) 
    connection_list.append(random.randint(0,255))

# Function to check if we have a correct connection
def check_connection(rainbow, connection):
    if rainbow == connection:
        return True
    else:
        return False

# Main loop to check for a match
for i in range(2000):
    if check_connection(rainbow_list[i], connection_list[i]):
        print("We have a connection!")
    else:
        print("No connection.")

# Function to calculate the Euclidean distance between two colors
def calculate_distance(color1,color2):
    return math.sqrt(sum([(a - b) ** 2 for a, b in zip(color1, color2)]))

# Calculate the Euclidean distance between the two lists
distance = 0
for i in range(2000):
    distance += calculate_distance(rainbow_list[i], connection_list[i])

# Print out the total distance
print("Total distance between the two lists: ", distance)