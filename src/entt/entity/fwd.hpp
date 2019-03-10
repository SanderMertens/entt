#ifndef ENTT_ENTITY_FWD_HPP
#define ENTT_ENTITY_FWD_HPP


#include "../config/config.h"


namespace entt {


template <typename>
class basic_registry;

template <typename>
struct basic_actor;

using entity = ENTT_ENTITY_TYPE;
using registry = basic_registry<entity>;
using actor = basic_actor<entity>;


}


#endif // ENTT_ENTITY_FWD_HPP
