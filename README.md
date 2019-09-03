# C++ Game By Daniel Shema and Michael Azarzar
## Advance C++ course - 2nd assignment.

**Table of Contents**

1. [Introduction](#Introduction)
2. [Game](#Game)
3. [Running the Game](#Running-the-Game)
4. [Initialization Files](#Initialization-Files)
5. [Map](#Map)
6. [Soldier Types](#Soldier-Types)
7. [Items](#Items)
##### Introduction
This is an assignment which we received in an Advanced C++ course, as part of a C.S. Graduate degree. it's the 2nd assignment out of 3 received.
##### Game
This is a war game, in which several armies are raging war in a virtual battlefield.
* Game players are comprised of between 1 and 4 players.
* Each player can be set as a Human player or an NPC(Non-Player Character, AKA, computer player)
* Each player starts with an `n` sized army at his/her disposal, same size for every player.
* Soldiers in each army are divided into a number of troop types, and can vary from army to army, as specified in [soldier types](#Soldier-Types) chapter.
* In addition to troops, the map holds a array of collectible items and objects all over the map, as specified in [items](#Items) chapter.
* In each turn, a different player plays, and decides how and which troop to move, and to which new location on the map, then attack an enemy soldier, and so on.
* The game starts each time at an initial configuration, which is read from a configuration file, defined at a later chapter, file format defined at a later chapter, in this file we define:
  * The number of players.
  * Each player's type(Human or PC).
  * Size of the map.
  * Number of troops each player would get.
  * Type of troops for each player.
  * Starting location for each player.
  * Weapons at player's disposal.
  * And more.
* Data of configuration file would be read at each game's start and by it, each and every different game object is initialized.
* Input interface for the game - player's moves. and output interface - field display and so on, would be specified at a later chapter.
*  At each game's end, the game creates a file which hold every game configuration: 
   - Number of troops for each player.
   - Position of every troop at each game iteration.
   - Position of each of the game's items.
   - Winner of each game, or a note that the game haven't ended.
   - And more, which is defined at a later chapter.
#### Running the Game
Run the game using:  
`./Game [initFile] [player1 player2 ...]`  
command in the root directory,  
where:  
`init.csv` = the game configuration file which you can edit.  
`player1 player2`... = each player's actions sequence file. order by human players turns.  

> **Init Example:**
`./Game init.csv p1.csv`  
> Where its a single player, players configuration is in `p1.csv` file, 
and game configuration is in `init.csv`.  

> **Help** regarding operation of the application can be achieved using:  
> `./Game -help`  

if there is an error in the init configuration file, the game would terminate and print an error massage.

##### Initialization Files
The game is initialized using `.csv` formatted files.
Game init configuration file - `init.csv` format:  
` battlefieldSize , [battlefieldWidth] , [battlefieldHeight] `  
` players , [numberOfPlayers] `  
` soldiers , [numberOfTroopsForEachPlayer] `  
` ... `  
` p1 , [isHumanOrPC] < strategyNumber - For Non-Human Player > `  
` [startingWeapon(if there is)] , [startingLocation] , [soldier1Type] `  
` [startingWeapon(if there is)] , [startingLocation] , [soldier2Type] `  
` ... `  
` p2 , [isHumanOrPC] < strategyNumber - For Non-Human Player > `  
` [startingWeapon(if there is)] , [startingLocation] , [soldier1Type] `  
` [startingWeapon(if there is)] , [startingLocation] , [soldier2Type] `  
` Objects `  
` [objectType - Weapon/Defense/Solid Object] , [objectName] , [objectLocation] , <arguments> `  
> where:  
> if its Defense - arguments would be defense level.  
> if its a solid object - the arguments would be length and width.  
> each point which represent location needs to be of the `[x y]` format.  
  
Human player configuration file - `p1.csv`  format:  
` Player `  
` [destinationPoint1 (for troop 1)] , [destinationPoint2] , [destinationPoint3] , ... `  
` [destinationPoint1 (for troop 2)] , [destinationPoint2] , [destinationPoint3] , ... `  
` ... `  
> Pay attention that if a troop ran out of destination points, he won't move or attack anymore.
> The game ends when everybody runs out of destination points.  
  
End Game output file is:  
` Game Configurations `  
` Player1 `  
` [troop1Type] , [HP] , [location] , [Weapon (f there is)] `  
` [troop1Type] , [HP] , [location] , [Weapon (f there is)] `  
` ... `  
` Player2 `  
` [troop1Type] , [HP] , [location] , [Weapon (f there is)] `  
` [troop1Type] , [HP] , [location] , [Weapon (f there is)] `  
` ... `  
` Winner is: [winningPlayer(number) or a declaration there is no winner] `  

##### Map
- Object's Positions - is defined by a Point(x,y) positioning.
##### Soldier Types
##### Items
