#ifndef OBJ_UFO_HUD_H
#define OBJ_UFO_HUD_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    uint16 spriteIndex;
} ObjectUFO_HUD;

// Entity Class
typedef struct {
    RSDK_ENTITY
    int32 field_58;
    int32 timer;
    uint8 palID;
    Animator data1;
    Animator animator2;
    Animator data3;
    Animator data4;
} EntityUFO_HUD;

// Object Struct
extern ObjectUFO_HUD *UFO_HUD;

// Standard Entity Events
void UFO_HUD_Update(void);
void UFO_HUD_LateUpdate(void);
void UFO_HUD_StaticUpdate(void);
void UFO_HUD_Draw(void);
void UFO_HUD_Create(void* data);
void UFO_HUD_StageLoad(void);
void UFO_HUD_EditorDraw(void);
void UFO_HUD_EditorLoad(void);
void UFO_HUD_Serialize(void);

// Extra Entity Functions
void UFO_HUD_CheckLevelUp(void);
void UFO_HUD_LevelUpMach(void);
void UFO_HUD_DrawNumbers(Vector2 *drawPos, int32 value);

#endif //!OBJ_UFO_HUD_H
