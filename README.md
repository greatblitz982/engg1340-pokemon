# Pokémon	

## Group 196
### Eehit Ray - 3035665122
### Dhruv Aggarwal - 3035663150

Our version of **Pokémon** is a text-based game, where the user's goal is to become the regional Pokémon Champion.
The game is based on the famous anime/game Pokémon.
The player begins the game with 3 pokémon, and travels through the map, battling other trainers, exploring the new world and fighting pokémon so as to train and level up his/her own Pokémon. He ultimtely battles out the region's champion for the coveted position of Pokémon Champion.

**Game Rules**
1. The player enters his name and selects 3 pokémon of his preference.
2. The Pokémon begin at level 1. It is level that determines the base damage of the moves (attacks) the pokémon possesses. The player battles other pokémon and trainers to gain experience points and level up his own pokémon, so that they become stonger.
3. As you progress through the map, the level of difficulty increases with stronger pokémon appearing. Within the map you will encounter grass areas where you will have battles with random wild pokémon and also encounter other trainers.
4. In the battle system :
	- The player sees his Pokémon and their respective moves, HP (health points), type & level, as well his opponent's pokémon and their HP, type & level.  
	- The player has his current Pokémon selected and he can then choose a move to execute.
	- The effectiveness of the move depends on your Pokémon's level, type and the type of Pokémon being battled. E.g.: Fire types are stronger than Grass types. 
	- The probability of the move hitting decreases as the strength of the move increases.
	- The objective is to ensure you knock out the opponent's Pokémon by making the Pokémon HP 0. By doing so, you would even gain experience points for your Pokémon.
	- If your Pokémon faints then you can switch out your current Pokémon for another.
	- wild Pokémon appear individually, and trainers have a set of 3 Pokémon each. 
	- The battle ends when either party has all Pokémon at HP 0.
	- Note: You can switch out your Pokémon during the battle as well.
5. To heal your hurt Pokémon you can approach Pokémon centres that are located at specific places on the map.
6. You can also check your Pokémon details such as HP, level etc.
7. The game also includes an optional badge collection system that gives you rewards of extra experience points to your Pokémon, as an incentive to explore all sections of the map.
8. If you feel like taking a break you can save the game, and retain your current position and Pokémon.
9. The final frontier of the map is the battle with the regional champion. If you defeat the Champion, you are declared the new regional Pokémon Champion and the game ends.
Notes: We may include features such as evolution and catching Pokémon depending on time. 

**Features and Functions vis-a-vis given code requirements**
1. Generation of random game sets or events:
	- The Pokémon that appear in the wild will be generated by random from a list of Pokémon created by us.
	- The Pokémon that trainers have will also be generated randomly.
	- The moves an opponent Pokémon plays, will be genereated randomly.
	- The probability of a move hitiing also depends on chance. Probabiltiy of hit decreases with strength of move.
	- The number of badges on each game run scattered throughout the map will be randomly generated.
2. Data structures for storing game status:
	- The player is represented using a `Player` class whose data members include name, roster of Pokémon (vector) and number of badges collected.
	- The Pokémon are represented by a `Pokemon` class whose data members include name, type, level, health, moveset (vector) 
	- The move of a Pokémon is defined as a structure called `Move` with elements name, damage and hit.
	- The badges to be optionally collected by the player are represented a structure called `Badge`.
	- There are also utility classes for making core game functions easier, such as ScreenRenderer (for printing to the screen and taking input) and Map (to represent the in-game map), etc.
3. Dynamic memory management: 
	- When the game is loaded, an array of badges of variable size (randomly generated) is created within the map, for the user to find (and accessed using pointers).
4. File input/output :
	- The list of Pokémon (with their moves & type) are stored in a text file which is read by the game during battles to generate random Pokémon as well as during creation of the player's roster.
	- The map of the game and the player's coordinate are stored in a text file which is read, while printing the map.
	- While exiting the game, the player's details (including name, roster and map location) are stored in a file, so that the player can carry on from where they left off.
5. Program codes in multiple files:
	- The program's code is divided into multiple .cpp and .h files. E.g.: `Pokemon.cpp` and `Pokemon.h`

**We hope you enjoy the game and become the Pokémon Champion!**
