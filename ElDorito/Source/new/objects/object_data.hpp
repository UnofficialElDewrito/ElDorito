#pragma once

#include "new\cseries\cseries.hpp"
#include "new\memory\data.hpp"

namespace blam
{
	struct object_placement_data
	{
		datum_index tag_index;
		dword unknown4;
		dword unknown8;
		dword unknownC;
		dword unknown10;
		dword unknown14;
		dword unknown18;
		real_vector3d transitional_velocity;
		real_vector3d forward;
		real_vector3d up;
		dword unknown40;
		dword unknown44;
		dword unknown48;
		dword unknown4C;
		dword unknown50;
		dword unknown54;
		real unknown58;
		datum_index player_object_index;
		datum_index owner_object_index;
		dword owner_team;
		dword unknown68;
		dword unknown6C;
		dword unknown70;
		dword unknown74;
		dword unknown78;
		dword unknown7C;
		dword unknown80;
		dword unknown84;
		dword unknown88;
		dword unknown8C;
		dword unknown90;
		dword unknown94;
		dword unknown98;
		dword unknown9C;
		dword unknownA0;
		dword unknownA4;
		dword unknownA8;
		dword unknownAC;
		dword unknownB0;
		dword unknownB4;
		dword unknownB8;
		dword unknownBC;
		dword unknownC0;
		dword unknownC4;
		dword unknownC8;
		dword unknownCC;
		dword unknownD0;
		dword unknownD4;
		dword unknownD8;
		dword unknownDC;
		dword unknownE0;
		dword unknownE4;
		dword unknownE8;
		dword unknownEC;
		dword unknownF0;
		dword unknownF4;
		dword unknownF8;
		dword unknownFC;
		dword unknown100;
		dword unknown104;
		dword unknown108;
		dword unknown10C;
		dword unknown110;
		dword unknown114;
		dword unknown118;
		dword unknown11C;
		dword unknown120;
		dword unknown124;
		dword unknown128;
		dword unknown12C;
		dword unknown130;
		dword unknown134;
		dword unknown138;
		dword unknown13C;
		dword unknown140;
		dword unknown144;
		dword unknown148;
		dword unknown14C;
		dword unknown150;
		dword unknown154;
		dword unknown158;
		dword unknown15C;
		dword unknown160;
		dword unknown164;
		dword unknown168;
		dword unknown16C;
		dword unknown170;
		dword unknown174;
		dword unknown178;
		dword unknown17C;
		dword unknown180;
		dword unknown184;
		dword unknown188;
	};
	static_assert(sizeof(object_placement_data) == 0x18C);
}