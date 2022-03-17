# Darduino
Thease are some Arduino codes to create a Darduino (dart game with arduino)

## Project description

1. ***The main goal of this project is to create a pair of dart bullseyes interconnected through IoT connection***

2. Here you will find the code for a game mode turn-based, team vs team, where you have to defeat the oponent by shotting 2 times the same plate to mark it as yours, with 6 plates.

3. (UPDATE 17/03/2022) We've had some problems on connecting one of the NANO 33 IoT to internet, and the IoT Cloud doesn't help because it works not very well. We've tried to simplify the code (D1.ino and D2.ino files, that let you score by shotting only once each plate) in order to make the game work, but problems still persisted. That's why we have done a second code which allows to play the TEAMvsTEAM game (the one from the beggining -2SHOTSxPLATE-) with only one dart bullseye and no need of internet connection. The first code (made to work with IoT Cloud) remains here in order to show everyone where we failed.
