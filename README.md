# Lem_in  

#### The essence of the program:  

The program receives rooms and connections between them. There is also a start room and an end room. Then any number of ants is served. The task is to transport all the ants from the start room to the end room.  

*Program will receive the data describing the ant farm from the standard outputin the following format:*
~~~
number_of_ants
the_rooms
the_links
~~~  

*The ant farm is defined by the following links:*  
~~~
##start
1 23 3
2 16 7
#comment
3 16 3
4 16 5
5 9 3
6 1 5
7 4 8
##end
0 9 5
0-4
0-6
1-3
4-3
5-2
3-5
#another comment
4-2
2-1
7-6
7-2
7-4
6-5
#another comment
~~~  

*There are two parts:◦The rooms, which are defined by:name coord_x coord_y◦The links, which are defined by:name1-name2◦All of it is broken by comments, which start with#*  

~~~
The rooms’ names won’t necessarily be numbers, and they won’tnecessarily be in the right and continuous order (we will find roomswith names such as zdfg, qwerty, etc...)  But most importantly, aroom will never start with the character L nor the character #
~~~

> Lines that start with##are commands modifying the properties of the line thatcomes right after.  
> For example,##startsignals the ant farm’s entrance and##endits exit.  
> Any non compliant or empty lines will automatically stop the ant farm’s readingas well as the orderly processing of the acquired data  
> If there isn’t enough data to process normally you must displayERROR  


• The goal of this project is to find the quickest way to getnants across the farm.  
• Quickest way means the solution with the least number of lines, respecting theoutput format requested below.  
• Obviously, there are some basic constraints. To be the first to arrive, ants will needto take the shortest path (and that isn’t necessarily the simplest). They will alsoneed to avoid traffic jams as well as walking all over their fellow ants.  
• At the beginning of the game, all the ants are in the room##start. The goal isto bring them to the room##endwith as few turns as possible. Each room canonly contain one ant at a time. (except at##startand##endwhich can containas many ants as necessary.  


The task was performed using Dijkstra and suurballe algorithms and their modifications.
