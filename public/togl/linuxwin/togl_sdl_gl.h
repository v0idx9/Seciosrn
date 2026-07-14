#ifndef TOGL_SDL_GL_H
#define TOGL_SDL_GL_H

#ifdef USE_SDL
#if defined( IOS ) || defined( _IOS ) || defined( __IPHONEOS__ )
#include "SDL_opengles2.h"
#else
#include "SDL_opengl.h"
#endif
#endif

#endif
