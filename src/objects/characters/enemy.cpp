#include "enemy.hpp"
#include <SFML/Graphics.hpp>

using namespace sf;

//initialize hp and stuff
Enemy::Enemy(int hp): Entity() {this->hp = hp;}

Enemy::~Enemy(){
    //dtor
}

short int Enemy::getAttackDamage() { return attack_damage;}

void Enemy::update(float elapsedTime){
    // this->move(elapsedTime);
}

EnemyType Enemy::getEnemyType(){ return enemy_type;}

bool Enemy::isDead() { return is_dead;}

bool Enemy::isDying() {
    return this->hp < 0;
}

EntityType Enemy::getEnemyType() { return ENEMY;}