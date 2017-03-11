
#include"include.hpp"

SDL_Texture *loadTexture(SDL_Renderer *renderer, const std::string &fileName)
{
  auto surface = SDL_LoadBMP(fileName.c_str());
  if (!surface)
  {
    throw std::runtime_error(std::string("SDL_LoadBMP(") + fileName + "): " + SDL_GetError());
  }
  auto res = SDL_CreateTextureFromSurface(renderer, surface);
  SDL_FreeSurface(surface);
  return res;
}
