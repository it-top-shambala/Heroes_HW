cmake_minimum_required(VERSION 3.22)
project(Heroes)

set(CMAKE_CXX_STANDARD 14)

add_executable(Heroes main.cpp Hero.h Choice.h HeroesCreator.h RaceCreator.h WeaponCreator.h ArcherCreator.h WarriorCreator.h HumanCreator.h OrcCreator.h AxeCreator.h BowCreator.h Archer.h Warrior.h Human.h Orc.h Race.h Axe.h Bow.h Weapon.h "Hero/Hero.h" "Choice/Choice.h" "Creator/abstraction/HeroesCreator.h" "Creator/abstraction/RaceCreator.h" "Creator/abstraction/WeaponCreator.h" "Creator/c_hero/ArcherCreator.h" "Creator/c_hero/WarriorCreator.h" "Creator/c_race/HumanCreator.h" "Creator/c_race/OrcCreator.h" "Creator/c_weapon/AxeCreator.h" "Creator/c_weapon/BowCreator.h"  "Hero/Archer.h" "Hero/Warrior.h" "Race/Human.h" "Race/Orc.h" "Race/Race.h" "Weapon/Axe.h" "Weapon/Bow.h" "Weapon/Weapon.h")