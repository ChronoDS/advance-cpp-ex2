#ifndef SOLDIER_H
#define SOLDIER_H

#include "PickItem.h"
#include "Weapon.h"
#include "BodyArmor.h"
#include "ShieldArmor.h"

enum Color {RED, BLUE, GREEN, BROWN};

class Soldier: public PickItem{
    protected:
        std::string name;
        Point2d location;
        int hp;
        Color team;
        double movementSpeed;
        Weapon* weapon;
        BodyArmor* bodyArmor;
        ShieldArmor* sheildArmor;
        boolean isAlive;
    public:
        Soldier(const Point2d& location, int hp, int movementSpeed, Color color, const Weapon* weapon = nullptr);
        virtual ~Soldier();
        void die();
        int getHP();
        const Weapon* getWeapon();
        int getDamage();
        virtual const Point2d& getPointDirectionToMove(const Point2d& direction)=0;
        void move(const Point2d& pointToMove);
        double getMovementSpeed();
        Color getColor();
        virtual void fillHealth()=0;
        virtual double hitChance(double distance)=0;
        void setHP(int hp);
        void pick(const Item* other);  
        void setMovmentSpeed(double speed);
        /**
         * replace item if player's is weaker
         * return item that is been replaced
         * can return null.
         */
        Item* changeEquipment(Weapon* other);         
        Item* changeEquipment(ShieldArmor* other); 
        Item* changeEquipment(BodyArmor* other);
};

#endif