//
//  Textures.h
//  Raytracer
//
//  Created by Piotr Didyk on 19.08.21.
//

#ifndef Textures_h
#define Textures_h


#include "glm/glm.hpp"

glm::vec3 checkerboardTexture(glm::vec2 uv){
    return glm::vec3(0.0);
}
glm::vec3 rainbowTexture(glm::vec2 uv){
    int factor = 20;
    int res = int(factor*(uv.x + uv.y)) % 3;

    if (res == 0) {
        return glm::vec3(1.0, 0.0, 0.0);
    } else if (res == 1) {
        return glm::vec3(0.0, 1.0, 0.0);
    } else {
        return glm::vec3(0.0, 0.0, 1.0);
    }
}

#endif /* Textures_h */
