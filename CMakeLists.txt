cmake_minimum_required(VERSION 3.22)
project(Heroes)

set(CMAKE_CXX_STANDARD 14)

add_executable(Heroes main.cpp Race/Race.h Race/Elf.h Race/Orc.h Specialization/Specialization.h Specialization/Archer.h Specialization/Warrior.h Weapon/Weapon.h Weapon/Bow.h Weapon/Axe.h Hero.h Weapon/Hands.h)
