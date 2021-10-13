#ifndef OBJ_CREDITSSETUP_H
#define OBJ_CREDITSSETUP_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    int32 field_4;
    int32 creditsTrack;
    Entity *fxFade;
    bool32 started;
    bool32 skipFlag;
    int32 unknown;
    int32 creditsPos;
    int32 creditsSize;
} ObjectCreditsSetup;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityCreditsSetup;

// Object Struct
extern ObjectCreditsSetup *CreditsSetup;

// Standard Entity Events
void CreditsSetup_Update(void);
void CreditsSetup_LateUpdate(void);
void CreditsSetup_StaticUpdate(void);
void CreditsSetup_Draw(void);
void CreditsSetup_Create(void* data);
void CreditsSetup_StageLoad(void);
void CreditsSetup_EditorDraw(void);
void CreditsSetup_EditorLoad(void);
void CreditsSetup_Serialize(void);

// Extra Entity Functions
void CreditsSetup_LoadCreditsStrings(void);

#endif //!OBJ_CREDITSSETUP_H
