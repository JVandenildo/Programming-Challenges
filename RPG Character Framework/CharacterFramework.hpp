#include <iostream>

class Char_base
{
protected:
    virtual void SetHP(int hp);
    virtual void SetAtk(int atk);
    virtual void SetDef(int def);
    virtual void SetLevel(int lvl);

public:
    const std::string name;
    Char_base(std::string Name);
    ~Char_base();
    virtual int GetHP() const;
    virtual int GetAtk() const;
    virtual int GetDef() const;
    virtual int GetLevel() const;
    virtual bool IsDead() const;
    virtual void Victory();
    void Attack(Char_base &other);
    void Load(int hp, int atk, int def, int lvl);
};

///////////////////////////////////////////
// Your Code

class Character : public Char_base
{
    int _hp;
    int _atk;
    int _def;
    int _lvl;

public:
    Character(std::string Name);
    ~Character();
};

class Player : public Character
{
    int _xp;

public:
    Player(std::string Name = "Player");
    ~Player();
};

class Enemy : public Character
{
    int _xpReward;

public:
    Enemy(std::string Name = "Enemy");
    ~Enemy();
};
