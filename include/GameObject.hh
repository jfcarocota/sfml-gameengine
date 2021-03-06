#pragma once
#include "Rigidbody.hh"
#include "SFML/Graphics.hpp"
#include<string>
#include "Drawable.hh"

class GameObject
{
protected:
  Drawable* drawable{};
  /*float scale{};
  int width{};
  int height{};
  int column{};
  int row{};
  float posX{};
  float posY{};
  sf::Sprite* sprite;
  sf::Texture* texture;*/
  Rigidbody* rigidbody{};
  b2World* world{};
  sf::RenderWindow* window;
  std::string tagName{};
public:
  GameObject(const char* textureUrl, float scale, float width, float height, int column, int row,
  float posX, float posY, b2BodyType bodyType, b2World*& world, sf::RenderWindow*& window);
  ~GameObject();

  virtual void Start();
  virtual void Update(float& deltaTime);
  virtual void Draw();
  virtual void Input();

  sf::Sprite* GetSprite() const;

  std::string GetTagName() const;
  void SetTagName(std::string tagName);
};
