#include<iostream>

class Character
{
    private:
        uint32_t health;
        uint32_t strength;
        uint32_t exp;
        short int luck;
        std::string lore;//not initial
        uint32_t speed;
    public:
        Character(uint32_t, uint32_t, uint32_t, short int, uint32_t);//constructor
        ~Character();//destructor
        uint32_t GetHealth() const;//todo lo que pongas dentro de esto, no lo puedes modificar, osea todo es inmutable
        uint32_t GetStrenght() const;
        uint32_t GetExp() const;
        short int GetLuck() const;
        std::string GetLore() const;
        uint32_t GetSpeed() const;

        void SetLore(std::string);
        void GetDamage(short int damage);
};
