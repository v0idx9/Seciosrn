//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: SDL Manager - header
//
//===========================================================================//

#ifndef SDLMGR_H
#define SDLMGR_H

#include "appframework/ilaunchermgr.h"

// ----------------------------------------------------------------------------
// CSDLMgr - implementation of ILauncherMgr using SDL
// ----------------------------------------------------------------------------
class CSDLMgr : public ILauncherMgr
{
public:
    CSDLMgr();
    virtual ~CSDLMgr();

    // ILauncherMgr interface
    virtual bool CreateMainWindow();
    virtual void DestroyMainWindow();
    virtual void SwapBuffers();
    virtual void SetWindowTitle(const char *pTitle);
    virtual void GetWindowSize(int &width, int &height);
    virtual void *GetWindow();
    virtual void *GetGLContext();
    virtual bool IsWindowVisible();
    virtual void PumpWindowsMessageLoop();
    virtual void GetMouseDelta(int &x, int &y);
    virtual void SetMouseVisible(bool bVisible);
    virtual void SetMouseFocus(bool bFocus);
    virtual void SetCursorPos(int x, int y);
    virtual void GetCursorPos(int &x, int &y);
    virtual bool IsCursorVisible();
    virtual void SetWindowPosition(int x, int y);
    virtual void GetWindowPosition(int &x, int &y);
    virtual void SetWindowSize(int width, int height);
    virtual void SetFullscreen(bool bFullscreen);
    virtual bool IsFullscreen();
    virtual void SetVSyncEnabled(bool bEnabled);
    virtual bool IsVSyncEnabled();
    virtual void *GetProcAddress(const char *name);
    virtual void PumpAndPeekMessages();
    virtual int GetDisplayWidth();
    virtual int GetDisplayHeight();
};

// ----------------------------------------------------------------------------
// Singleton accessor
// ----------------------------------------------------------------------------
ILauncherMgr *GetLauncherMgr();

#endif // SDLMGR_H
