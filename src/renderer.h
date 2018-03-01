#ifndef SOFTWARERENDERER_RENDERER_H
#define SOFTWARERENDERER_RENDERER_H

#include "model.h"
#include "bitmap.h"
#include "camera.h"


typedef struct renderdata_t renderdata_t;

struct renderdata_t {

    model_t *models;
    unsigned int nModels;

    camera_t *camera;

    void (*osh)(renderdata_t*, model_t *model);
    void (*vsh)(renderdata_t*, int indexModel, vertex_t*, vertex_t*);
    void (*fsh)(renderdata_t*, int indexModel, vec_t*, int, pixel_t*);

    int cullingMode; // 0 = (back)face-culling disabled, 1 = cull backface, 2 = cull frontface

    void **uniformVars; // shared variables between main application and shaders
    unsigned int nUniformVars;

};





void render(renderdata_t *data);




#endif
