#include "Physics3DLUA.h"
#include "Physics3DLUAWrappers.h"

int luaopen_Physics3D(lua_State *L) {
CoreServices *inst = (CoreServices*)lua_topointer(L, 1);
CoreServices::setInstance(inst);
	static const struct luaL_reg physics3dLib [] = {		{"CollisionScene", Physics3D_CollisionScene},
		{"CollisionScene_initCollisionScene", Physics3D_CollisionScene_initCollisionScene},
		{"CollisionScene_Update", Physics3D_CollisionScene_Update},
		{"CollisionScene_enableCollision", Physics3D_CollisionScene_enableCollision},
		{"CollisionScene_getCollisionEntityByObject", Physics3D_CollisionScene_getCollisionEntityByObject},
		{"CollisionScene_getFirstEntityInRay", Physics3D_CollisionScene_getFirstEntityInRay},
		{"CollisionScene_getCollisionByScreenEntity", Physics3D_CollisionScene_getCollisionByScreenEntity},
		{"CollisionScene_testCollision", Physics3D_CollisionScene_testCollision},
		{"CollisionScene_testCollisionOnCollisionChild", Physics3D_CollisionScene_testCollisionOnCollisionChild},
		{"CollisionScene_testCollisionOnCollisionChild_Convex", Physics3D_CollisionScene_testCollisionOnCollisionChild_Convex},
		{"CollisionScene_testCollisionOnCollisionChild_RayTest", Physics3D_CollisionScene_testCollisionOnCollisionChild_RayTest},
		{"CollisionScene_getCollisionNormalFromCollisionEnts", Physics3D_CollisionScene_getCollisionNormalFromCollisionEnts},
		{"CollisionScene_getCollisionNormal", Physics3D_CollisionScene_getCollisionNormal},
		{"CollisionScene_applyVelocity", Physics3D_CollisionScene_applyVelocity},
		{"CollisionScene_loadCollisionChild", Physics3D_CollisionScene_loadCollisionChild},
		{"CollisionScene_enableGravity", Physics3D_CollisionScene_enableGravity},
		{"CollisionScene_stopTrackingCollision", Physics3D_CollisionScene_stopTrackingCollision},
		{"CollisionScene_addCollisionChild", Physics3D_CollisionScene_addCollisionChild},
		{"CollisionScene_trackCollision", Physics3D_CollisionScene_trackCollision},
		{"CollisionScene_adjustForCollision", Physics3D_CollisionScene_adjustForCollision},
		{"delete_CollisionScene", Physics3D_delete_CollisionScene},
		{"CollisionSceneEntity_get_gravityEnabled", Physics3D_CollisionSceneEntity_get_gravityEnabled},
		{"CollisionSceneEntity_get_autoCollide", Physics3D_CollisionSceneEntity_get_autoCollide},
		{"CollisionSceneEntity_get_gravityStrength", Physics3D_CollisionSceneEntity_get_gravityStrength},
		{"CollisionSceneEntity_get_enabled", Physics3D_CollisionSceneEntity_get_enabled},
		{"CollisionSceneEntity_set_gravityEnabled", Physics3D_CollisionSceneEntity_set_gravityEnabled},
		{"CollisionSceneEntity_set_autoCollide", Physics3D_CollisionSceneEntity_set_autoCollide},
		{"CollisionSceneEntity_set_gravityStrength", Physics3D_CollisionSceneEntity_set_gravityStrength},
		{"CollisionSceneEntity_set_enabled", Physics3D_CollisionSceneEntity_set_enabled},
		{"CollisionSceneEntity", Physics3D_CollisionSceneEntity},
		{"CollisionSceneEntity_getSceneEntity", Physics3D_CollisionSceneEntity_getSceneEntity},
		{"CollisionSceneEntity_Update", Physics3D_CollisionSceneEntity_Update},
		{"CollisionSceneEntity_getType", Physics3D_CollisionSceneEntity_getType},
		{"CollisionSceneEntity_getConvexShape", Physics3D_CollisionSceneEntity_getConvexShape},
		{"CollisionSceneEntity_createCollisionShape", Physics3D_CollisionSceneEntity_createCollisionShape},
		{"delete_CollisionSceneEntity", Physics3D_delete_CollisionSceneEntity},
		{"PhysicsScene", Physics3D_PhysicsScene},
		{"PhysicsScene_Update", Physics3D_PhysicsScene_Update},
		{"PhysicsScene_addPhysicsChild", Physics3D_PhysicsScene_addPhysicsChild},
		{"PhysicsScene_trackPhysicsChild", Physics3D_PhysicsScene_trackPhysicsChild},
		{"PhysicsScene_addCharacterChild", Physics3D_PhysicsScene_addCharacterChild},
		{"PhysicsScene_addVehicleChild", Physics3D_PhysicsScene_addVehicleChild},
		{"delete_PhysicsScene", Physics3D_delete_PhysicsScene},
		{"PhysicsSceneEntity_get_enabled", Physics3D_PhysicsSceneEntity_get_enabled},
		{"PhysicsSceneEntity_set_enabled", Physics3D_PhysicsSceneEntity_set_enabled},
		{"PhysicsSceneEntity", Physics3D_PhysicsSceneEntity},
		{"PhysicsSceneEntity_getSceneEntity", Physics3D_PhysicsSceneEntity_getSceneEntity},
		{"PhysicsSceneEntity_Update", Physics3D_PhysicsSceneEntity_Update},
		{"PhysicsSceneEntity_setFriction", Physics3D_PhysicsSceneEntity_setFriction},
		{"PhysicsSceneEntity_getType", Physics3D_PhysicsSceneEntity_getType},
		{"delete_PhysicsSceneEntity", Physics3D_delete_PhysicsSceneEntity},
		{"PhysicsCharacter", Physics3D_PhysicsCharacter},
		{"PhysicsCharacter_setWalkDirection", Physics3D_PhysicsCharacter_setWalkDirection},
		{"PhysicsCharacter_jump", Physics3D_PhysicsCharacter_jump},
		{"PhysicsCharacter_Update", Physics3D_PhysicsCharacter_Update},
		{"delete_PhysicsCharacter", Physics3D_delete_PhysicsCharacter},
		{"PhysicsVehicle", Physics3D_PhysicsVehicle},
		{"PhysicsVehicle_addWheel", Physics3D_PhysicsVehicle_addWheel},
		{"PhysicsVehicle_applyEngineForce", Physics3D_PhysicsVehicle_applyEngineForce},
		{"PhysicsVehicle_setSteeringValue", Physics3D_PhysicsVehicle_setSteeringValue},
		{"PhysicsVehicle_setBrake", Physics3D_PhysicsVehicle_setBrake},
		{"PhysicsVehicle_Update", Physics3D_PhysicsVehicle_Update},
		{"delete_PhysicsVehicle", Physics3D_delete_PhysicsVehicle},
		{NULL, NULL}
	};
	luaL_openlib(L, "Physics3D", physics3dLib, 0);
	return 1;
}