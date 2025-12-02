# Nimbus_Project_IqraKhan_83
Smart Waste Collection System in C. Manages bin data using structures and dynamic memory, generates optimized routes based on priority and distance, and logs results using file handling. Includes modular design with menu-driven interface for adding bins, viewing data, and creating routes.

PROJECT OBJECTIVE:

To Design a Smart waste Collection scheduling system . 
For Municipalities plan garbage collection routes based on waste level and location priorities .

DEVELOPMENT STEPS:

Create a program that- 
1.Stores waste bin data (location_id, fill_level, priority). 
2.Calculates optimal route sequence for waste trucks. 
3.Uses structures for bins, arrays for distance matrix, and loops for route generation. 
4.Implements functions for distance and fuel calculations. 
5.Uses pointers to dynamically add new bins and file I/O to save route logs.

USAGE INSTRUCTIONS :

1.Compile the Program -

2.Run the Application -

3.Use the Menu Options -

a) Add Bin Enter bin ID, fill level, priority, and coordinates.

b) View All Bins Displays the stored bin information.

c) Generate Route The system creates an optimized collection route based on priority + nearest distance.

d) Save Bin Data Saves current data to a .csv file.

e) Load Bin Data Loads previously saved bin data.

f) Exit Closes the program safely.

4.Route Output -

a) Shows the sequence of bins to collect.

b) Displays total route distance and estimated fuel usage.

5.Input Format -

a) Coordinates must be numbers (eg- 2.5, 10).

b) Fill level and priority must be integers.

6.Files Created -

a) bins.csv – stores all bin information.

b) route_log.txt – stores route and fuel data
