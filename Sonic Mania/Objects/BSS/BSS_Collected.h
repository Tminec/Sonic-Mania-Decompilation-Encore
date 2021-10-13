#ifndef OBJ_BSS_COLLECTED_H
#define OBJ_BSS_COLLECTED_H

#include "SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectBSS_Collected;

// Entity Class
typedef struct {
    RSDK_ENTITY
    int32 type;
    int32 timer;
} EntityBSS_Collected;

// Object Struct
extern ObjectBSS_Collected *BSS_Collected;

// Standard Entity Events
void BSS_Collected_Update(void);
void BSS_Collected_LateUpdate(void);
void BSS_Collected_StaticUpdate(void);
void BSS_Collected_Draw(void);
void BSS_Collected_Create(void* data);
void BSS_Collected_StageLoad(void);
void BSS_Collected_EditorDraw(void);
void BSS_Collected_EditorLoad(void);
void BSS_Collected_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_BSS_COLLECTED_H
