#ifndef OBJ_FXTRAIL_H
#define OBJ_FXTRAIL_H

#include "SonicMania.h"

// Extras lol
#define FXTrail_trackCount 7

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectFXTrail;

// Entity Class
typedef struct {
    RSDK_ENTITY
    Entity *parent;
    Vector2 currentPos;
    Vector2 statePos[FXTrail_trackCount];
    int32 currentRotation;
    int32 stateRotation[FXTrail_trackCount];
    uint8 currentDirection;
    uint8 stateDirection[FXTrail_trackCount];
    uint8 currentVisible;
    uint8 stateVisible[FXTrail_trackCount];
    Animator currentAnim;
    Animator stateAnim[FXTrail_trackCount];
    Animator *dataPtr;
    int32 baseAlpha;
} EntityFXTrail;

// Object Struct
extern ObjectFXTrail *FXTrail;

// Standard Entity Events
void FXTrail_Update(void);
void FXTrail_LateUpdate(void);
void FXTrail_StaticUpdate(void);
void FXTrail_Draw(void);
void FXTrail_Create(void* data);
void FXTrail_StageLoad(void);
void FXTrail_EditorDraw(void);
void FXTrail_EditorLoad(void);
void FXTrail_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_FXTRAIL_H
