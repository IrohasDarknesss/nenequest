#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <SFML/Graphics.hpp>
#include <list>
#include <string>
#include <vector>

#include "configProperty.hpp"
class ConfigParameter;
class ConfigManager {
   private:
    std::list<ConfigProperty *> properties;

   public:
    ConfigManager();
    ConfigParameter *getParameter(std::string name);
    void setParameter(std::string name, ConfigParameter *param);
    void setParameter(std::string name, sf::Keyboard::Key key);
    void setParameter(std::string name, int i);
    void setParameter(std::string name, std::string str);
};

#endif
