# Moonbase Commander Game

A clone made of the 2002 game "Moonbase Commander" by developer "Humongous Entertainment". Created to demo the openGL engine i developed.

## Getting Started

Clone and run with visual studio.

## Instructions

Turn based strategy game for 2 players.

Objective: Destroy all of opponents Nodes (hubs).

Starting resource: 7

Rules:
* The console screen will output damage details and costs for selected options.
* Fire a resource node onto a resource patch to increase resource gain per turn.
* Firing a Hub or weapon costs resource.
* Connection nodes cannot cross. Newer node is detroyed when this happens.
* Connections cannot be damaged.
* Only basic hubs can spawn new nodes (Hubs) or fire projectiles.
* All hubs of one team must be connected - isolated hubs will be destroyed.

Controls:
* Direction arrows  : Firing arch
* Spacebar (hold)   : Fire a projectile. Distance based on time held.
* Enter             : End turn
* Tab               : Show help / controls
* Num1              : Weapon: Bomb
* Num2              : Weapon: Cluster Bomb
* Num3              : Weapon: Surge Bomb
* Num4              : Weapon: Hub
* Num5              : Weapon: Resource Hub
* Num6              : Weapon: Shield Hub
* Num7              : Weapon: Heal Tool

## Built With

* Visual Studio 2015
* Box2D
* GLEW
* SOIL
* irrKlang
* jsonCPP
* NCLGL

## Authors

* **Geoff Whitehead - (https://github.com/geoffwhitehead)

## License

This project is licensed under the MIT License - see the [LICENSE.md](./LICENSE.md) file for details
