#pragma once

#include <iostream>
#include <map>

typedef std::map<std::string, ASpell*> map_spell;

class Warlock
{
    private:
        std::string name;
        std::string title;
        map_spell map_warlock;

        Warlock();
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &other);
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        std::string const &getName() const;
        std::string const &getTitle() const;

        void setTitle(std::string const &title);

        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string name_spell);
        void launchSpell(std::string name_spell, ATarget& target);
};
