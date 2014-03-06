#pragma once
#include <Vision/Runtime/Framework/VisionApp/VAppImpl.hpp>

enum CustomControls{
	BUILT_IN_COUNT = VAPP_INPUT_CONTROL_LAST_ELEMENT,
	CUSTOM_CONTROL_ONE,
	CUSTOM_CONTROL_TWO,
	CUSTOM_CONTROL_THREE,
	CUSTOM_CONTROL_FOUR,
	CUSTOM_CONTROL_FIVE,
	X,
	Y,
	PICK
};

enum SceneID{
	MAIN_MENU,
	GRAVITY_ROOM, 
	TOWER_OF_DOOM, 
	PARTICLE_RAIN,
	TUMBLER, 
	CAR_DERBY,  
	WATER_SIMULATION
};
