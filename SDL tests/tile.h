#ifndef TILE_H_INCLUDED
#define TILE_H_INCLUDED

#include "point.h"

class tile(
    private:
        point_t location;
        int width, height;
        color_t color;
        char letter;
    public:
        tile();

        void setLocation(const point_t&);
        void setWidth(int);
        void setHeight(int);
        void setColor(const color_t&);
        void setLett(char);

        point_t getLocation() const;
        int getWidth() const;
        int getHeight() const;
        color_t getColor() const;

        void draw(SDL_Plotter&) const;
);

#endif //TILE_H_INCLUDED