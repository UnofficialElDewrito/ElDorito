#pragma once
#include "new\cseries\cseries.hpp"
#include "new\game\game_mode.hpp"

namespace blam
{
	struct game_globals
	{
		char unknown0[0x10];
		game_mode current_game_mode;
		char unknown14[0x13A];
		short current_insertion_point;
		char unknown150[0x250B8];
	};
	static_assert(sizeof(game_globals) == 0x25208);

	game_globals *__cdecl game_globals_get();

	inline bool game_globals_simulation_has_dist_server() { return ((bool(*)())0x531AF0)(); }
}