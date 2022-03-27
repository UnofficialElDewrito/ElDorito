#pragma once
#include "Blam\Tags\Tags.hpp"

namespace Blam::Tags::Sounds
{
	enum class SoundClass : int8_t {
		ProjectileImpact,
		ProjectileDetonation,
		ProjectileFlyby,
		ProjectileDetonationLod,
		WeaponFire,
		WeaponReady,
		WeaponReload,
		WeaponEmpty,
		WeaponCharge,
		WeaponOverheat,
		WeaponIdle,
		WeaponMelee,
		WeaponAnimation,
		ObjectImpacts,
		ParticleImpacts,
		WeaponFireLod,
		WeaponFireLodFar,
		Unused2Impacts,
		UnitFootsteps,
		UnitDialog,
		UnitAnimation,
		UnitUnused,
		VehicleCollision,
		VehicleEngine,
		VehicleAnimation,
		VehicleEngineLod,
		DeviceDoor,
		DeviceUnused0,
		DeviceMachinery,
		DeviceStationary,
		DeviceUnused1,
		DeviceUnused2,
		Music,
		AmbientNature,
		AmbientMachinery,
		AmbientStationary,
		HugeAss,
		ObjectLooping,
		CinematicMusic,
		PlayerArmor,
		UnknownUnused1,
		AmbientFlock,
		NoPad,
		NoPadStationary,
		Arg,
		CortanaMission,
		CortanaGravemindChannel,
		MissionDialog,
		CinematicDialog,
		ScriptedCinematicFoley,
		Hud,
		GameEvent,
		Ui,
		Test,
		MultilingualTest,
		AmbientNatureDetails,
		AmbientMachineryDetails,
		InsideSurroundTail,
		OutsideSurroundTail,
		VehicleDetonation,
		AmbientDetonation,
		FirstPersonInside,
		FirstPersonOutside,
		FirstPersonAnywhere,
		UiPda
	};

	// TODO: Find a more elegant solution later
	enum class SoundClassShort : int16_t {
		ProjectileImpact,
		ProjectileDetonation,
		ProjectileFlyby,
		ProjectileDetonationLod,
		WeaponFire,
		WeaponReady,
		WeaponReload,
		WeaponEmpty,
		WeaponCharge,
		WeaponOverheat,
		WeaponIdle,
		WeaponMelee,
		WeaponAnimation,
		ObjectImpacts,
		ParticleImpacts,
		WeaponFireLod,
		WeaponFireLodFar,
		Unused2Impacts,
		UnitFootsteps,
		UnitDialog,
		UnitAnimation,
		UnitUnused,
		VehicleCollision,
		VehicleEngine,
		VehicleAnimation,
		VehicleEngineLod,
		DeviceDoor,
		DeviceUnused0,
		DeviceMachinery,
		DeviceStationary,
		DeviceUnused1,
		DeviceUnused2,
		Music,
		AmbientNature,
		AmbientMachinery,
		AmbientStationary,
		HugeAss,
		ObjectLooping,
		CinematicMusic,
		PlayerArmor,
		UnknownUnused1,
		AmbientFlock,
		NoPad,
		NoPadStationary,
		Arg,
		CortanaMission,
		CortanaGravemindChannel,
		MissionDialog,
		CinematicDialog,
		ScriptedCinematicFoley,
		Hud,
		GameEvent,
		Ui,
		Test,
		MultilingualTest,
		AmbientNatureDetails,
		AmbientMachineryDetails,
		InsideSurroundTail,
		OutsideSurroundTail,
		VehicleDetonation,
		AmbientDetonation,
		FirstPersonInside,
		FirstPersonOutside,
		FirstPersonAnywhere,
		UiPda
	};
}
