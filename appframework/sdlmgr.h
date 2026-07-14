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
    virtual bool CreateMainWindow() override;
    virtual void DestroyMainWindow() override;
    virtual void SwapBuffers() override;
    virtual void SetWindowTitle(const char *pTitle) override;
    virtual void GetWindowSize(int &width, int &height) override;
    virtual void *GetWindow() override;
    virtual void *GetGLContext() override;
    virtual bool IsWindowVisible() override;
    virtual void PumpWindowsMessageLoop() override;
    virtual void GetMouseDelta(int &x, int &y) override;
    virtual void SetMouseVisible(bool bVisible) override;
    virtual void SetMouseFocus(bool bFocus) override;
    virtual void SetCursorPos(int x, int y) override;
    virtual void GetCursorPos(int &x, int &y) override;
    virtual bool IsCursorVisible() override;
    virtual void SetWindowPosition(int x, int y) override;
    virtual void GetWindowPosition(int &x, int &y) override;
    virtual void SetWindowSize(int width, int height) override;
    virtual void SetFullscreen(bool bFullscreen) override;
    virtual bool IsFullscreen() override;
    virtual void SetVSyncEnabled(bool bEnabled) override;
    virtual bool IsVSyncEnabled() override;
    virtual void *GetProcAddress(const char *name) override;
    virtual void PumpAndPeekMessages() override;
    virtual int GetDisplayWidth() override;
    virtual int GetDisplayHeight() override;
};

// ----------------------------------------------------------------------------
// Singleton accessor
// ----------------------------------------------------------------------------
ILauncherMgr *GetLauncherMgr();

#endif // SDLMGR_H
