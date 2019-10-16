#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <strings.h>

struct Hero exStruct();
void printStruct(struct Hero this);

struct Hero {
  char* name;
  int hp;
  char* ult;
};

struct Hero exStruct(){
  struct Hero hero;
  char* names[] = { "Ana", "Ashe", "Baptiste", "Bastion", "Brigitte",
                    "Doomfirst", "D.Va (Mech)", "D.Va (Pilot)", "Genji",
                    "Hanzo", "Junkrat", "Lucio", "McCree", "Mei", "Mercy",
                    "Moira", "Orisa", "Pharah", "Reaper", "Reinhardt",
                    "Roadhog", "Sigma", "Soldier 76", "Sombra", "Symettra",
                    "Torbjorn", "Tracer", "Widowmaker", "Winston",
                    "Wrecking Ball", "Zarya", "Zenyatta"};
  int hit_points[] = {  200, 200, 200, 300, 250, 250, 600, 150, 200, 200, 200,
                        200, 200, 250, 200, 200, 400, 200, 250, 500, 600, 400,
                        200, 200, 200, 200, 150, 200, 500, 600, 400, 200};
  char* ultimates[] = { "Nano Boost", "B.O.B.", "Amplification Matrix",
                        "Configuration: Tank", "Rally", "Meteor Strike",
                        "Self-Destruct", "Call Mech", "Dragonblade",
                        "Dragonstrike", "RIP-Tire", "Sound Barrier", "Deadeye",
                        "Blizzard", "Valkyrie", "Coalescence", "Supercharger",
                        "Barrage", "Death Blossom", "Earthshatter", "Whole Hog",
                        "Gravitic Flux", "Tactical Visor", "EMP",
                        "Photon Barrier", "Molten Core", "Pulse Bomb",
                        "Infra-Sight", "Primal Rage", "Minefield",
                        "Graviton Surge", "Transcendence"};
  srand(time(NULL));
  int i = rand() % 32;
  hero.name = *(names + i);
  hero.hp = *(hit_points + i);
  hero.ult = *(ultimates + i);
  return hero;
}

void printStruct(struct Hero hero){
  printf("Hero Name: %s\nHit Points: %d\nUltimate: %s\n", hero.name, hero.hp, hero.ult);
}

int main(){
  struct Hero hero1 = exStruct();
  printf("Here is an example of a hero from the game \"Overwatch\":\n");
  printStruct(hero1);
  printf("\n");
  sleep(1);
  struct Hero hero2 = exStruct();
  printf("Here is another example:\n");
  printStruct(hero2);
}
