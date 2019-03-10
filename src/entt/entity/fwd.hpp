#ifndef ENTT_ENTITY_FWD_HPP
#define ENTT_ENTITY_FWD_HPP


#include "../config/config.h"


namespace entt {


template <typename>
class basic_registry;

using entity = ENTT_ENTITY_TYPE;
using registry = basic_registry<entity>;


}


#endif // ENTT_ENTITY_FWD_HPP
